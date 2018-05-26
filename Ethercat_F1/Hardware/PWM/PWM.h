#ifndef __PWM_H__
#define __PWM_H__

#include "stm32f1xx.h"


int PWM_Set(int channel,int pwm);
int PWM_stop(int channel);

#endif
