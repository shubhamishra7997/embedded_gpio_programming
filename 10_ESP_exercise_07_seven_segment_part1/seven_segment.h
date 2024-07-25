void seven_segment_init(void);
void output_f(char);
void output_k(char);
void display_delay(volatile long);

void seven_segment_init()
{
  volatile char *dir_f = (char *) 0x30;
  *dir_f = 0xFF;
  volatile char *dir_k = (char *) 0x107;
  *dir_f = 0xFF;
}

void output_f(char out_data_f)
{
  volatile char *port_f = (char *) 0x31;
  *port_f = out_data_f;
}

void output_k(char out_data_k)
{
  volatile char *port_k = (char *) 0x108;
  *port_k = out_data_k;
}

void display_delay(volatile long count)
{
  while(count--);
}