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
*  brief   :
*  details :
*****************************************************************
*
*/
/******************************************
  INCLUDES
*******************************************/
#include "STD_TYPES.h"
#include "Error_State.h"
#include "PORT_Int.h"
#include "DIO_int.h"
#include "LED_Int.h"
#include "PB_Int.h"
#include "KP_Int.h"
#include "TMU_int.h"

/******************************************
  Local Data
*******************************************/


extern const PORT_ConfigType PORT_Config_Arr[PORT_PINS_CONFIG_ARR_SIZE];
/******************************************
  Global Data
*******************************************/
typedef struct
{
	u8 pin;
	u16 count;
}par_t;

/******************************************
  Local Functions  body
*******************************************/


/******************************************
  Global Functions body
*******************************************/
void task1(void*);
void task2(void*);
void task3(void*);


/******************************************
  syntax :

  Description :

  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant
  parameters (in)  :
  parameters (out) : none
  Return Value     : void
******************************************/
int main()
{
	PORT_Init(PORT_Config_Arr);
	TMU_vidInit();

	TMU_vidCreateTask(task1 , NULL , 100  , 0 , 0);
	TMU_vidCreateTask(task2 , NULL , 50  , 1 , 0);
	TMU_vidCreateTask(task3 , NULL , 300  , 2 , 0);

	TMU_vidStartScheduler();
}

void task1(void*p)
{
	H_LED_void_toggle(LED_RED);

}
void task2(void*p)
{
	/*while(H_PB_PB_state_readPb(Button1,active_Low)==pressed){

	}*/
	H_LED_void_toggle(LED_BLUE);
}
void task3(void*p)
{
	H_LED_void_toggle(LED_GREEN);
}
