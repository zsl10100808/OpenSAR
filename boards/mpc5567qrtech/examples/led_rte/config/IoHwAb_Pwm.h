/*
* Configuration of module: IoHwAb (IoHwAb_Pwm.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5567
*
* Module vendor:           ArcCore
* Generator version:       3.1.3
*
* Generated by Arctic Studio (http://arccore.com) 
*/

#ifndef IOHWAB_PWM_H_
#define IOHWAB_PWM_H_

#if !(((IOHWAB_SW_MAJOR_VERSION == 1) && (IOHWAB_SW_MINOR_VERSION == 0)) )
#error IoHwAb: Configuration file expected BSW module version to be 1.0.*
#endif

/****************************************** Pwm outputs *******************************************/

/************************************ Parameterized Pwm output ************************************/

Std_ReturnType IoHwAb_Set_Duty(IoHwAb_SignalType signal, IoHwAb_DutyType duty, IoHwAb_StatusType *status);
Std_ReturnType IoHwAb_Set_FrequencyAndDuty(IoHwAb_SignalType signal, IoHwAb_FrequencyType frequency, IoHwAb_DutyType duty, IoHwAb_StatusType *status);

/************************************* Pwm validation macros **************************************/

#define IOHWAB_SIGNAL_COUNT_PWM_DUTY_OUTPUT				0
#define IOHWAB_SIGNAL_COUNT_PWM_FREQUENCYANDDUTY_OUTPUT	0

#define IOHWAB_SIGNAL_IS_VALID_PWM_DUTY_OUTPUT(signal) \
		(FALSE)

#define IOHWAB_SIGNAL_IS_VALID_PWM_FREQUENCYANDDUTY_OUTPUT(signal) \
		(FALSE)


#endif /* IOHWAB_PWM_H_ */