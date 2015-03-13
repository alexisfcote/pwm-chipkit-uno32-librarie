/*
  PWM_ChipKit.h - Library for custom PMW period.
  1:32 prescaler so Freq_PWM=2500000/period
  Work with OC1, OC2, OC3 and OC4 so Pin 3, 5,6 and 9 on the Uno32
  Created by Alexis F.C., November, 2011.
  Released into the public domain.
*/
#ifndef PWM_ChipKit_h
#define PWM_ChipKit_h

#ifndef WProgram_h
	#include	"WProgram.h"
#endif

#include <inttypes.h>

class PWM1
{
  public:
    PWM1(int period);
    void PWM_Value(int Pin,int Value);

  private:

};
#endif
