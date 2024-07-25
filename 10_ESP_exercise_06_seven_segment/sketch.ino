//Connect a Single 7-Segment Display to an 8-bit port
#include "seven_segment.h"
#include "hex_code.h"

//define in global scope to save program memory
const char arr_num[]={ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
const char arr_prime_num[] = {TWO, THREE, FIVE, SEVEN};
const char alphabets[] = {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
};
void setup() {
  // put your setup code here, to run once:
  seven_segment_init();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;

  //basic check
  //output(nine);
  //display_delay(DELAY_COUNT);
  //output(0x00);
  //display_delay(DELAY_COUNT);

  /*
  //Task 01: Display 0 to 9 without decimal points
  
  for (i=0;i<10;i++)
  {
      display_delay(DELAY_COUNT);
      output(arr_num[i]); 
      display_delay(DELAY_COUNT);
  1
  //End of Task 1
  */

  /*
  //Task 02: Display 0 to 9 with decimal points
  for (i=0;i<10;i++)
  {
      display_delay(DELAY_COUNT);
      output((arr_num[i]) | (decimal_point)); //with decimal point
      display_delay(DELAY_COUNT);
  }
  //End of Task 2
  */

  /*
  //Task 03: Display 9 to 0 with delay
  for (i=9;i>=0;i--)
  {
      display_delay(DELAY_COUNT);
      output(arr_num[i]); 
      display_delay(DELAY_COUNT);
  }
  //End of Task 3
  */
  /*
  //Task 04: Display odd numbers with delay
    for (i=1;i<10;i+=2)
  {
      display_delay(DELAY_COUNT);
      output(arr_num[i]); 
      display_delay(DELAY_COUNT);
  }
   //End of Task 4
   */

/*
//Task 05: Display even numbers with delay
  for (i=0;i<10;i+=2)
  {
      display_delay(DELAY_COUNT);
      output(arr_num[i]); 
      display_delay(DELAY_COUNT);
  }
   //End of Task 5
   */

   /*  */
   //Task 06: Display the possible alphabets ( A to Z)
     for (i=0;i<26;i++)
  {
      display_delay(DELAY_COUNT);
      output(alphabets[i]); 
      display_delay(DELAY_COUNT);
  }
   //End of Task 6


   /*
  //Task 07: Display numbers in following order: 0,2,4,6,8,9,7,5,3,1
  const char task_seven[]={ZERO, TWO, FOUR, SIX, EIGHT, NINE, SEVEN, FIVE, THREE, ONE};
  for (i=0;i<10;i++)
  {
      display_delay(DELAY_COUNT);
      output(task_seven[i]); 
      display_delay(DELAY_COUNT);
  }
   //End of Task 7
   */
  
   /*
  //Task 08: Display the single digit prime numbers 
      int j;
      int count = 0;
      int prime_flag = 0;
      int prime_num[4];
      for(j=2;j<10;j++)
      {
        for(int k = j-1; k>1; k--)
        {
          if(j % k == 0)
          {
            prime_flag = 1;
            break; //not a prime number
          }
        }
        if(prime_flag == 0)
            {
            prime_num[count]+=j;
            count++;
            }
        prime_flag =0;
        }

  for (i=0;i<count;i++)
  {
      display_delay(DELAY_COUNT);
      output(arr_prime_num[i]); 
      display_delay(DELAY_COUNT);
  }
   //End of Task 8
  */

}
