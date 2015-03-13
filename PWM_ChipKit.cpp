/*
  PWM_ChipKit.h - Library for custom PMW period.
  Created by Alexis F.C., November, 2011.
  Released into the public domain.
*/
#include "WProgram.h"

#include <PWM_ChipKit.h>

 PWM1::PWM1(int period)
{
    INTEnableSystemMultiVectoredInt(); // Enable system wide interrupt to multivectored mode.
  OC1CON = 0x0000; // Turn off the OC1 when performing the setup
  OC1CON = 0x0006; // Configure for PWM mode without Fault pin enabled

  OC2CON = 0x0000; // Turn off the OC2 when performing the setup
  OC2CON = 0x0006; // Configure for PWM mode without Fault pin enabled

  OC3CON = 0x0000; // Turn off the OC1 when performing the setup
  OC3CON = 0x0006; // Configure for PWM mode without Fault pin enabled

  OC4CON = 0x0000; // Turn off the OC2 when performing the setup
  OC4CON = 0x0006; // Configure for PWM mode without Fault pin enabled

  T2CONSET = 0x0058; // Enable 32-bit Timer mode + 1:32 pre-scaler
  PR2 = period; // Set period
  T2CONSET = 0x8000; // Enable Timer2

  OC1CONSET = 0x8020; // Enable OC1 in 32-bit mode.

  OC2CONSET = 0x8020; // Enable OC2 in 32-bit mode.

  OC3CONSET = 0x8020; // Enable OC3 in 32-bit mode.

  OC4CONSET = 0x8020; // Enable OC4 in 32-bit mode.

  OC1R = 0x00; // Initialize primary Compare register
  OC1RS = 0x00; // Initialize secondary Compare register
  OC2R = 0x00; // Initialize primary Compare register
  OC2RS = 0x00; // Initialize secondary Compare register
  OC3R = 0x00; // Initialize primary Compare register
  OC3RS = 0x00; // Initialize secondary Compare register
  OC4R = 0x00; // Initialize primary Compare register
  OC4RS = 0x00; // Initialize secondary Compare register
}
void PWM1::PWM_Value(int Pin,int Value)
{
    if (Pin==3)
    {
    OC1R = Value; // Initialize primary Compare register
    OC1RS = Value; // Initialize secondary Compare register
    }
        if (Pin==5)
    {
    OC2R = Value; // Initialize primary Compare register
    OC2RS = Value; // Initialize secondary Compare register
    }
    if (Pin==6)
    {
    OC3R = Value; // Initialize primary Compare register
    OC3RS = Value; // Initialize secondary Compare register
    }
        if (Pin==9)
    {
    OC4R = Value; // Initialize primary Compare register
    OC4RS = Value; // Initialize secondary Compare register
    }
}
