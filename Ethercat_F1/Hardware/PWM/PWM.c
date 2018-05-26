/**
 *************************************************************************************
 * @file 
 * @author
 * @version
 * @date
 * @brief ���ڵ������
 *************************************************************************************
*/
#include "pwm.h"

int PWM_Set(int channel,int pwm)
{
	if(pwm > 19998)
		pwm = 19998;
	
	if(pwm < 10)
		pwm = 10;
	
	switch(channel){
		case 0:
			  TIM4->CCR1 = pwm;//���ַ����������
			break;
		case 1:
			  TIM4->CCR2 = pwm;//���ַ����������
			break;
		case 2:
			  TIM4->CCR3 = pwm;//���ַ����������
			break;
		case 3:
			  TIM4->CCR4 = pwm;//���ַ����������
			break;
		default:
			break;
	}
//  TIM4->CCR1 = pwm;//���ַ����������
	
	return pwm;

}

int PWM_stop(int channel){
	//char state = -1;
	
  switch(channel){
		case 0:
			  TIM4->CCR1 = 0;//���ַ����������
			break;
		case 1:
			  TIM4->CCR2 = 0;//���ַ����������
			break;
		case 2:
			  TIM4->CCR3 = 0;//���ַ����������
			break;
		case 3:
			  TIM4->CCR4 = 0;//���ַ����������
			break;
		default:
			break;
		}
	
	return 0;
}
