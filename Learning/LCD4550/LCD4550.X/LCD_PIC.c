/*
 * File:   LCD_PIC.c
 * Author: mayco
 *
 * Created on 4 de octubre de 2022, 04:10 PM
 */


#include <xc.h>
#include"LCD_PIC.h"
void LCD_PIC_DataBus(uint8_t a){
    
}
void LCD_PIC_Cmd(uint8_t a){
    E=0;
    E=1;
    LCD_PIC_DataBus(a);
    __delay_ms(1);
    E=0;
}
void LCD_PIC_Init(void){
    
}
void LCD_PIC_SetCursor(uint8_t x,Ubicacion y){
    
}
void LCD_PIC_Char(char c){
    
}
void LCD_PIC_String(char*a){
    
}
void LCD_PIC_Clear(void){
    
}
void LCD_PIC_Home(void){
    
}
