#ifndef __LCD__
#define __LCD__

#define LCD_Data_Dir        DDRD    /* Define LCD data port direction */
#define LCD_Command_Dir     DDRB    /* Define LCD command port direction register */
#define LCD_Data_Port       PORTD   /* Define LCD data port */
#define LCD_Command_Port    PORTB   /* Define LCD data port */
#define RS                  PB0       /* Define Register Select (data/command reg.)pin */
//#define RW                PB2       /* Define Read/Write signal pin */
#define EN                  PB1       /* Define Enable signal pin */
 

void LCD_Command(unsigned char cmnd);
void LCD_Char (unsigned char char_data);
void LCD_Init (void);
void LCD_String (char *str);
void LCD_String_xy (char row, char pos, char *str);
void LCD_Clear();

#endif /*__LCD__*/
