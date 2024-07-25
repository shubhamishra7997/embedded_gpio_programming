#include "led.h"
void setup() {
  // put your setup code here, to run once:
  led_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  char x;
  volatile long i;

  //Task 1. Blink First LED (With Delay)
  //for (i=0;i<70000; i++);
  //output(0x01);
  //for (i=0;i<70000; i++);
  //output(0x00);
  //End of Task 1.

  //Task 2. Blink all the 8 LEDs (with delay)
  //for (i=0;i<70000; i++);
  //output(0xFF);
  //for (i=0;i<70000; i++);
  //output(0x00);

  /*
  //Task 3. Glow the LEDs one by one (Do not off the LED)
  for (x=0;x<8; x++)
  {
    for (i=0;i<70000; i++);
    output((1<<x)); //shift the LED sequence
    //for (i=0;i<70000; i++);
    //output(0x00); 
  }
  //End of Task 3
  */

  /*
  //Task 4. Glow the LEDs one by one(at a time one LED should glow)
  for (x=0;x<8; x++)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<70000; i++);
    output(0x00); 
  }
  //End of task 4
  */

  /*  
  //Task 5. Glow the EVEN LEDs one by one (Do not off the LED)
  for (x=0;x<8;x+=2)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++);
  }
  //End of task 5
  */

    /*  
  //Task 6. Glow the ODD LEDs one by one (Do not off the LED)
  for (x=1;x<8;x+=2)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++);
  }
  //End of task 6
  */

    /* 
  //Task 7. Glow 0 to 3 LEDs (one by one)
  for (x=1;x<4;x++)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++);
  }
  //End of task 7
   */
  
  /*  
  //Task 8. Glow 4 to 7 LEDs (one by one)
  for (x=4;x<8;x++)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++);
  }
  //End of task 8
  */

    /*  
  //Task 9. Glow 3 to 0 LEDs (one by one)
  for (x=3;x>=0;x--)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++);
  }
  //End of task 9
  */

      /*  */
  //Task 10. Glow 7 to 4 LEDs (one by one)
  for (x=7;x>=4;x--)
  {
    output((1<<x)); //shift the LED sequence
    for (i=0;i<100000; i++);
  }
  //End of task 10
  
  

}
