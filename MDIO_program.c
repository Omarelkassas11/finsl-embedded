/* LIB Layer */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* MCAL */
#include "MDIO_interface.h"
#include "MDIO_private.h"
#include "MDIO_config.h"

u8 MDIO_u8Init           (void){
	u8 Local_u8ErrorState = STD_TYPES_OK;
	/* PORTA */
	MDIO_u8_DDRA_REG = PRIVATE_u8_CONC(MDIO_u8_PA7_DIRECTION,MDIO_u8_PA6_DIRECTION,MDIO_u8_PA5_DIRECTION,MDIO_u8_PA4_DIRECTION,
			                           MDIO_u8_PA3_DIRECTION,MDIO_u8_PA2_DIRECTION,MDIO_u8_PA1_DIRECTION,MDIO_u8_PA0_DIRECTION);

	/* PORTB */
	MDIO_u8_DDRB_REG = PRIVATE_u8_CONC(MDIO_u8_PB7_DIRECTION,MDIO_u8_PB6_DIRECTION,MDIO_u8_PB5_DIRECTION,MDIO_u8_PB4_DIRECTION,
			                           MDIO_u8_PB3_DIRECTION,MDIO_u8_PB2_DIRECTION,MDIO_u8_PB1_DIRECTION,MDIO_u8_PB0_DIRECTION);

	/* PORTC */
	MDIO_u8_DDRC_REG = PRIVATE_u8_CONC(MDIO_u8_PC7_DIRECTION,MDIO_u8_PC6_DIRECTION,MDIO_u8_PC5_DIRECTION,MDIO_u8_PC4_DIRECTION,
			                           MDIO_u8_PC3_DIRECTION,MDIO_u8_PC2_DIRECTION,MDIO_u8_PC1_DIRECTION,MDIO_u8_PC0_DIRECTION);

	/* PORTD */
	MDIO_u8_DDRD_REG = PRIVATE_u8_CONC(MDIO_u8_PD7_DIRECTION,MDIO_u8_PD6_DIRECTION,MDIO_u8_PD5_DIRECTION,MDIO_u8_PD4_DIRECTION,
			                           MDIO_u8_PD3_DIRECTION,MDIO_u8_PD2_DIRECTION,MDIO_u8_PD1_DIRECTION,MDIO_u8_PD0_DIRECTION);
	/* Initial Values of Pins */
	/* PORTA */
	MDIO_u8_PORTA_REG = PRIVATE_u8_CONC(MDIO_u8_PA7_VALUE,MDIO_u8_PA6_VALUE,MDIO_u8_PA5_VALUE,MDIO_u8_PA4_VALUE,
			                           MDIO_u8_PA3_VALUE,MDIO_u8_PA2_VALUE,MDIO_u8_PA1_VALUE,MDIO_u8_PA0_VALUE);

	/* PORTB */
	MDIO_u8_PORTB_REG = PRIVATE_u8_CONC(MDIO_u8_PB7_VALUE,MDIO_u8_PB6_VALUE,MDIO_u8_PB5_VALUE,MDIO_u8_PB4_VALUE,
			                           MDIO_u8_PB3_VALUE,MDIO_u8_PB2_VALUE,MDIO_u8_PB1_VALUE,MDIO_u8_PB0_VALUE);

	/* PORTC */
	MDIO_u8_PORTC_REG = PRIVATE_u8_CONC(MDIO_u8_PC7_VALUE,MDIO_u8_PC6_VALUE,MDIO_u8_PC5_VALUE,MDIO_u8_PC4_VALUE,
			                           MDIO_u8_PC3_VALUE,MDIO_u8_PC2_VALUE,MDIO_u8_PC1_VALUE,MDIO_u8_PC0_VALUE);

	/* PORTD */
	MDIO_u8_PORTD_REG = PRIVATE_u8_CONC(MDIO_u8_PD7_VALUE,MDIO_u8_PD6_VALUE,MDIO_u8_PD5_VALUE,MDIO_u8_PD4_VALUE,
			                           MDIO_u8_PD3_VALUE,MDIO_u8_PD2_VALUE,MDIO_u8_PD1_VALUE,MDIO_u8_PD0_VALUE);
	return Local_u8ErrorState;
}

