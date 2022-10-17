#ifndef LCD_PIC_H
#define LCD_PIC_H

#include "config.h"
#include<stdint.h>

#define E  LATDbits.LATD2
#define RS LATDbits.LATD3
#define D7 LATDbits.LATD7
#define D6 LATDbits.LATD6
#define D5 LATDbits.LATD5
#define D4 LATDbits.LATD4

typedef enum{
    Fila1=0,
            Fila2,
            Fila3,
            Fila4,
}Ubicacion;

void LCD_PIC_DataBus(uint8_t a);
void LCD_PIC_Cmd(uint8_t a);
void LCD_PIC_Init(void);
void LCD_PIC_SetCursor(uint8_t x,Ubicacion y);
void LCD_PIC_Char(char c);
void LCD_PIC_String(char*a);
void LCD_PIC_Clear(void);
void LCD_PIC_Home(void);


#endif