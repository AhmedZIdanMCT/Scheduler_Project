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
#ifndef PB_INT_H_
#define PB_INT_H_

/******************************************
  INCLUDES
*******************************************/
#include "PB_priv.h"
#include "PB_types.h"
#include "PB_cfg.h"
/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/


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
PB_state_type H_PB_PB_state_readPb(PB_type copy_Button , PB_activeMode_type copy_activeMode);

#endif /* PORT_PORT_INT_H_ */
