#include <xc.h>
#include "digital_keypad.h"

void init_digital_keypad(void)
{
    /* Set Keypad Port as input */
    KEYPAD_PORT_DDR = KEYPAD_PORT_DDR | INPUT_LINES;
}

unsigned char read_digital_keypad(unsigned char mode)
{
    static char once = 1;
    static int long_press = 1;
    unsigned char key = KEYPAD_PORT & INPUT_LINES;
    static unsigned char pre_key;
    
    if((key != ALL_RELEASED) && once) //1st time when sw pressed
    {
        once=0;
        long_press=0;
        pre_key = key;        
    }
    else if((key == ALL_RELEASED) && !once)
    {
        once=1;
        if(long_press < 10) // changed from 15 to 9 
            return pre_key;// short press
    }
    else if(!once && (long_press <= 10)) //changed from 15 to 9
        long_press++;
    
    else if(!once && (long_press == 11) && (key == SW4)){  // changed from 16 to 10 
        long_press++;
        return LPSW4; //long press  
    }
    
    
    
    
    

    
    
    
//    static unsigned char once = 1;
//    
//    if (mode == LEVEL_DETECTION)
//    {
//        return KEYPAD_PORT & INPUT_LINES;
//    }
//    else
//    {
//        if (((KEYPAD_PORT & INPUT_LINES) != ALL_RELEASED) && once)
//        {
//            once = 0;
//            
//            return KEYPAD_PORT & INPUT_LINES;
//        }
//        else if ((KEYPAD_PORT & INPUT_LINES) == ALL_RELEASED)
//        {
//            once = 1;
//        }
//    }
//    
    return ALL_RELEASED;
}
