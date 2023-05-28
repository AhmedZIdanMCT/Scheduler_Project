/*
 * TMU_priv.h
 *
 *  Created on: Mar 2, 2023
 *      Author: ahmed
 */

#ifndef SRC_TMU_TMU_PRIV_H_
#define SRC_TMU_TMU_PRIV_H_

#define TIMER0			62
#define TIMER1			96
#define TIMER2			75


typedef struct
{
	void (*fun)(void*);
	void * Parameter;
	u16 periodicity;
	u8 state;
	u8 offset;
}TCB_t;


#define READY			56
#define PAUSED			34
#define KILLED			90

#endif /* SRC_TMU_TMU_PRIV_H_ */
