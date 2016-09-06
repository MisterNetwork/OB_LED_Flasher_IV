//  ----------------------------------- On-board LED Handling
//
//  OnBoard
//
//    L     EEEE  DDD  
//    L     E     D  D
//    L     EEE   D   D
//    L     E     D  D  
//    LLLL  EEEE  DDD   Flasher IV
//                               V4.1.1
//  -------------------------------------
/*
*  Particle On-Board LED controller
*  Bob (Dawgs)  bob@misternetwork.com   09-2015
*  Last revision 9-5-2016
*
*  (count,flashRateOn,flashRateOff,brightness)
*
*  The following are available:
*
*  LED_Red_Flash(count,onRate,offRate,brightness);  // red flash x(count)
*  
*  LED_Green_Flash(count,onRate,offRate,brightness); // green flash x(count)
*  
*  LED_Blue_Flash(count,onRate,offRate,brightness); // blue flash x(count)
*  
*  LED_Yellow_Flash(count,onRate,offRate,brightness); // yellow flash x(count)
*  
*  LED_Orange_Flash(count,onRate,offRate,brightness); // orange flash x(count)
*  
*  LED_Cyan_Flash(count,onRate,offRate,brightness); // cyan flash x(count)
*  
*  LED_Magenta_Flash(count,onRate,offRate,brightness); // magenta flash x(count)
*  
*  LED_White_Flash(count,onRate,offRate,brightness); // white flash x(count)
*  
*  LED_Rainbow_Flash(count,brightness); // RGB flash x(count,brightness)
*  
*  LED_reset(count,brightness);  // green/white flash x(count,brightness)
*
*/


int lred;
int lgreen;
int lblue;
int count;
int countr;
int countr2;
int bright1;


//---- Main Blink Control - all colors ----------
void LED_Blinker(int countb, int flashRateOn, int flashRateOff, int brightv){

  RGB.control(true);   // take control of the RGB LED
  RGB.brightness(brightv);

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

        RGB.brightness(96);
        RGB.control(false);  // resume normal operation
        }

//-----------------------  Red flash    -----------------------

void LED_Red_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 255;
        lgreen = 0;
        lblue = 0;
        
        LED_Blinker(count,fRateOn,fRateOff,brightv);
        }


//-----------------------  Green flash  -----------------------

void LED_Green_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 0;
        lgreen = 255;
        lblue = 0;

        LED_Blinker(count,fRateOn,fRateOff,brightv);
         }
        
//-----------------------  Blue flash -----------------------

void LED_Blue_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 0;
        lgreen = 0;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff,brightv);
}
        
//-----------------------  Yellow flash -----------------------
 
void LED_Yellow_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 255;
        lgreen = 255;
        lblue = 0;

        LED_Blinker(count,fRateOn,fRateOff,brightv);
         }
        
//-----------------------  Orange flash -----------------------
 
void LED_Orange_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 255;
        lgreen = 100;
        lblue = 0;

        LED_Blinker(count,fRateOn,fRateOff,brightv);
         }
        
//-----------------------  Cyan flash -----------------------
 
void LED_Cyan_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 0;
        lgreen = 255;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff,brightv);
 }
        
//-----------------------  Magenta flash  -----------------------
 
void LED_Magenta_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 255;
        lgreen = 0;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff,brightv);
         }
        
//-----------------------  White flash  -----------------------
 
void LED_White_Flash(int count, int fRateOn, int fRateOff, int brightv) {

        lred = 200;
        lgreen = 255;
        lblue = 255;

        LED_Blinker(count,fRateOn,fRateOff, brightv);

         }
        


//----------------------- Rainbow Flash -----------------------

void LED_Rainbow_Flash(int count, int brightv) {

        RGB.control(true);   // take control of the RGB LED        
        RGB.brightness(brightv);

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

        RGB.brightness(96);
        RGB.control(false);  // resume normal operation

   }

// LED Reset  Green / White flash x4   -----------------------
     
     void LED_reset(int count, int brightv) {  

        RGB.control(true);   // take control of the RGB LED
        RGB.brightness(brightv);

  if (count< 1 || count >8) count=3;
  countr = 1;
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
          countr++; 
    } while (count >= countr);

        RGB.brightness(96);
        RGB.control(false);  // resume normal operation
     }     
