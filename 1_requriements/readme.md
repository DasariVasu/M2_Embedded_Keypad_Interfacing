# Requirements
# Introduction
In this project we are going to interface a 4x3 (12 key) keypad with ATMEGA16 microcontroller. We know that keypad is one of the most important input devices used in electronics projects. Keypad is one of the easiest ways to give commands or instructions to an electronic system.
# Research
Keypad is most widely used input device to provide input from the outside world to the microcontroller. The keypad makes an application more users interactive.  The concept of interfacing a keypad with the ATmega16 is similar to interfacing it with any other microcontroller. The article of Interfacing keypad with 8051 can be referred for detailed description of the methodology used here. This article explains the interfacing of a 4x3 keypad with AVR microcontroller (ATmega16) and displaying the output on a LCD.
 
# Defining our project
Before we interface the keypad with microcontroller, first we need to understand how it works. Matrix keypad consists of set of Push buttons, which are interconnected. Like in our case we are using 4X3 matrix keypad, in which there are 4 push buttons in each of four rows. And the terminals of the push buttons are connected according to diagram. In first row, one terminal of all the 4 push buttons are connected together and another terminal of 3 push buttons are representing each of 3 columns, same goes for each row. So we are getting 8 terminals to connect with a microcontroller.
# Features
Basic Overview and Example of Matrix Keypad Operation.
- Easy Implementation to Other Applications.
- Advanced Low-Power Implementation Example.
- Fully interrupt driven operation.
- Power-Down Sleep mode.
- Well suited in battery-powered applications.
- Software Button Debouncing.
- Simple Passcode Check Implementation.
- LED Passcode Validation Indicaton.
# SWOT Analysis
The adetailed explanation for keypad interfacing is given in above mentioned article. The brief steps to interface the keypad with AVR are written below:The algorithm and detailed explanation for keypad interfacing is given in above mentioned article. The brief steps to interface the keypad with AVR are written below:
1.     Configure the row pins or column pins.
2.     Make all output pins to low and input pins to high.
3.     Keep monitoring the port value, where the key pad is connected. Configure the row pins or column pins.
4.      ATmega16
5.     LCD
6.     Preset

