void led_init(void);
void output(char);


void led_init()
{
  volatile char *port_dir = (char *) 0x21; //DDRA.
  *port_dir = 0xFF;
}

void output(char data_out)
{
  volatile char *port_data = 0x22; //PINA
  *port_data = data_out;
}