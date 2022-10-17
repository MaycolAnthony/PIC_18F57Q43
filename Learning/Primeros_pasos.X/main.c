/*
 * File:   main.c
 * Author: mayco
 *
 * Created on 4 de octubre de 2022, 12:47 PM
 */


#include <xc.h>
#include<stdint.h>
#include<stdio.h>
#include"config.h"

void main(void) {
    Clock_Config();
    
    //SALIDA DIGITAL PARA RF3 CON BYTE
    TRISF=0x00;//salida digital
    ANSELF=0x00;//PINES DIGITALES
    WPUF=0x00;//Desabilitamos las resistencias pull up
    INLVLF=0x00;///TTL
    ODCONF= 0x00;//PUSH-PULL
    SLRCONF=0XFF;//LIMITADO
    
    
    while(1){
        LATF=0x08;
        __delay_ms(200);
        LATF=0x00;
        __delay_ms(200);
        
    }
    return;
}
