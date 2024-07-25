void led_init (void);
void output (char);

void led_init()
{
  volatile char *port_dir = (char *) 0x21; //DDRA
  *port_dir = 0xFF; //output
}

void output(char out_data)
{
  volatile char *port_data = (char *) 0x22; //PORTA
  *port_data = out_data;
}