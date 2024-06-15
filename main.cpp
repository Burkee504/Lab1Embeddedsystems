#include "mbed.h"

// A few words 
InterruptIn bluebtn(BUTTON1);

volatile int int_trig=0;

void bttnFall(){
    int_trig = 1;  
}

// main() runs in its own thread in the OS
int main()
{
    bluebtn.fall(&bttnFall);

// 
while (true) {
    if(int_trig == 1){
        int_trig = 0;
        printf("bttnfall \r\n");
    }
    
    
}

    }


