# OB_LED_Flasher_III

LED Flashing utility for Particle's Core, Photon, and Electron's on-board LED with variable pulse count.

The following calls are available: 

LED_Red_Flash(count,on,off);  // red flash x(count)  
LED_Red_FFlash(count);  // red fast flash x(count)

LED_Green_Flash(count); // green flash x(count)  
LED_Green_FFlash(count); // green fast flash x(count)

LED_Blue_Flash(count); // blue flash x(count)  
LED_Blue_FFlash(count); // blue fast flash x(count)

LED_Yellow_Flash(count); // yellow flash x(count)  
LED_Yellow_FFlash(count); // yellow fast flash x(count)

LED_Orange_Flash(count); // orange flash x(count)  
LED_Orange_FFlash(count); // orange fast flash x(count)

LED_Cyan_Flash(count); // cyan flash x(count)  
LED_Cyan_FFlash(count); // cyan fast flash x(count)

LED_Magenta_Flash(count); // magenta flash x(count)  
LED_Magenta_FFlash(count); // magenta fast flash x(count)

LED_White_Flash(count); // white flash x(count)  
LED_White_FFlash(count); // white fast flash x(count)

LED_Rainbow_Flash(count); // RGB flash x(count) 

LED_reset();  // green/white flash x4

NOTE:  
Flash count can be from 1 to 8. Any other value or omitting count results in 3 flashes.

Example:  


    //  Status LED Update  
    if (ledEnable)  {
        if (LED_Red_Flag) LED_Red_Flash(5);
        if (LED_Yellow_Flag) LED_Yellow_Flash(3);
        if (LED_Green_Flag) LED_Green_Flash(3);
        if (LED_Rainbow_Flag) LED_Rainbow_Flash(3);
        if (LED_Red_FFlag) LED_Red_FFlash(3);
        if (LED_Yellow_FFlag) LED_Yellow_FFlash(3);
        if (LED_Green_FFlag) LED_Green_FFlash(3);
        }
