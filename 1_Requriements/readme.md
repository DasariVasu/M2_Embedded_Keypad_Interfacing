# Requirements

# Introduction

In this project we are going to interface a 4x3 (12 key) keypad with ATMEGA328 microcontroller. We know that keypad is one of the most important input devices used in electronics projects. Keypad is one of the easiest ways to give commands or instructions to an electronic system.
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
1 4*4 Keypad Interface
2 16*2 LCD Interface
3 AVR Atmega 328 Microcontroller
Keypads are widely used input devices being used in various electronics and embedded projects,keypads are one of the most popular components that are widely used in electronics everybody can communicate with the system by switches,normally every key occupies one digital pin of the microcontroller.But by using a 3x4 Keypad you can reduce the occupied pins.With this module,you can use all 12 switches by occupying only 7 pins of the microcontroller.
# Software Used
- SimulIDE
- Visual Studio Code
# 4W'S and 1'H
What

Keypads are widely used input devices being used in various electronics and embedded projects. They are used to take inputs in the form of numbersand feed the same into system for further processing.

Where

Matrix keypads are the kind of keypads you see on cell phones, calculators, microwaves ovens, door locks, etc. They’re practically everywhere.

When

Matrix Keypad is a very useful module for embedded systems and a variety of projects. This tutorial briefly explains the interface of 4×3 and 4×4 keypads with Arduino and few programs using keypad library, including code for 16×2 LCD display.

why

Everybody can communicate with the system by switches. Normally, every key occupies one digital pin of the microcontroller. But by using a 3×4 keypad you can reduce the occupied pins. With this module, you can use all 12 switches by occupying only 7 pins of the microcontroller.

How

The keypad 4x3 features a toatl of 12 buttons in matrix form.consider 4 rows as input and 3 columns as ouput.Each switch is connected from one side to a row and from the other side to a column.For example,if we press switch number 1 the input of this row is saved at the ouput of its column.The image below shows the internal circuit of this keypad/keyboard.

# Detail Requirements
__High Level Requirements__
|ID|	Description |	Status |
|--|--------------|-------|
|HLR_1|Control Unit|Implemented |
|HLR_2|Input Unit	|Implemented|
|HLR_3| Output Unit|Implemented |
|HLR_4|Software Design|	Implemented |

__Low Level Requirements__
|ID|	Description|	HLR ID	|Status|
|--|------------|--------|-------|
|LLR_1	|AVR Atmega 328 Microcontroller	|HLR_1	|Implemented|
|LLR_2	|4*4 Keypad Interface|	HLR_2	|Implemented|
|LLR_3 	|16*2 LCD Interface	|HLR_3	|Implemented|
|LLR_4	|Visual Studio Code & Simulide|	HLR_4	|Implemented|
