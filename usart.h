/*
 * CFile1.c
 *
 * Created: 01/12/2016 19:12:28
 *  Author: Randson
 */

#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>
//make sure you set this according to the freq your board operates at
#define F_CPU 16000000UL  // 16 MHz
#include <inttypes.h>


/************************************************************************/
/* USART                                                                */
/************************************************************************/
#define FOSC 1843200 // Operation frequency
#define  BAUD 9600
#define MYUBRR FOSC /16/BAUD-1
                                                    // define baud
#define BAUDRATE  ((F_CPU)/(BAUD*16UL)-1)            // set baud rate value for UBRR

void USART_init();
unsigned char USART_rcve();
void USART_send(unsigned char data);
void USART_flush();
void blink_led(char count);
void USART_send_int(int data);
uint32_t USART_rcve_int();
void USART_send_float(float data);
float USART_rcve_float();
void float_to_int(float f, uint32_t *i);
void int_to_float(uint32_t i, float *f);
///////////////////////////////////////////////////////////////////////////
