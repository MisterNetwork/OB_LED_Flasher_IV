//  ----------------------------------- On-board LED Handling
//  OnBoard
//    L     EEEE  DDD  
//    L     E     D  D
//    L     EEE   D   D
//    L     E     D  D
//    LLLL  EEEE  DDD    Flasher V2.0.3
//
//  -------------------------------------
/*
*  Particle On-Board LED controller
*  Bob (Dawgs)  bob@misternetwork.com   09-2015
*  Last revision 8-9-2016
*
*  LED_Red_Flash(i)  - red flash x(i)
*  LED_Red_FFlash(i)  - red fast flash x(i)
*
*  LED_Green_Flash(i) - green flash x(i)
*  LED_Green_FFlash(i) - green fast flash x(i)
*
*  LED_Blue_Flash(i) - blue flash x(i)
*  LED_Blue_FFlash(i) - blue fast flash x(i)
*
*  LED_Yellow_Flash(i) - yellow flash x(i)
*  LED_Yellow_FFlash(i) - yellow fast flash x(i)
*
*  LED_Cyan_Flash(i) - cyan flash x(i)
*  LED_Cyan_FFlash(i) - cyan fast flash x(i)
*
*  LED_Magenta_Flash(i) - magenta flash x(i)
*  LED_Magenta_FFlash(i) - magenta fast flash x(i)
*
*  LED_reset()  - green/white flash x4
*
*  LED_Rainbow_Flash(i)  - RGB flash x(i)
*
*/


int lred;
int lgreen;
int lblue;
int count;
int countr;


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

        LED_Blinker(count);
 
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

        LED_Blinker(count);
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

        LED_Blinker(count);
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

        LED_Blinker(count);
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
        
        LED_Blinker(count);
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

        LED_Blinker(count);
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

void LED_Blinker(int count){

  RGB.control(true);   // take control of the RGB LED
  if (count< 1 || count >8) count=3;
  countr = 1;
     do
    {
      RGB.color(lred, lgreen, lblue);  // on
          delay(900);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
          countr++; 
    } while (count >= countr);

        RGB.control(false);  // resume normal operation
        }




// LED Reset  Green / White flash x4   -----------------------
     
     void LED_reset() {  

        RGB.control(true);   // take control of the RGB LED

        RGB.color(0, 255, 0);  // green
          delay(400);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(180, 120, 255);  // white
          delay(400);   // wait 
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait 
        RGB.color(0, 255, 0);  // green
          delay(400);   // wait
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
        RGB.color(180, 120, 255);  // white
          delay(400);   // wait
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
        RGB.color(0, 255, 0);  // green
          delay(400);   // wait
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
        RGB.color(180, 120, 255);  // white
          delay(400);   // wait
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
        RGB.color(0, 255, 0);  // green
          delay(400);   // wait
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
        RGB.color(180, 120, 255);  // white
          delay(400);   // wait
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait

        RGB.control(false);  // resume normal operation
     }     
