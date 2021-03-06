#ifndef __DELAY_H
#define __DELAY_H 			   
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////  
//本程序只供学习使用，未经作者许可，不得用于其他任何用途
//使用SysTick的普通计数模式对延迟进行管理(支持ucosii)
//包括delay_us,delay_ms
//修改日期:2017.02.27
//版本:V1.1
//********************************************************************************
//修改说明
//V1.1 
//修改编码方式为UTF-8
////////////////////////////////////////////////////////////////////////////////// 	 
void delay_init(u8 SYSCLK);
void delay_ms(u16 nms);
void delay_us(u32 nus);

#endif
