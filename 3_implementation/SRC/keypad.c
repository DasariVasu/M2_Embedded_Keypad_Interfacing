uint8_t scanKeyboard(){

  PORTD  |= (1<< COLUMN1) | (1<<COLUMN2) | (1<< COLUMN3);
  
  //variable that will store the state of the row pins
  uint8_t rowState = PORTB;
  uint8_t masker = 0b00001111;
  for(int i = 4; i < 7; i++){
    PORTD &= ~(1 << i);

    //Read all rows simultaneously and record the data to be used in if 
    statements later for indicating the specific key pressed
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
