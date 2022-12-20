#ifndef __DC_MOTOR__
#define __DC_MOTOR__ 

typedef enum {
    DC_DIRECTION_CW = 0,
    DC_DIRECTION_CCW
} tenuDirection;

void DC_Init (void);
void DC_Start (unsigned char MotorId, tenuDirection Direction, unsigned char Speed);
void DC_Stop (void);

#endif /*__DC_MOTOR__*/
