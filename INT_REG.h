/*
 * INT_REG.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: MANSI-PC
 */

#ifndef INT_REG_H_
#define INT_REG_H_

/*Related External Interrupts Addresses */
#define MCUCSR *((u8*) 0x54)
#define MCUCR  *((u8*) 0x55)
#define GICR   *((u8*) 0x5B)
#define GIFR   *((u8*) 0x5A)
#define SREG   *((u8*) 0x5F)

#endif /* INT_REG_H_ */
