/*
 * Port_int.h
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
*****************************************************************/
#ifndef PB_TYPES_H_
#define PB_TYPES_H_

/******************************************
  INCLUDES
*******************************************/


/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/
typedef enum{
	Button1 =1,
	Button2,
	Button3,
	Button4
}PB_type;

typedef enum{
	released,
	pressed
}PB_state_type;

typedef enum{
	active_Low,
	active_High
}PB_activeMode_type;

/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


/******************************************
  GLOBAL DATA TYPES AND STRUCTURES
*******************************************/

/******************************************
  GLOBAL DATA PROTOTYPES
*******************************************/

/******************************************
   GLOBAL FUNCTIONS PROTOTYPES
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


#endif /* PORT_PORT_INT_H_ */
