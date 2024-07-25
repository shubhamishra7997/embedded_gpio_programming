#include "led.h"
void setup() {
  // put your setup code here, to run once:
  led_init();

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile long i;
  char x,y;
  
  //TRIAL
  //x = 0xFF;
  //output(x);


  /*
  //Task 1. Glow the LEDs in following order
  // 3,7 delay – 2,6 delay – 1,5 delay – 0,4 delay
  for (x=3;x>=0;x--)
  {
    output((1<<x+4) | (1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++); //delay
  }
  //End of Task 1
  */

  /*
  //Task 2. Glow the LEDs in following order
  // 0,4 delay – 1,5 delay – 2,6 delay – 3,7 delay
  for (x=0;x<4;x++)
  {
    output((1<<x+4) | (1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++); //delay
  }
  //End of Task 2
  */

  /*
  //Task 3. Glow 0 to 7 LEDs with delay and 7 to 0 LEDs with delay
  for (x=0;x<8;x++)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++); //delay
  }
  for (x=7;x>=0;x--)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++); //delay
  }
  //End of Task 3
  */

  /*
  //Task 4. Glow 0,2,1,3,4,6,5,7 LEDs with delay
  for (i=0;i<100000; i++); //delay

  output(0b1); //shift the LED sequence
  for (i=0;i<100000; i++); //delay

  output(0b100); //shift the LED sequence
  for (i=0;i<100000; i++); //delay

  output(0b10); //shift the LED sequence
  for (i=0;i<100000; i++); //delay
  
  output(0b1000); //shift the LED sequence
  for (i=0;i<100000; i++); //delay
  
  output(0b10000); //shift the LED sequence
  for (i=0;i<100000; i++); //delay
  
  output(0b1000000); //shift the LED sequence
  for (i=0;i<100000; i++); //delay
  
  output(0b100000); //shift the LED sequence
  for (i=0;i<100000; i++); //delay
  
  output(0b10000000); //shift the LED sequence
  for (i=0;i<100000; i++); //delay

  //End of Task 4
  */

  /*
  // Task 5. Glow the LEDs in following order
  // 0,1 delay – 6,7, delay – 2,3, delay – 4,5, delay

  output(0x03); //shift the LED sequence
  for (i=0;i<100000; i++); //delay

  output(0xC0); //shift the LED sequence  
  for (i=0;i<100000; i++); //delay
 
  output(0x0C); //shift the LED sequence
  for (i=0;i<100000; i++); //delay

  output(0x30); //shift the LED sequence  
  for (i=0;i<100000; i++); //delay
  //End of Task 5
  */

    /* 
  // 6. Glow the LEDs in following order
  // 4,5 delay – 2,3, delay – 6,7, delay – 0,1, delay

  output(0x30); //shift the LED sequence  
  for (i=0;i<100000; i++); //delay

  output(0x0C); //shift the LED sequence
  for (i=0;i<100000; i++); //delay
 
  output(0xC0); //shift the LED sequence  
  for (i=0;i<100000; i++); //delay

  output(0x03); //shift the LED sequence
  for (i=0;i<100000; i++); //delay
  
  */
  //Other approach to question 5.
  const char led_patterns[] = {0x30, 0x0C, 0xC0, 0x03};
  long j;
  
  for (j = 0; j < 4; j++) {
    output(led_patterns[j]);
    led_delay(100000);

  //End of Task 5
  }


}
