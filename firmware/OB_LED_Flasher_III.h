//  ----------------------------------- On-board LED Handling
//
//  OnBoard
//
//    L     EEEE  DDD  
//    L     E     D  D
//    L     EEE   D   D
//    L     E     D  D  
//    LLLL  EEEE  DDD   Flasher III
//                               V4.0.1
//  -------------------------------------
/*
*  Particle On-Board LED controller
*  Bob (Dawgs)  bob@misternetwork.com   09-2015
*  Last revision 9-5-2016
*
*  The following are available:
*
*  LED_Red_Flash(count,onRate,offRate);  // red flash x(count)
*  
*  LED_Green_Flash(count,onRate,offRate); // green flash x(count)
*  
*  LED_Blue_Flash(count,onRate,offRate); // blue flash x(count)
*  
*  LED_Yellow_Flash(count,onRate,offRate); // yellow flash x(count)
*  
*  LED_Orange_Flash(count,onRate,offRate); // orange flash x(count)
*  
*  LED_Cyan_Flash(count,onRate,offRate); // cyan flash x(count)
*  
*  LED_Magenta_Flash(count,onRate,offRate); // magenta flash x(count)
*  
*  LED_White_Flash(count,onRate,offRate); // white flash x(count)
*  
*  LED_Rainbow_Flash(count); // RGB flash x(count)
*  
*  LED_reset();  // green/white flash x4
*
*/


int lred;
int lgreen;
int lblue;
int count;
int countr;
int countr2;


//---- Main Blink Control - all colors ----------
void LED_Blinker(int countb,flashRateOn,flashRateOff){

  RGB.control(true);   // take control of the RGB LED
  if (countb< 1 || countb >8) countb=3;
  countr = 1;
     do
    {
      RGB.color(lred, lgreen, lblue);  // on
          delay(100*flashRateOn);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(100*flashRateOff);   // wait
          countr++; 
    } while (countb >= countr);

        RGB.control(false);  // resume normal operation
        }

//-----------------------  Red flash    -----------------------

void LED_Red_Flash(int count,fRateOn,fRateOff) {

        lred = 255;
        lgreen = 0;
        lblue = 0;
        
        LED_Blinker(count,fRateOn,fRateOff);
        }


//-----------------------  Green flash  -----------------------

void LED_Green_Flash(int count,fRateOn,fRateOff) {

        lred = 0;
        lgreen = 255;
        lblue = 0;

        LED_Blinker(count,fRateOn,fRateOff);
         }
        
//-----------------------  Blue flash -----------------------

void LED_Blue_Flash(int count,fRateOn,fRateOff) {

        lred = 0;
        lgreen = 0;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff);
}
        
//-----------------------  Yellow flash -----------------------
 
void LED_Yellow_Flash(int count,fRateOn,fRateOff) {

        lred = 255;
        lgreen = 255;
        lblue = 0;

        LED_Blinker(count,fRateOn,fRateOff);
         }
        
//-----------------------  Orange flash -----------------------
 
void LED_Orange_Flash(int count,fRateOn,fRateOff) {

        lred = 255;
        lgreen = 100;
        lblue = 0;

        LED_Blinker(count,fRateOn,fRateOff);
         }
        
//-----------------------  Cyan flash -----------------------
 
void LED_Cyan_Flash(int count,fRateOn,fRateOff) {

        lred = 0;
        lgreen = 255;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff);
 }
        
//-----------------------  Magenta flash  -----------------------
 
void LED_Magenta_Flash(int count,fRateOn,fRateOff) {

        lred = 255;
        lgreen = 0;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff);
         }
        
//-----------------------  White flash  -----------------------
 
void LED_White_Flash(int count,fRateOn,fRateOff) {

        lred = 200;
        lgreen = 255;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff);
         }
        
//----------------------- Rainbow Flash -----------------------

void LED_Rainbow_Flash(int count) {

        RGB.control(true);   // take control of the RGB LED        

  if (count< 1 || count >8) count=3;
  countr = 1;
     do
    {
        RGB.color(255,0,0); // red
          delay(500);   // wait     
        RGB.color(255,255,0);  
          delay(500);   // wait      
        RGB.color(0,255,0); // green
          delay(500);   // wait      
        RGB.color(0,255,255);  // 
          delay(500);   // wait      
        RGB.color(0,0,255); // Blue
          delay(500);   // wait      
        RGB.color(255,0,255);  // 
          delay(500);   // wait      
          countr++; 
    } while (count >= countr);

        RGB.control(false);  // resume normal operation
   }

// LED Reset  Green / White flash x4   -----------------------
     
     void LED_reset() {  

        RGB.control(true);   // take control of the RGB LED

          countr2 = 1;
         do
        {
        RGB.color(0, 255, 0);  // green
          delay(400);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(180, 120, 255);  // white
          delay(400);   // wait 
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait 
          countr2++; 
        } while (4 >= countr2);

        RGB.control(false);  // resume normal operation
     }     
