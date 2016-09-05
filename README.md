# OB_LED_Flasher_III

LED Flashing utility for Particle's Core, Photon, and Electron's on-board LED with variable pulse count.

The following calls are available: 

LED_Red_Flash(count,onRate,offRate);  // red flash x(count)  

LED_Green_Flash(count,onRate,offRate); // green flash x(count)  

LED_Blue_Flash(count,onRate,offRate); // blue flash x(count)  

LED_Yellow_Flash(count,onRate,offRate); // yellow flash x(count)  

LED_Orange_Flash(count,onRate,offRate); // orange flash x(count)  

LED_Cyan_Flash(count,onRate,offRate); // cyan flash x(count)  

LED_Magenta_Flash(count,onRate,offRate); // magenta flash x(count)  

LED_White_Flash(count,onRate,offRate); // white flash x(count)  

LED_Rainbow_Flash(count); // RGB flash x(count) 

LED_reset();  // green/white flash x4

NOTE:  
Flash count can be from 1 to 8. Any other value or omitting count results in 3 flashes.
Flash onRate and offRate is a multiplier (n*100) miliseconds
An onRate of 10 and an offRate of 5 yields a flash pattern of 1 second on and a half second off.

Example:  


    //  Status LED Update  
    if (ledEnable)  {
        if (LED_Red_Flag) LED_Red_Flash(5,9,4);
        if (LED_Yellow_Flag) LED_Yellow_Flash(3,9,4);
        if (LED_Green_Flag) LED_Green_Flash(3,9,4);
        if (LED_Rainbow_Flag) LED_Rainbow_Flash(3,);
        }
