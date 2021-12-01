#include <avr/io.h>
#include <stdio.h>
#include <avr/delay.h>

// Setting macro definitions for the 3x4 Keypad for easy portability

#define F_CPU 16000000
#define COLUMN1 PORTD4
#define COLUMN2 PORTD5
#define COLUMN3 PORTD6

#define ROW1 PINB0
#define ROW2 PINB1
#define ROW3 PINB2
#define ROW4 PINB3


#define LED1 PORTC0
#define LED2 PORTC1
#define LED3 PORTC2
#define LED4 PORTC3


uint8_t scanKeyboard();
uint8_t determineKey(uint8_t scannedKey);

void setup(){
   //Initialize output pins and internal resistors
  
  //LED
  DDRC |= (1<<LED1) | (1 << LED2) | (1 << LED3) | (1 << LED4);
  
  
  //Columns
  DDRD |= (1<< COLUMN1) | (1<<COLUMN2) | (1<< COLUMN3);
  
  //Set all columns to high 0b10101000
  PORTD  |= (1<< COLUMN1) | (1<<COLUMN2) | (1<< COLUMN3);
  
  
  //Rows implicitly defined as inputs
  
  //Turn on internal pull ups for the rows
  DDRB = 0x00;
  PORTB |= (1<<ROW1) | (1 << ROW2) | (1 << ROW3) | (1 << ROW4);

  Serial.begin(9600);
  
  }

void loop(){
  
  
  
  
  while(1){
    
    PORTC = determineKey(scanKeyboard());
    _delay_ms(100);
  }
  
  
  
  
  return 0;
}

uint8_t scanKeyboard(){
  
  
  PORTD  |= (1<< COLUMN1) | (1<<COLUMN2) | (1<< COLUMN3);

  
  //variable that will store the state of the row pins
  uint8_t rowState = PORTB;
  uint8_t masker = 0b00001111;
  for(int i = 4; i < 7; i++){
    PORTD &= ~(1 << i);
    
    //Read all rows simultaneously and record the data to be used in if statements later for indicating the specific key pressed
    rowState = (masker & PINB);
    
    Serial.print(rowState);
    Serial.print("\t");
    Serial.print(PINB);
    Serial.print("\n");
    if(rowState != PORTB){
      return PORTD | rowState;
      } else {}


      //Reset
        PORTD  |= (1<< COLUMN1) | (1<<COLUMN2) | (1<< COLUMN3);
        rowState = PORTB;
    }
    return 0;
  }
  
  uint8_t determineKey(uint8_t scannedKey){
    
  
    // 0b (0) (C3) (C2) (C1) (R4) (R3) (R2) (R1)
    
    
    if (scannedKey == 0b01101110){
      //Do something that indicates 1 has been pressed
      return 1;
    } else if (scannedKey == 0b01011110){
      //Do something that indicates 2 has been pressed
      return 2;
    } else if (scannedKey == 0b00111110){
      //Do something that indicates 3 has been pressed
      return 3;
    } else if (scannedKey == 0b01101101){
      //Do something that indicates 4 has been pressed
      return 4;
    } else if (scannedKey == 0b01011101){
      //Do something that indicates 5 has been pressed
      return 5;
    } else if (scannedKey == 0b00111101){
      //Do something that indicates 6 has been pressed
      return 6;
    } else if (scannedKey == 0b01101011){
      //Do something that indicates 7 has been pressed
      return 7;
    } else if (scannedKey == 0b01011011){
      //Do something that indicates 8 has been pressed
      return 8;
    } else if (scannedKey == 0b00111011){
      //Do something that indicates 9 has been pressed
      return 9;
    } else if (scannedKey == 0b01100111){
      //Do something that indicates * has been pressed
      return 10;
    } else if (scannedKey == 0b01010111){
      //Do something that indicates 0 has been pressed
      return 11;
    } else if (scannedKey == 0b00110111){
      //Do something that indicates # has been pressed
      return 12;
    } else {
      //This should not happen
      return 15;
    }
  }
