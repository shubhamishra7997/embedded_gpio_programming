#define LED_DIR_ADDRESS 0x21 // DDRA
#define LED_DATA_ADDRESS 0x22 // PINA

void led_init(void);
void output(char);
void led_delay(volatile long);

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

void led_delay(volatile long count)
{
  while(count--);
}