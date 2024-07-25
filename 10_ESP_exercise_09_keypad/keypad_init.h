void keypad_delay(volatile long);
void pin_setup(void);

#define ROW_ONE    0x01 // Keyboard row 1 active
#define ROW_TWO    0x02 // Keyboard row 2 active
#define ROW_THREE  0x04 // Keyboard row 3 active
#define ROW_FOUR   0x08 // Keyboard row 4 active
#define COL_ONE    0x01 // Keyboard column 1 active
#define COL_TWO    0x02 // Keyboard column 2 active
#define COL_THREE  0x04 // Keyboard column 3 active
#define COL_FOUR   0x08 // Keyboard column 4 active

#define DISPLAY_OFF   0x00  // 7 segment OFF
#define ZERO          0x3F  // 7 segment 0
#define ONE	          0X06  // 7 segment 1
#define TWO	          0X5B  // 7 segment 2
#define THREE	        0X4F  // 7 segment 3
#define FOUR	        0X66  // 7 segment 4
#define FIVE	        0X6D  // 7 segment 5
#define SIX	          0X7D  // 7 segment 6
#define SEVEN	        0X07  // 7 segment 7
#define EIGHT	        0X7F  // 7 segment 8
#define NINE	        0X6F  // 7 segment 9
#define DECIMAL_POINT 0X80  // 7 segment decimal

void keypad_delay(volatile long count)
{
  while (count--);
}

void pin_setup()
{
  volatile char *dir_f; //sets the ROWS - output pins.
  dir_f = 0x30;
  *dir_f = 0x0F; //only A0 to A3 used.

  volatile char *dir_k; //reads the COLUMNS - input pins.
  dir_k = 0x107;
  *dir_k = 0x00; // only A8 to A11 used.

  volatile char *dir_a;
  dir_a = 0x21;
  *dir_a = 0xFF; //sets the LEDs

  volatile char *dir_c;
  dir_c = 0x27;
  *dir_c = 0x0F; //sets the LEDs
}


/*
char set_digits(volatile char *, volatile char *);
char set_digits(volatile char *in_data, volatile char *out_row)
{
  //volatile char i;
  volatile char *out_data, *out_a;
  out_a = 0x22;
  //volatile char *out_f;
  //out_f = 0x31;
  //for (i = 0; i < 4; i++)
  //{
  //  *out_f = (1 << i);
    //*out_c = 0x07; //Display DIG 4 is ON.
    //row 1 (portf) and column 1 (pin k) = input is 1
    if ((*out_row == ROW_ONE) && (*in_data == COL_ONE))
    {
      *out_data = ONE;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_ONE) && (*in_data == COL_TWO))
    {
      *out_data = TWO;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_ONE) && (*in_data == COL_THREE))
    {
      *out_data = THREE;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_TWO) && (*in_data == COL_ONE))
    {
      *out_data = FOUR;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_TWO) && (*in_data == COL_TWO))
    {
      *out_data = FIVE;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_TWO) && (*in_data == COL_THREE))
    {
      *out_data = SIX;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_THREE) && (*in_data == COL_ONE))
    {
      *out_data = SEVEN;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_THREE) && (*in_data == COL_TWO))
    {
      *out_data = EIGHT;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_THREE) && (*in_data == COL_THREE))
    {
      *out_data = NINE;
      *out_a = *out_data;
    }
    else if ((*out_row == ROW_FOUR) && (*in_data == COL_TWO))
    {
      *out_data = ZERO;
      *out_a = *out_data;return *out_data;
    }
  //}
}
*/
