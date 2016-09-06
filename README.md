# OB_LED_Flasher_IV

LED Flashing utility for Particle's Core, Photon, and Electron's on-board LED with variable pulse count.

The following calls are available: 

LED_Red_Flash(count,onRate,offRate,brightness);  // red flash x(count)  

LED_Green_Flash(count,onRate,offRate,brightness); // green flash x(count)  

LED_Blue_Flash(count,onRate,offRate,brightness); // blue flash x(count)  

LED_Yellow_Flash(count,onRate,offRate,brightness); // yellow flash x(count)  

LED_Orange_Flash(count,onRate,offRate,brightness); // orange flash x(count)  

LED_Cyan_Flash(count,onRate,offRate,brightness); // cyan flash x(count)  

LED_Magenta_Flash(count,onRate,offRate,brightness); // magenta flash x(count)  

LED_White_Flash(count,onRate,offRate,brightness); // white flash x(count)  

LED_Rainbow_Flash(count,brightness); // RGB flash x(count) 

LED_reset(count,brightness);  // green/white flash x(count)

NOTE:  
Flash count can be from 1 to 8. Any other value or omitting count results in 3 flashes.
Flash onRate and offRate is a multiplier (n*100) miliseconds
An onRate of 10 and an offRate of 5 yields a flash pattern of 1 second on and a half second off.
Brightness is system level from 1-255 (default is 96)
Example:  


    //  Status LED Update  
    if (ledEnable)  {
        if (LED_Red_Flag) LED_Red_Flash(5,9,4,96);
        if (LED_Yellow_Flag) LED_Yellow_Flash(3,9,4,96);
        if (LED_Green_Flag) LED_Green_Flash(3,9,4,96);
        if (LED_Rainbow_Flag) LED_Rainbow_Flash(3,192);
        }
