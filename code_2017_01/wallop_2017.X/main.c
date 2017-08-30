//===========================================================
// code wallop 2017 core
//===========================================================
//===========================================================
#define _XTAL_FREQ 32000000 // ตั้งค่าความถี่ที่ใช้งานจริง// ใช้ max frew ที่ 32 Mhz เล
//============================================================
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <math.h>

#define use_debug_mode
//============================================================
//===================================================================================
// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = OFF      // MCLR Pin Function Select (MCLR/VPP pin function is digital input)
#pragma config CP = ON          // Flash Program Memory Code Protection (Program memory code protection is enabled)
#pragma config CPD = OFF        // Data Memory Code Protection (Data memory code protection is disabled)
#pragma config BOREN = ON      // Brown-out Reset Enable (Brown-out Reset disabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = OFF       // Internal/External Switchover (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is disabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config VCAPEN = OFF     // Voltage Regulator Capacitor Enable (All VCAP pin functionality is disabled)
#pragma config PLLEN = ON       // PLL Enable (4x PLL enabled)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)
//==================================================================================
#include "func1.c"

//===================================================================================
//===================================================================================
void main()
{
    __delay_ms(10);
    // selsect clock to 8 Mhz internal
    IRCF0 = 0;
    IRCF1 = 1;
    IRCF2 = 1;
    IRCF3 = 1;

    ANSELA = 0x00; //init digital port
    ANSELB = 0x00; // init digital port
    ANSELE = 0x00; // init digital input on port b
    delay_ms(10);

    while(1)
    {
        
    } // end of while 1
} // end of main
