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