/* Prototype of a Function to set pin direction */
u8 MDIO_u8SetPinDirection(u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PinDirection){
	u8 Local_u8ErrorState = STD_TYPES_NOK;
	/* Check inputs */
	if((Copy_u8PortId <= MDIO_u8_PORTD) && (Copy_u8PinId <= MDIO_u8_PIN_7)){
		Local_u8ErrorState = STD_TYPES_OK;
		/* Switch on Direction */
		switch(Copy_u8PinDirection){
		case MDIO_u8_OUTPUT:
			/* Switch on PortID */
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:SET_BIT(MDIO_u8_DDRA_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTB:SET_BIT(MDIO_u8_DDRB_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTC:SET_BIT(MDIO_u8_DDRC_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTD:SET_BIT(MDIO_u8_DDRD_REG,Copy_u8PinId);break;
			}
			break;
		case MDIO_u8_INPUT_PULLED_UP:
			/* Switch on PortID */
			/* Activate Pull up resistor */
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:SET_BIT(MDIO_u8_PORTA_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTB:SET_BIT(MDIO_u8_PORTB_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTC:SET_BIT(MDIO_u8_PORTC_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTD:SET_BIT(MDIO_u8_PORTD_REG,Copy_u8PinId);break;
			}
		case MDIO_u8_INPUT_FLOATING:
			/* Switch on PortID */
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:CLR_BIT(MDIO_u8_DDRA_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTB:CLR_BIT(MDIO_u8_DDRB_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTC:CLR_BIT(MDIO_u8_DDRC_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTD:CLR_BIT(MDIO_u8_DDRD_REG,Copy_u8PinId);break;
			}
			break;
		default:Local_u8ErrorState = STD_TYPES_NOK;
		}
	}
	return Local_u8ErrorState;
}

/* Prototype of a Function to set pin value */
u8 MDIO_u8SetPinValue    (u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PinValue){
	u8 Local_u8ErrorState = STD_TYPES_NOK;
	/* Check inputs */
	if((Copy_u8PortId <= MDIO_u8_PORTD) && (Copy_u8PinId <= MDIO_u8_PIN_7)){
		Local_u8ErrorState = STD_TYPES_OK;
		/* Switch on Pin Value => High or Low */
		switch(Copy_u8PinValue){
		case MDIO_u8_HIGH:
			/* Switch on PortID */
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:SET_BIT(MDIO_u8_PORTA_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTB:SET_BIT(MDIO_u8_PORTB_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTC:SET_BIT(MDIO_u8_PORTC_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTD:SET_BIT(MDIO_u8_PORTD_REG,Copy_u8PinId);break;
			}
			break;
		case MDIO_u8_LOW:
			/* Switch on PortID */
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:CLR_BIT(MDIO_u8_PORTA_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTB:CLR_BIT(MDIO_u8_PORTB_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTC:CLR_BIT(MDIO_u8_PORTC_REG,Copy_u8PinId);break;
			case MDIO_u8_PORTD:CLR_BIT(MDIO_u8_PORTD_REG,Copy_u8PinId);break;
			}
			break;
		default:Local_u8ErrorState = STD_TYPES_NOK;
		}
	}
	return Local_u8ErrorState;
}

/* Prototype of a Function to get pin value */
u8 MDIO_u8GetPinValue    (u8 Copy_u8PortId,u8 Copy_u8PinId,u8 * Copy_Pu8PinValue){
	u8 Local_u8ErrorState = STD_TYPES_NOK;
	/* Check inputs */
	if((Copy_u8PortId <= MDIO_u8_PORTD) && (Copy_u8PinId <= MDIO_u8_PIN_7)
			&& (Copy_Pu8PinValue != STD_TYPES_NULL)){
		Local_u8ErrorState = STD_TYPES_OK;
		/* Switch on PortId */
		switch(Copy_u8PortId){
		case MDIO_u8_PORTA:*Copy_Pu8PinValue = GET_BIT(MDIO_u8_PINA_REG,Copy_u8PinId);break;
		case MDIO_u8_PORTB:*Copy_Pu8PinValue = GET_BIT(MDIO_u8_PINB_REG,Copy_u8PinId);break;
		case MDIO_u8_PORTC:*Copy_Pu8PinValue = GET_BIT(MDIO_u8_PINC_REG,Copy_u8PinId);break;
		case MDIO_u8_PORTD:*Copy_Pu8PinValue = GET_BIT(MDIO_u8_PIND_REG,Copy_u8PinId);break;
		}
	}
	return Local_u8ErrorState;
}

/* Prototype of a Function to set port direction */
u8 MDIO_u8SetPortDirection(u8 Copy_u8PortId,u8 Copy_u8PortDirection){
	u8 Local_u8ErrorState = STD_TYPES_NOK;
	if(Copy_u8PortId <= MDIO_u8_PORTD){
		Local_u8ErrorState = STD_TYPES_OK;
		switch (Copy_u8PortDirection){
		case MDIO_u8_OUTPUT:
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:MDIO_u8_DDRA_REG = 0xFF;break;
			case MDIO_u8_PORTB:MDIO_u8_DDRB_REG = 0xFF;break;
			case MDIO_u8_PORTC:MDIO_u8_DDRC_REG = 0xFF;break;
			case MDIO_u8_PORTD:MDIO_u8_DDRD_REG = 0xFF;break;
			}
			break;
		case MDIO_u8_INPUT_PULLED_UP:
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:MDIO_u8_PORTA_REG = 0xFF;break;
			case MDIO_u8_PORTB:MDIO_u8_PORTB_REG = 0xFF;break;
			case MDIO_u8_PORTC:MDIO_u8_PORTC_REG = 0xFF;break;
			case MDIO_u8_PORTD:MDIO_u8_PORTD_REG = 0xFF;break;
			}
		case MDIO_u8_INPUT_FLOATING:
			switch(Copy_u8PortId){
			case MDIO_u8_PORTA:MDIO_u8_DDRA_REG = 0x00;break;
			case MDIO_u8_PORTB:MDIO_u8_DDRB_REG = 0x00;break;
			case MDIO_u8_PORTC:MDIO_u8_DDRC_REG = 0x00;break;
			case MDIO_u8_PORTD:MDIO_u8_DDRD_REG = 0x00;break;
			}
			break;
		default:Local_u8ErrorState = STD_TYPES_NOK;
		}
	}
	return Local_u8ErrorState;
}

/* Prototype of a Function to set port value */
u8 MDIO_u8SetPortValue    (u8 Copy_u8PortId,u8 Copy_u8PortValue){
	u8 Local_u8ErrorState = STD_TYPES_NOK;
	if(Copy_u8PortId <= MDIO_u8_PORTD){
		Local_u8ErrorState = STD_TYPES_OK;
		switch(Copy_u8PortId){
		case MDIO_u8_PORTA:MDIO_u8_PORTA_REG = Copy_u8PortValue;break;
		case MDIO_u8_PORTB:MDIO_u8_PORTB_REG = Copy_u8PortValue;break;
		case MDIO_u8_PORTC:MDIO_u8_PORTC_REG = Copy_u8PortValue;break;
		case MDIO_u8_PORTD:MDIO_u8_PORTD_REG = Copy_u8PortValue;break;
		}
	}
	return Local_u8ErrorState;
}

/* Prototype of a Function to get port value */
u8 MDIO_u8GetPortValue    (u8 Copy_u8PortId,u8 * Copy_Pu8PortValue){
	u8 Local_u8ErrorState = STD_TYPES_NOK;
	if((Copy_u8PortId <= MDIO_u8_PORTD) && (Copy_Pu8PortValue != STD_TYPES_NULL)){
		Local_u8ErrorState = STD_TYPES_OK;
		switch(Copy_u8PortId){
		case MDIO_u8_PORTA: *Copy_Pu8PortValue = MDIO_u8_PINA_REG;break;
		case MDIO_u8_PORTB: *Copy_Pu8PortValue = MDIO_u8_PINB_REG;break;
		case MDIO_u8_PORTC: *Copy_Pu8PortValue = MDIO_u8_PINC_REG;break;
		case MDIO_u8_PORTD: *Copy_Pu8PortValue = MDIO_u8_PIND_REG;break;
		}
	}
	return Local_u8ErrorState;
}
