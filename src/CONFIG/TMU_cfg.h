/*
 * TMU_cfg.h
 *
 *  Created on: Mar 2, 2023
 *      Author: ahmed
 */

#ifndef SRC_CONFIG_TMU_CFG_H_
#define SRC_CONFIG_TMU_CFG_H_

// enter your os tick time in ms
// it must not exceed 1500 ms
#define OS_TICK				10ul

// select your timer channel [  TIMER0 / TIMER1 / TIMER2  ]
#define TIMER_CH			TIMER0

#define CLOCK_FREQ			16000UL

// enter the num of your tasks in your system
// Don't exceed 10 tasks
#define MAX_NUM_TASKS			5


#endif /* SRC_CONFIG_TMU_CFG_H_ */
