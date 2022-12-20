#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "MDIO_config.h"
#include "MDIO_interface.h"
#include "MDIO_private.h"
#include "lcd.h"
#include "ADC.h" 
#include "uart.h"
#include "Eeprom.h"
#include "I2c.h"
#include "Rtc.h"
#include "Pwm.h"
#include "HKPD_config.h"
#include "HKPD_interface.h"
#include "DcMotor.h"
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "MDIO_config.h"
#include "MDIO_interface.h"
#include "MDIO_private.h"
#include "lcd.h"
#include "ADC.h" 
#include "uart.h"
#include "Eeprom.h"
#include "I2c.h"
#include "Rtc.h"
#include "Pwm.h"
#include "HKPD_interface.h"
#include "HKPD_config.h"
#include "DcMotor.h"
#define UpButton PIN10
#define DnButton PIN11
 
int main (){
Pwm_Init();
LCD_Init();

  while(1){
    u8 * keyPadKey =0;
      keypadTempset(keyPadKey);
      delay(20);
      fanControlDirection();    
  }
}


void keypadTempset(u8 * keyPadKey){ 
  u8 value = HKPD_u8GetKey(keyPadKey);
  showOnLCD(value);
  saveToEEProm(value);  
  }
void fanControlDirection(void){
  //CW
  // pwmChannel_1 in pwmChannel_2 out
   Pwm_SetDutyCycle(250);
   MDIO_u8SetPinValue(PORTC,PIN7,LOW);
  //CCW
  // pwmChannel_2 in pwmChannel_1 out
   Pwm_SetDutyCycle(0);
   MDIO_u8SetPinValue(PORTC,PIN7,HIGH);
  }
  void  showOnLCD(u8 value){
    LCD_Clear();
    LCD_String("Tempreature is");
    LCD_Char(value);
    }
 void saveToEEProm(u8 valueToSave){
   EEP_Write(0x00,valueToSave);
  }
