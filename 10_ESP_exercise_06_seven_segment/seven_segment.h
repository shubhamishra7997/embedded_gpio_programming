void seven_segment_init(void);
void output(char);
void display_delay(volatile long);

void seven_segment_init()
{
  volatile char *dir_f = (char *) 0x30;
  *dir_f = 0xFF;
}

void output(char out_data)
{
  volatile char *port_f = (char *) 0x31;
  *port_f = out_data;
}

void display_delay(volatile long count)
{
  while(count--);
}