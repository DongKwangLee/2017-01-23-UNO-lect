#include "Timer.h"                     

const int LED1 = 8;                    
const int LED2 = 9;                    
const int LED3 = 10;                    
const int LED4 = 11;                    
const unsigned long PERIOD1 = 50;
const unsigned long PERIOD2 = 60;
const unsigned long PERIOD3 = 70;
const unsigned long PERIOD4 = 80;

Timer t;

void setup(void)
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    
    t.oscillate(LED1, PERIOD1, HIGH);
    t.oscillate(LED2, PERIOD2, HIGH);
    t.oscillate(LED3, PERIOD3, HIGH);
    t.oscillate(LED4, PERIOD4, HIGH);
}

void loop(void)
{
    
    while(1)
    {
        t.update();
    }
}

