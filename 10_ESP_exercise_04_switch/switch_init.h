void switch_delay(volatile long);
void pin_setup(void);
void set_output(char);
char read_input(void);

void pin_setup()
{
  volatile char *dir_f, *dir_k;
  dir_f = (char *) 0x30;  //map to DDR_F
  dir_k = (char *) 0x107;   //map tp DDR_K
  *dir_f = 0xFF;         //set F to output
  *dir_k = 0x00;          //set K to input.

}

void set_output(char out_data)
{
  volatile char *data_f;
  data_f = 0x31;
  *data_f = out_data;
}

char read_input ()
{
  volatile char *data_k, in_data;
  data_k = 0x106;
  in_data = *data_k; 
  return in_data;
}

void switch_delay(volatile long count)
{
  while(count --);
}
