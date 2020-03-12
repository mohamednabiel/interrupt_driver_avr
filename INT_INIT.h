/*
 * INT_INIT.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: MANSI-PC
 */

#ifndef INT_INIT_H_
#define INT_INIT_H_


#define EXT_u8INT0   0
#define EXT_u8INT1   (EXT_u8INT0+1)
#define EXT_u8INT2   (EXT_u8INT1+1)
#define EXT_u8INTNB  (EXT_u8INT2+1)

/* use in ex0interrupt  mode */
#define EXT_u8INT0_LOW_LEVEL	0
#define EXT_u8INT0_ANY_CHANGE	1
#define EXT_u8INT0_FALLING_EDGE	2
#define EXT_u8INT0_RISING_EDGE	3

/* use in ex1interrupt  mode */
#define EXT_u8INT1_LOW_LEVEL	0
#define EXT_u8IN1_ANY_CHANGE	4
#define EXT_u8IN1_FALLING_EDGE	8
#define EXT_u8IN1_RISING_EDGE	12

/* use in ex2interrupt  mode */
#define EXT_u8INT2_FALLING_EDGE	0
#define EXT_u8INT2_RISING_EDGE	64

/* Error Checking*/
#define EXT_INT_u8OK   0
#define EXT_INT_u8NOK  1

/* Global Interrupt I bit Enable */
#define I_BIT_ENABLE 7

/* Interrupt BITS Enable */
#define INT0_ENABLE 6
#define INT1_ENABLE 7
#define INT2_ENABLE 5

/*
!Comment:
Description: this Function Sets the EXT_INT state
Input: 1)u8ExtIntCpy->the EXT_INT Index.     [0:2]
	   2)u8ExtIntState-> the EXT_INT_STATE.

Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 EXT_u8INT_INIT(u8 u8ExtIntCpy, u8 u8ExtIntState);

/*
!Comment:
Description: this Function enable the EXT_INT Registers .
Input: 1)u8ExtIntCpy->the EXT_INT Index.     [0:2]


Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 EXT_u8INT_ENABLE(u8 u8ExtIntCpy);

/*
!Comment:
Description: this Function check for the ISR handling.
Input: void
Output: call the ISR Functions .
*/
void EXT_u8INT_handle(void);

#endif /* INT_INIT_H_ */
