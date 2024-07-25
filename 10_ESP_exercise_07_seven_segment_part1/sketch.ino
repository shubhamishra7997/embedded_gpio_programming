//Connect TWO 7-Segment Displays to 2 individual ports.

#include "seven_segment.h"

//macros 
#define ZERO          0x3F
#define ONE	          0X06
#define TWO	          0X5B
#define THREE	        0X4F
#define FOUR	        0X66
#define FIVE	        0X6D
#define SIX	          0X7D
#define SEVEN	        0X07
#define EIGHT	        0X7F
#define NINE	        0X6F
#define DECIMAL_POINT 0X80
#define DELAY_COUNT   300000

const char arr_num[]={ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void setup() {
  // put your setup code here, to run once:
  seven_segment_init();

}

void loop() {
  // put your main code here, to run repeatedly:

  char i;
  char j;
  //basic check
  //output_f(SIX);
  //display_delay(DELAY_COUNT);
  //output_k(SEVEN);
  //display_delay(DELAY_COUNT);

  /*
  //Task 01: Display 00 to 99 in loop with delay.
  // 2 for loops to (port f for tens place) increment the count.
  for(i=0;i<10;i++)
  {
    output_f(arr_num[i]); 
    display_delay(DELAY_COUNT);
    for(j=0;j<10;j++)
    {
      output_k(arr_num[j]); 
      display_delay(DELAY_COUNT);
    }
    output_k(ZERO); 
  }
  */

  //Task 02: Display 0.0 to 9.9 in loop with delay.
  // 2 for loops (port f for tens place with decimal point) to decrement the count.
  /*  
  for(i=0;i<10;i++)
  {
    output_f((arr_num[i]) | (DECIMAL_POINT)); 
    display_delay(DELAY_COUNT);
    for(j=0;j<10;j++)
    {
      output_k(arr_num[j]); 
      display_delay(DELAY_COUNT);
    }
    output_k(ZERO); 
  }
  */

  /* 
  //Task 03: Display 99 to 00 in loop with delay.
  // 2 for loops to (port f for tens place) increment the count.
    for(i=9;i>=0;i--)
  {
    output_f(arr_num[i]); 
    display_delay(DELAY_COUNT);
    for(j=9;j>=0;j--)
    {
      output_k(arr_num[j]); 
      display_delay(DELAY_COUNT);
    }
    output_k(ZERO); 
  }
  */


  //Task 04: Display 9.9 to 0.0 in loop with delay.
  // 2 for loops (port f for tens place with decimal point) to decrement the count.
      for(i=9;i>=0;i--)
  {
    output_f((arr_num[i]) | (DECIMAL_POINT)); 
    display_delay(DELAY_COUNT);
    for(j=9;j>=0;j--)
    {
      output_k(arr_num[j]); 
      display_delay(DELAY_COUNT);
    }
    output_k(ZERO); 
  }

}
