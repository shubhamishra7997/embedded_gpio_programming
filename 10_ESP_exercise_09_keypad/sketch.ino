//Use 4 x 4 Keypad and Quad 7 Segment Display
// Use the following Keypad Layout.
/*
  1 2 3 +
  4 5 6 -
  7 8 9 *
  <- 0 = /

  //when DIG pins is 0, it is ON (common cathode).
  / DIG order is DIG1, DIG2, DIG3, DIG4
*/
#include "keypad_init.h"
void setup() {
  // put your setup code here, to run once:
  pin_setup();
  Serial.begin(115200); // Any baud rate should work
  Serial.println("Hello Arduino\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char i, j, count, *in_k, *out_c, *out_f, *out_a;
  in_k = 0x106;
  out_a = 0x22;
  out_f = 0x31;
  out_c = 0x28;

  /*
    //Task 01: Press any switch & display that number.
    //Ex: 1 - > 1, 2 ->2, ... 8 -> 8,9 -> 9,0 -> 0.

    //*out_c = 0x07; //3 digit display 0000 0001 (DIG 1 is off)
    for(i=0;i<4;i++)
    {
    out_f = (1 << i);
    out_c = 0x07; //Display DIG 4 is ON.
    //row 1 (portf) and column 1 (pin k) = input is 1
    if ((*out_f == ROW_ONE) && (*in_k == COL_ONE))
    {
         out_a = ONE;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_ONE) && (*in_k == COL_TWO))
    {
         out_a = TWO;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_ONE) && (*in_k == COL_THREE))
    {
         out_a = THREE;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_TWO) && (*in_k == COL_ONE))
    {
         out_a = FOUR;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_TWO) && (*in_k == COL_TWO))
    {
         out_a = FIVE;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_TWO) && (*in_k == COL_THREE))
    {
         out_a = SIX;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_THREE) && (*in_k == COL_ONE))
    {
         out_a = SEVEN;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_THREE) && (*in_k == COL_TWO))
    {
         out_a = EIGHT;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_THREE) && (*in_k == COL_THREE))
    {
         out_a = NINE;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    else if ((*out_f == ROW_FOUR) && (*in_k == COL_TWO))
    {
         out_a = ZERO;
        keypad_delay(1000000);
         out_a = DISPLAY_OFF;
    }
    }
  */

  // Task 02: Press 4 digits and display that Number.
  // Ex: 1234,6754, 9870, etc
  count = 0;
  *out_c = 0xff;
  for (i = 0; i < 4; i++) {
    *out_f = 1 << i;
    //*out_a = 0x06;
    if ((*out_f == ROW_ONE) && (*in_k == COL_ONE))
    {
      *out_a = ONE;

    }
    else if ((*out_f == ROW_ONE) && (*in_k == COL_TWO))
    {
      *out_a = TWO;

    }
    else if ((*out_f == ROW_ONE) && (*in_k == COL_THREE))
    {
      *out_a = THREE;
    }
    else if ((*out_f == ROW_TWO) && (*in_k == COL_ONE))
    {
      *out_a = FOUR;

    }
    else if ((*out_f == ROW_TWO) && (*in_k == COL_TWO))
    {
      *out_a = FIVE;

    }
    else if ((*out_f == ROW_TWO) && (*in_k == COL_THREE))
    {
      *out_a = SIX;

    }
    else if ((*out_f == ROW_THREE) && (*in_k == COL_ONE))
    {
      *out_a = SEVEN;

    }
    else if ((*out_f == ROW_THREE) && (*in_k == COL_TWO))
    {
      *out_a = EIGHT;
    }
    else if ((*out_f == ROW_THREE) && (*in_k == COL_THREE))
    {
      *out_a = NINE;
    }
    else if ((*out_f == ROW_FOUR) && (*in_k == COL_TWO))
    {
      *out_a = ZERO;

    }
    if (*in_k != 0)
    {
      if (count == 0)
      {
        Serial.println("Button pressed first time");
        *out_c = 0x0E; //D1 is zero. D4D3D2D1 1110
        count++;
        keypad_delay(5000000);
        Serial.println("Ready for new input");
      }
      else if (count == 1)
      {
        Serial.println("Button pressed second time");
        *out_c = 0x0D; //D2 is zero. D4D3D2D1 1101
        keypad_delay(5000000);
        Serial.println("Ready for new input");
        count++;
      }

    }
  }

}