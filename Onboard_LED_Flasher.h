//  ----------------------------------- On-board LED Handling
//    L     EEEE  DDD  
//    L     E     D  D
//    L     EE    D   D
//    L     E     D  D
//    LLLL  EEEE  DDD    Flasher V02.1
//  -------------------------------------
//
//  Photon On-Board LED controller
//  Bob (Dawgs)  bob@misternetwork.com   09-2015
//
//


int lred;
int lgreen;
int lblue;






void LED_Red_Flash() {
//                          Red flash x3   -----------------------
        RGB.control(true);   // take control of the RGB LED

        lred = 255;
        lgreen = 0;
        lblue = 0;

        RGB.color(lred, lgreen, lblue);  // red
          delay(800);   // wait      
         RGB.color(0, 0, 0);  // off
          delay(400);   // wait      
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
         
         
void LED_Red_FFlash() {
//                          Red Fast Flash x3   -----------------------

         
        RGB.control(true);   // take control of the RGB LED
        RGB.control(false);  // resume normal operation
 
   }
 
 
         
 
void LED_Yellow_Flash() {

//                           Yellow flash x3   -----------------------

        RGB.control(true);   // take control of the RGB LED

        lred = 255;
        lgreen = 255;
        lblue = 0;

        RGB.color(lred, lgreen, lblue); // yellow
          delay(800);   // wait one second     
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
        
        
void LED_Yellow_FFlash() {
//                           Yellow Fast Flash x3   -----------------------

        
        RGB.control(true);   // take control of the RGB LED        
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
//          RGB.color(0, 255, 0);   // greenw
//          delay(1000);   // wait one second     
//        }
        

void LED_Control() {

    if (overTempFlag) {LED_Red_Flash();}   
    
    if (highTempFlag) {LED_Yellow_Flash();}  

}
  
     
     void LED_reset() {  
// LED Reset  Green / White flash x4   -----------------------

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
