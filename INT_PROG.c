/*

 * INT_PROG.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: MANSI-PC
 */
#include  "avr/interrupt.h"

#include  "std_types.h"
#include  "INT_INIT.h"
#include  "utils.h"
#include  "INT_REG.h"


/*
!Comment:
Description: this Function Sets the EXT_INT state
Input: 1)u8ExtIntCpy->the EXT_INT Index.     [0:2]
	   2)u8ExtIntState-> the EXT_INT_STATE.

Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 EXT_u8INT_INIT(u8 u8ExtIntCpy, u8 u8ExtIntState)
{
	/*Local Varibales*/

	/*Error State*/
	u8 u8ErrLoc = EXT_INT_u8OK;
	if(u8ExtIntCpy >= EXT_u8INTNB )
	{
		/*Set the error State of the function*/
		u8ErrLoc = EXT_INT_u8NOK ;
	}
	/*All inputs are in range*/
	else
	{
		u8 u8ErrLoc = EXT_INT_u8OK;
		switch(u8ExtIntCpy)
		{
		case EXT_u8INT0:
			/*set the MCUCR Register With the State */
			MCUCR = u8ExtIntState;
			break;
		case EXT_u8INT1:
			/*set the MCUCR Register With the State */
			MCUCR = u8ExtIntState;
			break;
		case EXT_u8INT2:
			/*set the MCUSR Register With the State */
			MCUCSR = u8ExtIntState;
			break;

		}
	}
	return u8ErrLoc;
}

/*
!Comment:
Description: this Function enable the EXT_INT Registers .
Input: 1)u8ExtIntCpy->the EXT_INT Index.     [0:2]


Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 EXT_u8INT_ENABLE(u8 u8ExtIntCpy)
{
	/*Local Varibales*/
	/*Error State*/
	u8 u8ErrLoc = EXT_INT_u8OK;
	if(u8ExtIntCpy >= EXT_u8INTNB )
	{
		/*Set the error State of the function*/
		u8ErrLoc = EXT_INT_u8NOK ;
	}
	/*All inputs are in range*/
	else
	{
		/*Set the I_BIT IN THE SREG FOR Global Interrupt Enable*/
		Set_Bit(SREG , I_BIT_ENABLE);
		u8 u8ErrLoc = EXT_INT_u8OK;
		switch(u8ExtIntCpy)
		{
		case EXT_u8INT0:
			/*Enable the INT0_BIT int GICR Register */
			Set_Bit(GICR , INT0_ENABLE);
			break;
		case EXT_u8INT1:
			/*Enable the INT1_BIT int GICR Register */
			Set_Bit(GICR , INT1_ENABLE);
			break;
		case EXT_u8INT2:
			/*Enable the INT2_BIT int GICR Register */
			Set_Bit(GICR , INT2_ENABLE);
			break;
		}

	}
return u8ErrLoc;
}


ISR(INT0_vect);

ISR(INT1_vect);

ISR(INT1_vect);

