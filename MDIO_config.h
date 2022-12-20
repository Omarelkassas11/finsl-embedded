#ifndef MDIO_CONFIG_H
#define MDIO_CONFIG_H

/* Config for Pins Direction */
/* Options : 1- MDIO_u8_INIT_INPUT
 * 			 2- MDIO_u8_INIT_OUTPUT
 * 			  */
/* PORTA */
#define MDIO_u8_PA0_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PA1_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PA2_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PA3_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PA4_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PA5_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PA6_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PA7_DIRECTION               MDIO_u8_INIT_OUTPUT

/* PORTB */
#define MDIO_u8_PB0_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PB1_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PB2_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PB3_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PB4_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PB5_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PB6_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PB7_DIRECTION               MDIO_u8_INIT_INPUT

/* PORTC */
#define MDIO_u8_PC0_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PC1_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PC2_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PC3_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PC4_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PC5_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PC6_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PC7_DIRECTION               MDIO_u8_INIT_INPUT

/* PORTD */
#define MDIO_u8_PD0_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PD1_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PD2_DIRECTION               MDIO_u8_INIT_OUTPUT
#define MDIO_u8_PD3_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PD4_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PD5_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PD6_DIRECTION               MDIO_u8_INIT_INPUT
#define MDIO_u8_PD7_DIRECTION               MDIO_u8_INIT_INPUT


/* Config for Pins Value */
/* Options : 1- MDIO_u8_INIT_LOW
 * 			 2- MDIO_u8_INIT_HIGH
 * 			 3- MDIO_u8_INIT_FLOATING
 * 			 4- MDIO_u8_INIT_PULLED_UP
 *
 * 			  */
/* PORTA */
#define MDIO_u8_PA0_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PA1_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PA2_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PA3_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PA4_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PA5_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PA6_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PA7_VALUE               MDIO_u8_INIT_LOW

/* PORTB */
#define MDIO_u8_PB0_VALUE               MDIO_u8_INIT_HIGH
#define MDIO_u8_PB1_VALUE               MDIO_u8_INIT_HIGH
#define MDIO_u8_PB2_VALUE               MDIO_u8_INIT_HIGH
#define MDIO_u8_PB3_VALUE               MDIO_u8_INIT_HIGH
#define MDIO_u8_PB4_VALUE               MDIO_u8_INIT_PULLED_UP
#define MDIO_u8_PB5_VALUE               MDIO_u8_INIT_PULLED_UP
#define MDIO_u8_PB6_VALUE               MDIO_u8_INIT_PULLED_UP
#define MDIO_u8_PB7_VALUE               MDIO_u8_INIT_PULLED_UP

/* PORTC */
#define MDIO_u8_PC0_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PC1_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PC2_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PC3_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PC4_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PC5_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PC6_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PC7_VALUE               MDIO_u8_INIT_FLOATING

/* PORTD */
#define MDIO_u8_PD0_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PD1_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PD2_VALUE               MDIO_u8_INIT_LOW
#define MDIO_u8_PD3_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PD4_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PD5_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PD6_VALUE               MDIO_u8_INIT_FLOATING
#define MDIO_u8_PD7_VALUE               MDIO_u8_INIT_FLOATING
#endif
