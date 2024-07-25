//LED HW: 1) PIN -> LED (Anode).
//LED HW: 2) GND -> REG (330 Ohm) -> LED (Cathode)

#include "led.h"
void setup() {
  // put your setup code here, to run once:
  void led_init(); //DDRA
}

void loop() {
  // put your main code here, to run repeatedly:
  char x;

  //Task1: Glow LSB (Bit 0 only)
  //x = 0x01; //0b00000001
  //output(x); 
  //End of task 1

  //Task2: Glow MSB (Bit 7 only)
  //x = 0x80;
  //output(x); //0b10000000
  //End of task 2

  //Task3: Glow LSB 2 LEDs only (bit 0 & bit 1)
  //x = 0x03; //0b00000011
  //output(x);
  //End of task 3

  //Task4: Glow MSB 2 LEDs only (bit 7 & bit 6)
  //x = 0xC0; //0b11000000
  //output(x);
  //End of task 4

  //Task5: Glow LSB 4 LEDs only (bit 0 to bit 3)
  // output(0x0F); //0b00001111
  //End of task 5

  //Task6: Glow MSB 4 LEDs only (bit 7 to bit 4)
  //output(0xF0); //0b11110000
  //End of task 6

  //Task7:Glow all 8 LEDs
  //output(0xFF); //0b111111111
  //End of task 7

  //Task8:Glow all ODD no LEDs
  //output(0xAA); //0b10101010
  //End of task 8

  //Task9:Glow all EVEN no LEDs
  //output(0x55); //0b01010101
  //End of task 9

  //Task10:  Glow LEDs of bit7, bit4, bit3, bit1
  //output(0x9A); //0b10011010
  //End of task 10

  
  




}
