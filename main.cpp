#include "mbed.h"

// InterruptIn is used to set up digital I/O Pins as an input.This program prints "bttnfall" when the blue push button is pressed using a printf statment.  
// While statment allows the statment included in the if to be repeated when the conditions are true. 
InterruptIn bluebtn(BUTTON1);

volatile int int_trig=0;

void bttnFall(){
    int_trig = 1;  
}

int main()
{
    bluebtn.fall(&bttnFall);

while (true) {
    if(int_trig == 1){
        int_trig = 0;
        printf("bttnfall \r\n");
    }
    
    
}

    }


