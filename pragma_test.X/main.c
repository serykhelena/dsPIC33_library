#include "common.h"
#include "pragma.h"

int main(void) {
    TRISBbits.TRISB12   = 0; 
    
    while( 1 )
    {
        LATBbits.LATB12 = 1;
        __delay_ms(20);
        LATBbits.LATB12 = 0;
        __delay_ms(20);
    }
    return 0;
}