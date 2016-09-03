//  ----------------------------------- On-board LED Handling
//  OnBoard
//    L     EEEE  DDD  
//    L     E     D  D
//    L     EEE   D   D
//    L     E     D  D  
//    LLLL  EEEE  DDD   Flasher II
//                               V3.0.1
//  -------------------------------------
/*
*  Particle On-Board LED controller
*  Bob (Dawgs)  bob@misternetwork.com   09-2015
*  Last revision 8-9-2016
*
*  The following are available:
*
*  LED_Red_Flash(count);  // red flash x(count)
*  LED_Red_FFlash(count);  // red fast flash x(count)
*  
*  LED_Green_Flash(count); // green flash x(count)
*  LED_Green_FFlash(count); // green fast flash x(count)
*  
*  LED_Blue_Flash(count); // blue flash x(count)
*  LED_Blue_FFlash(count); // blue fast flash x(count)
*  
*  LED_Yellow_Flash(count); // yellow flash x(count)
*  LED_Yellow_FFlash(count); // yellow fast flash x(count)
*  
*  LED_Orange_Flash(count); // orange flash x(count)
*  LED_Orange_FFlash(count); // orange fast flash x(count)
*  
*  LED_Cyan_Flash(count); // cyan flash x(count)
*  LED_Cyan_FFlash(count); // cyan fast flash x(count)
*  
*  LED_Magenta_Flash(count); // magenta flash x(count)
*  LED_Magenta_FFlash(count); // magenta fast flash x(count)
*  
*  LED_White_Flash(count); // white flash x(count)
*  LED_White_FFlash(count); // white fast flash x(count)
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
void LED_Blinker(int countb){

  RGB.control(true);   // take control of the RGB LED
  if (countb< 1 || countb >8) countb=3;
  countr = 1;
     do
    {
      RGB.color(lred, lgreen, lblue);  // on
          delay(900);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
          countr++; 
    } while (countb >= countr);

        RGB.control(false);  // resume normal operation
        }

//---- Fast Flash Blink Control - all colors ----------
void LED_FF_Blinker(int countb){

  RGB.control(true);   // take control of the RGB LED
  if (countb< 1 || countb >8) countb=3;
  countr = 1;
     do
    {
      RGB.color(lred, lgreen, lblue);  // on
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait
          countr++; 
    } while (countb >= countr);

        RGB.control(false);  // resume normal operation
        }

//-----------------------  Red flash x3   -----------------------

void LED_Red_Flash(int count) {

        lred = 255;
        lgreen = 0;
        lblue = 0;
        
        LED_Blinker(count);
        }

         
         
//-----------------------  Red Fast Flash x3   -----------------------

void LED_Red_FFlash(int count) {

        lred = 255;
        lgreen = 0;
        lblue = 0;

        LED_FF_Blinker(count);
        }

//-----------------------  Green flash x3   -----------------------

void LED_Green_Flash(int count) {

        lred = 0;
        lgreen = 255;
        lblue = 0;

        LED_Blinker(count);
         }
        
//-----------------------  Green Fast Flash x3   -----------------------
        
void LED_Green_FFlash(int count) {

        lred = 0;
        lgreen = 255;
        lblue = 0;

        LED_FF_Blinker(count);
        }

//-----------------------  Blue flash x3   -----------------------

void LED_Blue_Flash(int count) {

        lred = 0;
        lgreen = 0;
        lblue = 255;

        LED_Blinker(count);
}
        
//----------------------- Blue Fast Flash x3   -----------------------
        
void LED_Blue_FFlash(int count) {

        lred = 0;
        lgreen = 0;
        lblue = 255;

        LED_FF_Blinker(count);
   }

//-----------------------  Yellow flash x3   -----------------------
 
void LED_Yellow_Flash(int count) {

        lred = 255;
        lgreen = 255;
        lblue = 0;

        LED_Blinker(count);
         }
        
//-----------------------  Yellow Fast Flash x3   -----------------------
        
void LED_Yellow_FFlash(int count) {

        lred = 255;
        lgreen = 255;
        lblue = 0;

        LED_FF_Blinker(count);
   }
    

//-----------------------  Orange flash x3   -----------------------
 
void LED_Orange_Flash(int count) {

        lred = 255;
        lgreen = 100;
        lblue = 0;

        LED_Blinker(count);
         }
        
//-----------------------  Orange Fast Flash x3   -----------------------
        
void LED_Orange_FFlash(int count) {

        lred = 255;
        lgreen = 100;
        lblue = 0;

        LED_FF_Blinker(count);
   }
    


//-----------------------  Cyan flash x3   -----------------------
 
void LED_Cyan_Flash(int count) {

        lred = 0;
        lgreen = 255;
        lblue = 255;

        LED_Blinker(count);
 }
        
//-----------------------  Cyan Fast Flash x3   -----------------------
        
void LED_Cyan_FFlash(int count) {

        lred = 0;
        lgreen = 255;
        lblue = 255;
        
        LED_FF_Blinker(count);
   }

//-----------------------  Magenta flash x3   -----------------------
 
void LED_Magenta_Flash(int count) {

        lred = 255;
        lgreen = 0;
        lblue = 255;

        LED_Blinker(count);
         }
        
//-----------------------  Magenta Fast Flash x3   -----------------------
        
void LED_Magenta_FFlash(int count) {

        lred = 255;
        lgreen = 0;
        lblue = 255;

        LED_FF_Blinker(count);
   }

//-----------------------  White flash x3   -----------------------
 
void LED_White_Flash(int count) {

        lred = 255;
        lgreen = 255;
        lblue = 255;

        LED_Blinker(count);
         }
        
//-----------------------  White Fast Flash x3   -----------------------
        
void LED_White_FFlash(int count) {

        lred = 255;
        lgreen = 255;
        lblue = 255;

        LED_FF_Blinker(count);
   }

//----------------------- Rainbow Flash x3   -----------------------

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


void LED_Control() {

//    if (overTempFlag) {
//        LED_Red_Flash();
//        LED_Red_FFlash();
//        LED_Red_Flash();
//        LED_Red_FFlash();
//        }   
//    
//    if (highTempFlag) {
//        LED_Yellow_Flash();
//        LED_Yellow_FFlash();
//        LED_Yellow_Flash();
//        LED_Yellow_FFlash();
//        }  

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
