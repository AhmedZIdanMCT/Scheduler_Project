/*
 * Port_prg.c
 *
 *  Created on:
 *      Author:
 */

/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file    :
*  breif   :
*  details :
*****************************************************************
*
*/
/******************************************
  INCLUDES
*******************************************/
#include "STD_TYPES.h"
#include "AVR/delay.h"

#include "DIO_Int.h"

#include "PB_int.h"


/******************************************
  Local Data
*******************************************/



/******************************************
  Global Data
*******************************************/
#define DEBOUNCE_TIME	25
#define LOCK_READING	200




/******************************************
  Local Functions  body
*******************************************/


/******************************************
  Global Functions body
*******************************************/

/******************************************
  syntax :

  Description :

  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant
  parameters (in)  :
  parameters (out) : none
  Return Value     : void
******************************************/
PB_state_type H_PB_PB_state_readPb(PB_type copy_Button , PB_activeMode_type copy_activeMode){
u8 last_reading=0;
u8 current_reading=0;
PB_state_type state;
switch(copy_Button){
case Button1:
	last_reading = M_DIO_enu_getPinValue(PB1_pin);
	_delay_ms(DEBOUNCE_TIME);
	current_reading = M_DIO_enu_getPinValue(PB1_pin);
	break;
case Button2:
	last_reading = M_DIO_enu_getPinValue(PB2_pin);
	_delay_ms(DEBOUNCE_TIME);
	current_reading = M_DIO_enu_getPinValue(PB2_pin);
		break;
case Button3:
	last_reading = M_DIO_enu_getPinValue(PB3_pin);
	_delay_ms(DEBOUNCE_TIME);
	current_reading = M_DIO_enu_getPinValue(PB3_pin);
		break;
case Button4:
	last_reading = M_DIO_enu_getPinValue(PB4_pin);
	_delay_ms(DEBOUNCE_TIME);
	current_reading = M_DIO_enu_getPinValue(PB3_pin);
		break;
}

#if(copy_activeMode==active_High)
	if(last_reading==1 && current_reading==0){
		state = pressed;
		last_reading=current_reading;
	}
	else if(last_reading==0 && current_reading==1){
		state = released;
		last_reading=current_reading;
	}

#elif(copy_activeMode==active_Low)
	if(last_reading==0 && current_reading==1){
			state = pressed;
			last_reading=current_reading;
		}
		else if(last_reading==1 && current_reading==0){
			state = released;
			last_reading=current_reading;
		}
#endif
return state;
}
