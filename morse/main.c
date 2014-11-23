//******************************************************************************
//  Based on MSP430F20xx Demo - Software Toggle P1.0
//
//  Description; Sends characters by morse
//  ACLK = n/a, MCLK = SMCLK = default DCO
//
//                MSP430F20xx
//             -----------------
//         /|\|              XIN|-
//          | |                 |
//          --|RST          XOUT|-
//            |                 |
//            |             P1.0|-->LED
//
//  Chris Swan
//  September 2011
//******************************************************************************

#include  <msp430G2231.h>

void dot(void);
void dash(void);
void shortpause(void);
void shortbreak(void);
void longbreak(void);
void tap_A(void);
void tap_B(void);
void tap_C(void);
void tap_D(void);
void tap_E(void);
void tap_F(void);
void tap_G(void);
void tap_H(void);
void tap_I(void);
void tap_J(void);
void tap_K(void);
void tap_L(void);
void tap_M(void);
void tap_N(void);
void tap_O(void);
void tap_P(void);
void tap_Q(void);
void tap_R(void);
void tap_S(void);
void tap_T(void);
void tap_U(void);
void tap_V(void);
void tap_W(void);
void tap_X(void);
void tap_Y(void);
void tap_Z(void);

void main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P1DIR |= 0x01;                            // Set P1.0 to output direction

  for (;;)
  {
  	tap_G();
  	tap_R();
  	tap_E();
  	tap_N();
  	tap_F();
  	tap_E();
  	tap_L();
  	tap_L();
  	longbreak();
  	tap_I();
  	tap_S();
  	longbreak();
  	tap_G();
  	tap_R();
  	tap_E();
   	tap_A();
  	tap_T();
  	longbreak();
  	longbreak();
  	longbreak();
  }
}

void dot(void)
{
    P1OUT = 0x01;                          // LED on

    shortpause();

    P1OUT = 0x00;                          // LED off

    shortpause();
}

void dash(void)
{

    P1OUT = 0x01;                          // LED on

    shortpause();                          // dash is three times longer than dot
    shortpause();
    shortpause();

    P1OUT = 0x00;                          // LED off

    shortpause();
}

void shortpause(void)
{
    volatile unsigned int i;

    i = 25000;                              // Delay
    do (i--);
    while (i != 0);
}

void shortbreak(void)
{
    shortpause();
    shortpause();
}

void longbreak(void)
{
	shortbreak();
	shortbreak();
}

void tap_A(void)
{
	dot();
	dash();
	shortbreak();
}


void tap_B(void)
{
	dash();
	dot();
	dot();
	dot();
	shortbreak();
}

void tap_C(void)
{
	dash();
	dot();
	dash();
	dot();
	shortbreak();
}

void tap_D(void)
{
	dash();
	dot();
	dot();
	shortbreak();
}

void tap_E(void)
{
	dot();
	shortbreak();
}

void tap_F(void)
{
	dot();
	dot();
	dash();
	dot();
	shortbreak();
}

void tap_G(void)
{
	dash();
	dash();
	dot();
	shortbreak();
}

void tap_H(void)
{
	dot();
	dot();
	dot();
	dot();
	shortbreak();
}

void tap_I(void)
{
	dot();
	dot();
	shortbreak();
}

void tap_J(void)
{
	dot();
	dash();
	dash();
	dash();
	shortbreak();
}

void tap_K(void)
{
	dash();
	dot();
	dash();
	shortbreak();
}

void tap_L(void)
{
	dot();
	dash();
	dot();
	dot();
	shortbreak();
}

void tap_M(void)
{
	dash();
	dash();
	shortbreak();
}

void tap_N(void)
{
	dash();
	dot();
	shortbreak();
}

void tap_O(void)
{
	dash();
	dash();
	dash();
	shortbreak();
}

void tap_P(void)
{
	dot();
	dash();
	dash();
	dot();
	shortbreak();
}


void tap_Q(void)
{
	dash();
	dash();
	dot();
	dash();
	shortbreak();
}

void tap_R(void)
{
	dot();
	dash();
	dot();
	shortbreak();
}

void tap_S(void)
{
	dot();
	dot();
	dot();
	shortbreak();
}

void tap_T(void)
{
	dash();
	shortbreak();
}

void tap_U(void)
{
	dot();
	dot();
	dash();
	shortbreak();
}

void tap_V(void)
{
	dot();
	dot();
	dash();
	shortbreak();
}

void tap_W(void)
{
	dot();
	dash();
	dash();
	shortbreak();
}

void tap_X(void)
{
	dash();
	dot();
	dot();
	dash();
	shortbreak();
}

void tap_Y(void)
{
	dash();
	dot();
	dash();
	dash();
	shortbreak();
}

void tap_Z(void)
{
	dash();
	dash();
	dot();
	dot();
	shortbreak();
}
