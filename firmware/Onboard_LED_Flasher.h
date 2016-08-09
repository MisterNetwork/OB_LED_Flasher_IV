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
*  LED_Red_Flash()  - red flash x3
*  LED_Red_FFlash()  - red fast flash x3
*
*  LED_Green_Flash() - green flash x3
*  LED_Green_FFlash() - green fast flash x3
*
*  LED_Blue_Flash() - blue flash x3
*  LED_Blue_FFlash() - blue fast flash x3
*
*  LED_Yellow_Flash() - yellow flash x3
*  LED_Yellow_FFlash() - yellow fast flash x3
*
*  LED_Cyan_Flash() - cyan flash x3
*  LED_Cyan_FFlash() - cyan fast flash x3
*
*  LED_Magenta_Flash() - magenta flash x3
*  LED_Magenta_FFlash() - magenta fast flash x3
*
*  LED_reset()  - green/white flash x4
*
*  LED_Rainbow_Flash()  - RGB flash x3
*
*/


int lred;
int lgreen;
int lblue;
int count;
int countr;


//-----------------------  Red flash x3   -----------------------

void LED_Red_Flash(int count) {

        RGB.control(true);   // take control of the RGB LED

        lred = 255;
        lgreen = 0;
        lblue = 0;
        
  if (count< 1 || count >8) count=3;
  countr = 0;
     do
    {
      RGB.color(lred, lgreen, lblue);  // red
          delay(1000);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait
          countr++; 
    } while (count > countr);

          
        RGB.color(lred, lgreen, lblue);  // red
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue);  // red
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      

        RGB.control(false);  // resume normal operation
        }
         
         
//-----------------------  Red Fast Flash x3   -----------------------

void LED_Red_FFlash() {

        RGB.control(true);   // take control of the RGB LED
        
        lred = 255;
        lgreen = 0;
        lblue = 0;

        RGB.color(lred, lgreen, lblue);  // red
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue);  // red
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue);  // red
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait 

        RGB.control(false);  // resume normal operation
 
        }
 


//-----------------------  Green flash x3   -----------------------

void LED_Green_Flash() {

        RGB.control(true);   // take control of the RGB LED

        lred = 0;
        lgreen = 255;
        lblue = 0;

        RGB.color(lred, lgreen, lblue); // Green
          delay(1000);   // wait one second     
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Green
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Green
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        
        RGB.control(false);  // resume normal operation
 
         }
        
//-----------------------  Green Fast Flash x3   -----------------------
        
void LED_Green_FFlash() {

        RGB.control(true);   // take control of the RGB LED        

        lred = 0;
        lgreen = 255;
        lblue = 0;

        RGB.color(lred, lgreen, lblue); // green
          delay(500);   // wait     
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // green
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // green
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      

        RGB.control(false);  // resume normal operation
   }



//-----------------------  Blue flash x3   -----------------------

void LED_Blue_Flash() {

        RGB.control(true);   // take control of the RGB LED

        lred = 0;
        lgreen = 0;
        lblue = 255;

        RGB.color(lred, lgreen, lblue); // Blue
          delay(1000);   // wait one second     
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Blue
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Blue
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        
        RGB.control(false);  // resume normal operation
 
         }
        
//----------------------- Blue Fast Flash x3   -----------------------
        
void LED_Blue_FFlash() {

        RGB.control(true);   // take control of the RGB LED        

        lred = 0;
        lgreen = 0;
        lblue = 255;

        RGB.color(lred, lgreen, lblue); // Blue
          delay(500);   // wait     
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // Blue
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // Blue
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      

        RGB.control(false);  // resume normal operation
   }

         
//-----------------------  Yellow flash x3   -----------------------
 
void LED_Yellow_Flash() {

        RGB.control(true);   // take control of the RGB LED

        lred = 255;
        lgreen = 255;
        lblue = 0;

        RGB.color(lred, lgreen, lblue); // yellow
          delay(1000);   // wait one second     
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // yellow
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // yellow
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        
        RGB.control(false);  // resume normal operation
 
         }
        
//-----------------------  Yellow Fast Flash x3   -----------------------
        
void LED_Yellow_FFlash() {

        RGB.control(true);   // take control of the RGB LED        

        lred = 255;
        lgreen = 255;
        lblue = 0;

        RGB.color(lred, lgreen, lblue); // yellow
          delay(500);   // wait     
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // yellow
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // yellow
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      

        RGB.control(false);  // resume normal operation
   }
        

//-----------------------  Cyan flash x3   -----------------------
 
void LED_Cyan_Flash() {

        RGB.control(true);   // take control of the RGB LED

        lred = 0;
        lgreen = 255;
        lblue = 255;

        RGB.color(lred, lgreen, lblue); // Cyan
          delay(1000);   // wait one second     
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Cyan
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Cyan
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        
        RGB.control(false);  // resume normal operation
 
         }
        
//-----------------------  Cyan Fast Flash x3   -----------------------
        
void LED_Cyan_FFlash() {

        RGB.control(true);   // take control of the RGB LED        

        lred = 0;
        lgreen = 255;
        lblue = 255;

        RGB.color(lred, lgreen, lblue); // Cyan
          delay(500);   // wait     
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // Cyan
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // Cyan
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      

        RGB.control(false);  // resume normal operation
   }



         
//-----------------------  Magenta flash x3   -----------------------
 
void LED_Magenta_Flash() {

        RGB.control(true);   // take control of the RGB LED

        lred = 255;
        lgreen = 0;
        lblue = 255;

        RGB.color(lred, lgreen, lblue); // Magenta
          delay(1000);   // wait one second     
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Magenta
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        RGB.color(lred, lgreen, lblue); // Magenta
          delay(800);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
        
        RGB.control(false);  // resume normal operation
 
         }
        
//-----------------------  Magenta Fast Flash x3   -----------------------
        
void LED_Magenta_FFlash() {

        RGB.control(true);   // take control of the RGB LED        

        lred = 255;
        lgreen = 0;
        lblue = 255;

        RGB.color(lred, lgreen, lblue); // yellow
          delay(500);   // wait     
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // yellow
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      
        RGB.color(lred, lgreen, lblue); // yellow
          delay(500);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(200);   // wait      

        RGB.control(false);  // resume normal operation
   }



//----------------------- Rainbow Flash x3   -----------------------

void LED_Rainbow_Flash() {

        RGB.control(true);   // take control of the RGB LED        

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


        RGB.control(false);  // resume normal operation
   }



//  Generic Flasher
/*

        RGB.color(lred, lgreen, lblue); // yellow
          delay(800);   // wait one second     
        RGB.color(0, 0, 0);  // off
          delay(300);   // wait      
        RGB.color(255, 255, 0); // yellow
          delay(700);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(300);   // wait      
        RGB.color(255, 255, 0); // yellow
          delay(700);   // wait      
        RGB.color(0, 0, 0);  // off
          delay(300);   // wait      

*/



        
        
//        if (timerFlag){
//          RGB.color(0, 255, 0);   // green
//          delay(1000);   // wait one second     
//        }
        

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
