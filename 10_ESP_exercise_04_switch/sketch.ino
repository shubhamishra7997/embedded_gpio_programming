/*TO DO: 
8. Press 0th switch 7th LED should glow
Press 1st switch 6th LED should glow up to 7th switch
9. Press any switch 0th LED ON, OFF 1st LED ON, OFF
10. Press 1st switch At a time glow 0th LED,3rd LED, 4th LED,7th LED
*/

//Connect 8 LEDs to an 8-bit port, Connect 8 Switches to an 8-bit port
#include"switch_init.h"

#define FIRST 0x01
#define SECOND 0x02
#define THIRD 0x04
#define FOURTH 0x08
#define FIFTH 0x10
#define SIXTH 0x20
#define SEVENTH 0x40
#define EIGTH 0x80
void setup() {
  // put your setup code here, to run once:
  pin_setup();
}

void loop() {
  volatile char x;
  volatile char y;
  volatile long i;
  // put your main code here, to run repeatedly:

  /*
  //Task 1. Press 0th switch glow all 8 LEDs.
  //volatile char x;
  x = 0XFF;
  //output(x);

  //volatile char y;
  y = read_input();
  if( (y & 0x01) == 0x01) //read only pin A8
  {
    set_output(x);
    switch_delay(100000);
  }
  //else
  //  set_output(0x00);
  */

  /* 
  //Task 2. Press 2nd switch blink 8 LEDs.
  //volatile char x;
  x = 0XFF; //Set all LED to output.

  //volatile char y;
  //volatile long i;
  y = read_input();
  if( (y & 0x04) == 0x04) //read only pin A10 
  {
    while(1)
    {
      set_output(x);
      switch_delay(1000000);
      set_output(0x00);
      switch_delay(1000000);
    }
  } 
  */

  /*   
  //Task 3: Press 3rd switch glow 0th LED, delay,1st LED, delay.
  //volatile char x;
  //x = 0XFF; //Set all LED to output.

  y = read_input();
  if( (y & 0x08) == 0x08) //read only pin A11
  {
    while(1)
    {
      for(i=0;i<9;i++)
      {
        set_output(1<<i);
        switch_delay(1000000);
        set_output(0x00);
        switch_delay(1000000);
      }
    }
  }
  */ 

  
  /*
  //Task 4: Press 1st switch glow glow 7th LED, delay,6th LED, delay ...
  //volatile char x;
  //x = 0XFF; //Set all LED to output.

  //volatile char y;
  //volatile long i;
  y = read_input();
  if( (y & 0x02) == 0x02) //read only pin A11
  {
    while(1)
    {
      for(i=9;i>=0;i--)
      {
        set_output(1<<i);
        switch_delay(1000000);
        set_output(0x00);
        switch_delay(1000000);
      }
    }
  }
  */
  /*
  //Task 5: Press 4th switch glow even LEDs.
  y = read_input();
  if( (y & 0x10) == 0x10) //read only pin A11
  {
    while(1)
    {
      for(i=0;i<8;i+=2)
      {
        set_output(1<<i);
        switch_delay(1000000);
        set_output(0x00);
        switch_delay(1000000);
      }
    }
  }
  */

  /*
  //Task 6: Press 5th switch glow odd LEDs.
  y = read_input();
  if( (y & 0x20) == 0x20) //read only pin A11
  {
    while(1)
    {
      for(i=1;i<8;i+=2)
      {
        set_output(1<<i);
        switch_delay(1000000);
        set_output(0x00);
        switch_delay(1000000);
      }
    }
  }
  */
 /**/
 //Task 7. Press 0th switch 0th LED should glow, Press 1st switch 1st LED should glow ..
  y = read_input();
  if( (y & FIRST) == FIRST) //read only pin A11
  {
    set_output(FIRST);
  }
  else if( (y & SECOND) == SECOND) //read only pin A11
  {
    set_output(SECOND);
  }
  else if( (y & THIRD) == THIRD) //read only pin A11
  {
    set_output(THIRD);
  }
    else if( (y & FOURTH) == FOURTH) //read only pin A11
  {
    set_output(FOURTH);
  }
    else if( (y & FIFTH) == FIFTH) //read only pin A11
  {
    set_output(FIFTH);
  }
    else if( (y & SIXTH) == SIXTH) //read only pin A11
  {
    set_output(SIXTH);
  }
  else if( (y & SEVENTH) == SEVENTH) //read only pin A11
  {
    set_output(SEVENTH);
  }
    else if( (y & EIGTH) == EIGTH) //read only pin A11
  {
    set_output(EIGTH);
  }
}
