// name: kissa zahra        roll no: 21i-0572       pf final project
//============================================================================
// Name        : kissa zahra
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}




// taxi that will be in our control    
int xI = 13, yI = 1033;
int color_of_car;
void drawCar() {
          if(color_of_car == 1)
          {
	     DrawSquare(xI, yI, 25, colors[ORANGE]);                 //Yellow taxi if the user input 1 option
	     DrawCircle(xI,yI,3,colors[BLACK]);
	     DrawCircle(xI,(yI+25) ,3,colors[BLACK]);
	     DrawCircle((xI+25),yI,3,colors[BLACK]); 
	     DrawCircle((xI+25),(yI+25),3,colors[BLACK]);
	   }
	   else
	   {
	     DrawSquare(xI, yI, 25, colors[RED]);                        //Yellow taxi if the user input 2 option
	     DrawCircle(xI,yI,3,colors[BLACK]);
	     DrawCircle(xI,(yI+25) ,3,colors[BLACK]);
	     DrawCircle((xI+25),yI,3,colors[BLACK]); 
	     DrawCircle((xI+25),(yI+25),3,colors[BLACK]);
	     
	   }
	
	
	glutPostRedisplay();
}
 
   
bool flag = true;
void moveCar() {
	
	/*if (yI > 10 && flag) {
		yI -= 10;
		cout << "going down";
		  if(yI < 544)
			
			flag = false;

	}
	else if (yI < 892 && !flag) {
		cout << "go up";
		 yI += 10;
		if (yI > 891)
		flag = true;
	}*/
}

//Car 2   movement 

int xII = 67, yII = 229;

void drawCar2() {                                      //Second car on the screen 
	DrawSquare(xII, yII, 25, colors[GREEN]);
	DrawCircle(xII,yII,3,colors[BLACK]);
	DrawCircle(xII,(yII+25) ,3,colors[BLACK]);
	DrawCircle((xII+25),yII,3,colors[BLACK]); 
	DrawCircle((xII+25),(yII+25),3,colors[BLACK]);
	
	
	glutPostRedisplay();
}


void moveCar2() {                                  //movemnt of second car on the screen 
	
	if (yII > 10 && flag) {
		yII -= 10;
		cout << "going down";
		  if(yII < 30)
			
			flag = false;

	}
	else if (yII < 1050 && !flag) {
		cout << "go up";
		 yII += 10;
		if (yII > 1048)
		flag = true;
	}
} 


//car 3 movement

int xIII = 162, yIII = 162;                                   //third car on the screen 

void drawCar3() {
	DrawSquare(xIII, yIII, 25, colors[BLUE]);
       DrawCircle(xIII,yIII,3,colors[BLACK]);
       DrawCircle(xIII,(yIII+25) ,3,colors[BLACK]);
       DrawCircle((xIII+25),yIII,3,colors[BLACK]);  
       DrawCircle((xIII+25),(yIII+25),3,colors[BLACK]);
	
	
	glutPostRedisplay();
}


void moveCar3() {                                        //movemnt of third car on the screen
	
	if (xIII > 10 && flag) {
		xIII -= 10;
		cout << "going left";
		  if(xIII < 121)
			
			flag = false;

	}
	else if (xIII < 1050 && !flag) {
		cout << "go right";
		 xIII += 10;
		if (xIII > 431)
		    flag = true;
	}
	
	
}
 

                    
                    //Co-ordinates of the stick man in the game

           int man_1_x = 783;
           int man_1_y = 1003;

    void man_1()                                                          
    {
        DrawCircle(man_1_x , man_1_y ,6 , colors[BLACK]);
	DrawLine(man_1_x , man_1_y-15 , man_1_x , man_1_y, 4 , colors[BLACK] );
	
	DrawLine(man_1_x , man_1_y-5 ,  man_1_x+5 , man_1_y-10 , 4 , colors[BLACK] );
	DrawLine(man_1_x , man_1_y-5,  man_1_x-5 , man_1_y-10, 4 , colors[BLACK] );
	DrawLine(man_1_x , man_1_y-15 , man_1_x+5 , man_1_y-20 , 4 , colors[BLACK] );
	DrawLine(man_1_x , man_1_y-15,  man_1_x-5, man_1_y-20 , 4 , colors[BLACK] ); 
	
      
    }
          int man_2_x = 458;
          int man_2_y = 699;
     void man_2()
    {
        DrawCircle(man_2_x , man_2_y , 6 , colors[BLACK]);
	DrawLine(man_2_x, (man_2_y-15) , man_2_x , man_2_y, 4 , colors[BLACK] );
	
        DrawLine(man_2_x , (man_2_y-5) ,  (man_2_x+5) ,(man_2_y-10)  , 4 , colors[BLACK] );
	DrawLine(man_2_x , (man_2_y-5) ,  (man_2_x-5) , (man_2_y-10) , 4 , colors[BLACK] );
	DrawLine(man_2_x , (man_2_y-15) ,  (man_2_x+5) , (man_2_y-20) , 4 , colors[BLACK] );
	DrawLine(man_2_x, (man_2_y-15) ,  (man_2_x-5) , (man_2_y-20) , 4 , colors[BLACK] ); 
	
      
    }
    
          int man_3_x = 831;
          int man_3_y = 553;
     void man_3()
    {
        DrawCircle(man_3_x, man_3_y , 6 , colors[BLACK]);
        DrawLine(man_3_x , man_3_y-15 ,  man_3_x , man_3_y, 4 , colors[BLACK] );
	
	DrawLine(man_3_x , man_3_y-5 ,  man_3_x+5 , man_3_y-10 , 4 , colors[BLACK] );
	DrawLine(man_3_x , man_3_y-5 ,  man_3_x-5 , man_3_y-10, 4 , colors[BLACK] );
	DrawLine(man_3_x, man_3_y -15 ,  man_3_x+5 , man_3_y-20, 4 , colors[BLACK] );
	DrawLine(man_3_x, man_3_y-15 ,  man_3_x-5, man_3_y-20 , 4 , colors[BLACK] ); 
	
      
    }

/*
 * Main Canvas drawing function.
 * */
 bool menu=1, game=0;

void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1/*Blue Component*/, 1/*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Red Square
	/*DrawSquare(400, 20, 40, colors[RED]);
	
	//Green Square
	DrawSquare( 250 , 250 ,20,colors[GREEN]); 
	
	//Display Score
	DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	
	

	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	DrawCircle(50,670,10,colors[RED]);
	DrawCircle(70,670,10,colors[RED]);
	DrawCircle(90,670,10,colors[RED]);
	DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20); */
	

	if (menu==1){                                        //Making Menu
          
        DrawString( 300,640," Welcome to RUSH HOUR by Kissa Zahra ", colors[DARK_OLIVE_GREEN]); 
	DrawString( 400,540,"Press any key to start the game.", colors[DARK_OLIVE_GREEN]);
	  
	DrawSquare(756, 972, 25, colors[RED]);             
        DrawCircle(756,972,3,colors[BLACK]);                            //car
        DrawCircle(756,(972+25) ,3,colors[BLACK]);
        DrawCircle((756+25),972,3,colors[BLACK]);  
        DrawCircle((756+25),(972+25),3,colors[BLACK]);   
        
        DrawSquare(270, 810, 25, colors[BLUE]);             
        DrawCircle(270,810,3,colors[BLACK]);                            //car
        DrawCircle(270,(810+25) ,3,colors[BLACK]);
        DrawCircle((270+25),810,3,colors[BLACK]);  
        DrawCircle((270+25),(810+25),3,colors[BLACK]); 
        
        DrawSquare(607, 270, 25, colors[GREEN]);             
        DrawCircle(607,270,3,colors[BLACK]);                            //car
        DrawCircle(607,(270+25) ,3,colors[BLACK]);
        DrawCircle((607+25),270,3,colors[BLACK]);  
        DrawCircle((607+25),(270+25),3,colors[BLACK]); 
        
        DrawSquare(162, 108, 25, colors[BLUE]);             
        DrawCircle(162,108,3,colors[BLACK]);                            //car
        DrawCircle(162,(108+25) ,3,colors[BLACK]);
        DrawCircle((162+25),108,3,colors[BLACK]);  
        DrawCircle((162+25),(108+25),3,colors[BLACK]);  
        
        
        DrawSquare(108, 972, 25, colors[YELLOW]);             
        DrawCircle(108,972,3,colors[BLACK]);                            //car
        DrawCircle(108,(972+25) ,3,colors[BLACK]);
        DrawCircle((108+25),972,3,colors[BLACK]);  
        DrawCircle((108+25),(972+25),3,colors[BLACK]); 
        
        DrawSquare(918, 756, 25, colors[ORANGE]);             
        DrawCircle(918,756,3,colors[BLACK]);                            //car
        DrawCircle(918,(756+25) ,3,colors[BLACK]);
        DrawCircle((918+25),756,3,colors[BLACK]);  
        DrawCircle((918+25),(756+25),3,colors[BLACK]); 
        
        DrawSquare(540, 108, 25, colors[LIGHT_BLUE]);             
        DrawCircle(540,108,3,colors[BLACK]);                            //car
        DrawCircle(540,(108+25) ,3,colors[BLACK]);
        DrawCircle((540+25),108,3,colors[BLACK]);  
        DrawCircle((540+25),(108+25),3,colors[BLACK]);
        
        DrawSquare(162, 648, 25, colors[BLUE]);             
        DrawCircle(162,648,3,colors[BLACK]);                            //car
        DrawCircle(162,(648+25) ,3,colors[BLACK]);
        DrawCircle((162+25),648,3,colors[BLACK]);  
        DrawCircle((162+25),(648+25),3,colors[BLACK]);  
        
        
        DrawSquare(324, 378, 25, colors[YELLOW]);             
        DrawCircle(324,378,3,colors[BLACK]);                            //car
        DrawCircle(324,(378+25) ,3,colors[BLACK]);
        DrawCircle((324+25),378,3,colors[BLACK]);  
        DrawCircle((324+25),(378+25),3,colors[BLACK]); 
        
        DrawSquare(918, 540, 25, colors[ORANGE]);             
        DrawCircle(918,540,3,colors[BLACK]);                            //car
        DrawCircle(918,(540+25) ,3,colors[BLACK]);
        DrawCircle((918+25),540,3,colors[BLACK]);  
        DrawCircle((918+25),(540+25),3,colors[BLACK]); 
        
        DrawSquare(918, 108, 25, colors[LIGHT_BLUE]);             
        DrawCircle(918,108,3,colors[BLACK]);                            //car
        DrawCircle(918,(108+25) ,3,colors[BLACK]);
        DrawCircle((918+25),108,3,colors[BLACK]);  
        DrawCircle((918+25),(108+25),3,colors[BLACK]);
        
        DrawSquare(810, 378, 25, colors[RED]);             
        DrawCircle(810,378,3,colors[BLACK]);                            //car
        DrawCircle(810,(378+25) ,3,colors[BLACK]);
        DrawCircle((810+25),378,3,colors[BLACK]);  
        DrawCircle((810+25),(378+25),3,colors[BLACK]); 
        
        DrawSquare(702, 810, 25, colors[ORANGE]);             
        DrawCircle(702,810,3,colors[BLACK]);                            //car
        DrawCircle(702,(810+25) ,3,colors[BLACK]);
        DrawCircle((702+25),810,3,colors[BLACK]);  
        DrawCircle((702+25),(810+25),3,colors[BLACK]); 
        
        DrawSquare(162, 594, 25, colors[LIGHT_BLUE]);             
        DrawCircle(162,594,3,colors[BLACK]);                            //car
        DrawCircle(162,(594+25) ,3,colors[BLACK]);
        DrawCircle((162+25),594,3,colors[BLACK]);  
        DrawCircle((162+25),(594+25),3,colors[BLACK]);
        
        DrawSquare(54, 378, 25, colors[RED]);             
        DrawCircle(54,378,3,colors[BLACK]);                            //car
        DrawCircle(54,(378+25) ,3,colors[BLACK]);
        DrawCircle((54+25),378,3,colors[BLACK]);  
        DrawCircle((54+25),(378+25),3,colors[BLACK]); 
        
        DrawSquare(324, 1020, 25, colors[BROWN]);             
        DrawCircle(324,1020,3,colors[BLACK]);                            //car
        DrawCircle(324,(1020+25) ,3,colors[BLACK]);
        DrawCircle((324+25),1020,3,colors[BLACK]);  
        DrawCircle((324+25),(1020+25),3,colors[BLACK]); 
        
        DrawSquare(1026, 1000, 25, colors[LIGHT_BLUE]);             
        DrawCircle(1026,1000,3,colors[BLACK]);                            //car
        DrawCircle(1026,(1000+25) ,3,colors[BLACK]);
        DrawCircle((1026+25),1000,3,colors[BLACK]);  
        DrawCircle((1026+25),(1000+25),3,colors[BLACK]);
        
        
        DrawLine( 567 , 972 ,  567 , 999 , 5 , colors[BROWN] );
       DrawTriangle( 540, 999 , 567, 1026 , 594 , 999, colors[GREEN] ); 
       DrawLine( 513 , 432 ,  513 , 453 , 5 , colors[BROWN] );
       DrawTriangle( 486, 453 , 513, 486 , 540 , 453, colors[GREEN] );    //trees
       
        
       
       
       DrawCircle(918 , 216,6 , colors[BLACK]);
	DrawLine(918, 216-15 , 918 , 216, 4 , colors[BLACK] );
	
	DrawLine(918 , 216-5 , 918+5 , 216-10 , 4 , colors[BLACK] );
	DrawLine(918 , 216-5,  918-5 , 216-10, 4 , colors[BLACK] );
	DrawLine(918, 216-15 , 918+5 , 216-20 , 4 , colors[BLACK] );
	DrawLine(918, 216-15,  918-5, 216-20 , 4 , colors[BLACK] ); 
	
	DrawCircle(756 , 972 ,6 , colors[BLACK]);
	DrawLine(756 , 972-15 , 756 , 972, 4 , colors[BLACK] );
	
	DrawLine(756 , 972-5 ,  756+5 , 972-10 , 4 , colors[BLACK] );
	DrawLine(756 , 972-5,  756-5 , 972-10, 4 , colors[BLACK] );
	DrawLine(756 , 972-15 , 756+5 , 972-20 , 4 , colors[BLACK] );
	DrawLine(756 , 972-15,  756-5, 972-20 , 4 , colors[BLACK] );       
	 
	 glutSwapBuffers(); 
	 }
	 else if (game==1){
	
	DrawLine(0, 0, 0, 1080, 2, colors[BLACK]);                            //to design the background grid
	DrawLine(54, 0, 54, 1080, 2, colors[BLACK]);
	DrawLine(108, 0, 108, 1080, 2, colors[BLACK]);
	DrawLine(162, 0, 162, 1080, 2, colors[BLACK]);
	DrawLine(216, 0, 216, 1080, 2, colors[BLACK]);
	DrawLine(270, 0, 270, 1080, 2, colors[BLACK]);
	DrawLine(324, 0, 324, 1080, 2, colors[BLACK]);
	DrawLine(378, 0, 378, 1080, 2, colors[BLACK]);
	DrawLine(432, 0, 432, 1080, 2, colors[BLACK]);
	DrawLine(486, 0, 486, 1080, 2, colors[BLACK]);
	DrawLine(540, 0, 540, 1080, 2, colors[BLACK]);
	DrawLine(594, 0, 594, 1080, 2, colors[BLACK]);
	DrawLine(648, 0, 648, 1080, 2, colors[BLACK]);
	DrawLine(702, 0, 702, 1080, 2, colors[BLACK]);
	DrawLine(756, 0, 756, 1080, 2, colors[BLACK]);
	DrawLine(810, 0, 810, 1080, 2, colors[BLACK]);
	DrawLine(864, 0, 864, 1080, 2, colors[BLACK]);
	DrawLine(918, 0, 918, 1080, 2, colors[BLACK]);
	DrawLine(972, 0, 972, 1080, 2, colors[BLACK]);
	DrawLine(1026, 0, 1026, 1080, 2, colors[BLACK]);
	DrawLine(1080, 0, 1080, 1080, 2, colors[BLACK]);
	DrawLine(0, 0, 0, 1080, 2, colors[BLACK]);
	

       DrawSquare(108, 918, 54, colors[BLACK]); 
       DrawSquare(162, 918, 54, colors[BLACK]); 
       DrawSquare(216, 918, 54, colors[BLACK]); 
       
       DrawSquare(270, 756, 54, colors[BLACK]); 
       DrawSquare(324, 756, 54, colors[BLACK]); 
       DrawSquare(378, 756, 55, colors[BLACK]); 
       DrawSquare(378, 810, 55, colors[BLACK]);
       DrawSquare(378, 864, 55, colors[BLACK]); 
        
       DrawSquare(108, 756, 55, colors[BLACK]); 
       DrawSquare(162, 756, 55, colors[BLACK]);
       DrawSquare(162, 702, 55, colors[BLACK]); 
       
       DrawSquare(486, 918, 55, colors[BLACK]); 
       DrawSquare(540, 918, 55, colors[BLACK]);
       DrawSquare(594, 918, 55, colors[BLACK]);
       DrawSquare(648, 918, 55, colors[BLACK]); 
       DrawSquare(702, 918, 55, colors[BLACK]);
       DrawSquare(756, 918, 55, colors[BLACK]);
       DrawSquare(810, 918, 55, colors[BLACK]); 
       DrawSquare(864, 918, 55, colors[BLACK]);
       DrawSquare(918, 918, 55, colors[BLACK]);
       DrawSquare(972, 918, 55, colors[BLACK]); 
       DrawSquare(1026, 918, 55, colors[BLACK]);
       DrawSquare(1080, 918, 55, colors[BLACK]);
       

      
       DrawSquare(486, 702, 55, colors[BLACK]);
       
       DrawSquare(972, 594, 55, colors[BLACK]);
       DrawSquare(972, 648, 55, colors[BLACK]);
       DrawSquare(972, 702, 55, colors[BLACK]); 
       DrawSquare(972, 756, 55, colors[BLACK]);
       DrawSquare(972, 810, 55, colors[BLACK]);
       
       DrawSquare(918, 54, 55, colors[BLACK]);
       DrawSquare(972, 54, 55, colors[BLACK]);
       
       DrawSquare(486, 0, 55, colors[BLACK]);
       DrawSquare(486, 54, 55, colors[BLACK]);
       DrawSquare(486, 108, 55, colors[BLACK]); 
       DrawSquare(486, 162, 55, colors[BLACK]);
       DrawSquare(486, 216, 55, colors[BLACK]);
       
       DrawSquare(270, 216, 55, colors[BLACK]);
       DrawSquare(270, 270, 55, colors[BLACK]);
       DrawSquare(270, 324, 55, colors[BLACK]); 
       DrawSquare(270, 378, 55, colors[BLACK]);
       DrawSquare(270, 432, 55, colors[BLACK]);
       DrawSquare(270, 486, 55, colors[BLACK]);
       
       
       DrawSquare(648, 594, 55, colors[BLACK]);
       DrawSquare(648, 648, 55, colors[BLACK]);
       DrawSquare(648, 702, 55, colors[BLACK]); 
       DrawSquare(648, 756, 55, colors[BLACK]);
       DrawSquare(648, 810, 55, colors[BLACK]);
       DrawSquare(702, 702, 55, colors[BLACK]);
       DrawSquare(756, 702, 55, colors[BLACK]);
       DrawSquare(810, 702, 55, colors[BLACK]); 
       
       DrawSquare(108, 270, 55, colors[BLACK]);
       DrawSquare(108, 324, 55, colors[BLACK]);
       DrawSquare(108, 378, 55, colors[BLACK]); 
       DrawSquare(162, 270, 55, colors[BLACK]);
       DrawSquare(162, 324, 55, colors[BLACK]);
       DrawSquare(162, 378, 55, colors[BLACK]);
       
       DrawSquare(378, 378, 55, colors[BLACK]);
       DrawSquare(432, 378, 55, colors[BLACK]);
       DrawSquare(486, 378, 55, colors[BLACK]); 
       DrawSquare(540, 378, 55, colors[BLACK]);
       DrawSquare(594, 378, 55, colors[BLACK]);
       DrawSquare(594, 432, 55, colors[BLACK]);
       DrawSquare(594, 486, 55, colors[BLACK]);
       
     
       
       DrawSquare(756, 270, 55, colors[BLACK]);
       DrawSquare(756, 324, 55, colors[BLACK]);
       DrawSquare(756, 378, 55, colors[BLACK]); 
       DrawSquare(756, 432, 55, colors[BLACK]);
       DrawSquare(810, 432, 55, colors[BLACK]);
       DrawSquare(864, 432, 55, colors[BLACK]);
       DrawSquare(918, 432, 55, colors[BLACK]);
       DrawSquare(972, 432, 55, colors[BLACK]);
       DrawSquare(1026, 432, 55, colors[BLACK]);
       
       //Making tress
       DrawLine( 567 , 972 ,  567 , 999 , 5 , colors[BROWN] );
       DrawTriangle( 540, 999 , 567, 1026 , 594 , 999, colors[GREEN] ); 
       
       DrawLine( 837,  648 , 837, 675 , 5 , colors[BROWN] );	
       DrawTriangle( 810, 675 , 837, 702 , 864 , 675, colors[GREEN] ); 
       
       DrawLine( 351 , 810 ,  351 , 837 , 5 , colors[BROWN] );
       DrawTriangle( 324, 837 , 351, 864 , 378 , 837, colors[GREEN] ); 
       
       DrawLine( 513 , 432 ,  513 , 453 , 5 , colors[BROWN] );
       DrawTriangle( 486, 453 , 513, 486 , 540 , 453, colors[GREEN] ); 
       
       
       //making random box objects
       DrawSquare(877, 324, 28, colors[ORANGE_RED]);
       DrawSquare(229, 327, 28, colors[ORANGE_RED]);
       DrawSquare(175, 864, 28, colors[ORANGE_RED]);
       
       //Making cars
       
       
       DrawSquare(283, 715, 25, colors[GREEN]);             
       DrawCircle(283,715,3,colors[BLACK]);
       DrawCircle(283,(715+25) ,3,colors[BLACK]);
       DrawCircle((283+25),715,3,colors[BLACK]);  
       DrawCircle((283+25),(715+25),3,colors[BLACK]);
       
       DrawSquare(661, 499, 25, colors[LIGHT_BLUE]);             
       DrawCircle(661,499,3,colors[BLACK]);
       DrawCircle(661,(499+25) ,3,colors[BLACK]);
       DrawCircle((661+25),499,3,colors[BLACK]);  
       DrawCircle((661+25),(499+25),3,colors[BLACK]);
       
       DrawSquare(607, 715, 25, colors[BLUE]);             
       DrawCircle(607,715,3,colors[BLACK]);
       DrawCircle(607,(715+25) ,3,colors[BLACK]);
       DrawCircle((607+25),715,3,colors[BLACK]);  
       DrawCircle((607+25),(715+25),3,colors[BLACK]);
       
  
     		
       //making man
       
       man_1();
       man_2();
       man_3();
       
       //making car
       
       drawCar();
       drawCar2();
       drawCar3();
     
      

	glutSwapBuffers();  // do not modify this line..
}
}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {                                        //to restrict the car from going on the buildings (black blocks) and stay inside the given boundary
	if (key== GLUT_KEY_LEFT ) 
	{    
	      
			xI-=10;
                 if(xI == 3 && (yI > 0 || yI <= 1033))                                        //xI = 13 and yI = 1033
                   {    xI+=10;  }
		
		   else if(xI > (108-25) && xI< 270 && yI>(918-25) && yI < 972)
		   {
			xI += 10;
		   }
		   else if(xI > (486-25) && xI< 1080 && yI>(918-25) && yI < 972)
		   {
			xI += 10;
		   }
		
		   else if(xI > (108-25) && xI< 216 && yI>(756-25) && yI < 810)
		   {
			xI += 10;
		   }
		    else if(xI > (162-25) && xI< 216 && yI>(702-25) && yI < 756)
		   {
			xI += 10;
		   }
		   
		    else if(xI > (270-25) && xI< 432 && yI>(756-25) && yI < 810)
		   {
			xI += 10;
		   }
		    else if(xI > (378-25) && xI<432 && yI>(810-25) && yI < 918)
		   {
			xI += 10;
		   }
		    else if(xI > (486-25) && xI<540 && yI>(702-25) && yI < 756)
		   {
			xI += 10;
		   }
		    else if(xI > (108-25) && xI<216 && yI>(270-25) && yI < 432)
		   {
			xI += 10;
		   }
		   else if(xI > (270-25) && xI<324 && yI>(216-25) && yI < 540)
		   {
			xI += 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(0-25) && yI < 270)
		   {
			xI += 10;
		   }
		   else if(xI > (972-25) && xI<1026 && yI>(594-25) && yI < 864)
		   {
			xI += 10;
		   }
		   else if(xI > (918-25) && xI<1026 && yI>(54-25) && yI < 108)
		   {
			xI += 10;
		   }
		   else if(xI > (378-25) && xI<648 && yI>(378-25) && yI < 432)
		   {
			xI += 10;
		   }
		   else if(xI > (594-25) && xI<648 && yI>(432-25) && yI < 540)
		   {
			xI += 10;
		   }
		   
		   else if(xI > (648-25) && xI<702 && yI>(594-25) && yI < 864)
		   {
			xI += 10;
		   }
		   else if(xI > (702-25) && xI<864 && yI>(702-25) && yI < 756)
		   {
			xI += 10;
		   }
		   
		   else if(xI > (756-25) && xI<810 && yI>(270-25) && yI < 486)
		   {
			xI += 10;
		   }
		   else if(xI > (810-25) && xI<1080 && yI>(432-25) && yI < 486)
		   {
			xI += 10;
		   }
		  /* else if(xI > (864-25) && xI<918 && yI>(324-25) && yI < 378)
		   {
			xI += 10;
		   }
		   
		   else if(xI > (162-25) && xI<216 && yI>(864-25) && yI < 918)
		   {
			xI += 10;
		   }
		   else if(xI > (216-25) && xI<270 && yI>(324-25) && yI < 378)
		   {
			xI += 10;
		   }
		   else if(xI > (540-25) && xI<594 && yI>(972-25) && yI < 1026)
		   {
			xI += 10;
		   }
		   else if(xI > (810-25) && xI<864 && yI>(648-25) && yI < 702)
		   {
			xI += 10;
		   }
		   
		   else if(xI > (324-25) && xI<378 && yI>(810-25) && yI < 864)
		   {
			xI += 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(432-25) && yI < 486)
		   {
			xI += 10;
		   } */
		

	} 
	else if (key== GLUT_KEY_RIGHT) 
                                                               //if the user presses the right key and any of these condition fullfills so it wont be able to as the value of x will decrements 
	{    
	        xI += 10;
	                                                                                              //xI = 13 and yI = 1033 
	   if( xI == 1063 && (yI > 0 || yI <=1033))
                 {    xI-=10;  }
	
		else if(xI>(108-25) && xI<270 && yI > (918-25)&& yI <972)
		   {
		       xI -= 10;
		   }
		else if(xI>(486-25) && xI<1080 && yI > (918-25)&& yI <972)
		  {
		       xI -= 10;
		   }
		else if(xI > (108-25) && xI< 216 && yI>(756-25) && yI < 810)
		   {
			xI -= 10;
		   }
		else if(xI > (162-25) && xI< 216 && yI>(702-25) && yI < 756)
		   {
			xI -= 10;
		   }
		else if(xI > (270-25) && xI< 432 && yI>(756-25) && yI < 810)
		   {
			xI -= 10;
		   }
	        else if(xI > (378-25) && xI<432 && yI>(810-25) && yI < 918)
		   {
			xI -= 10;
		   }
		 else if(xI > (486-25) && xI<540 && yI>(702-25) && yI < 756)
		   {
			xI -= 10;
		   }
		    else if(xI > (108-25) && xI<216 && yI>(270-25) && yI < 432)
		   {
			xI -= 10;
		   }
		   else if(xI > (270-25) && xI<324 && yI>(216-25) && yI < 540)
		   {
			xI -= 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(0-25) && yI < 270)
		   {
			xI -= 10;
		   }
		   else if(xI > (972-25) && xI<1026 && yI>(594-25) && yI < 864)
		   {
			xI -= 10;
		   }
		   else if(xI > (918-25) && xI<1026 && yI>(54-25) && yI < 108)
		   {
			xI -= 10;
		   }
		   else if(xI > (378-25) && xI<648 && yI>(378-25) && yI < 432)
		   {
			xI -= 10;
		   }
		   else if(xI > (594-25) && xI<648 && yI>(432-25) && yI < 540)
		   {
			xI -= 10;
		   }
		   
		   else if(xI > (648-25) && xI<702 && yI>(594-25) && yI < 864)
		   {
			xI -= 10;
		   }
		   else if(xI > (702-25) && xI<864 && yI>(702-25) && yI < 756)
		   {
			xI -= 10;
		   }
		   
		   else if(xI > (756-25) && xI<810 && yI>(270-25) && yI < 486)
		   {
			xI -= 10;
		   }
		   else if(xI > (810-25) && xI<1080 && yI>(432-25) && yI < 486)
		   {
			xI -= 10;
		   }
		   /* else if(xI > (864-25) && xI<918 && yI>(324-25) && yI < 378)
		   {
			xI -= 10;
		   }
		   
		   else if(xI > (162-25) && xI<216 && yI>(864-25) && yI < 918)
		   {
			xI -= 10;
		   }
		   else if(xI > (216-25) && xI<270 && yI>(324-25) && yI < 378)
		   {
			xI -= 10;
		   }
		   else if(xI > (540-25) && xI<594 && yI>(972-25) && yI < 1026)
		   {
			xI -= 10;
		   }
		   else if(xI > (810-25) && xI<864 && yI>(648-25) && yI < 702)
		   {
			xI -= 10;
		   }
		   
		   else if(xI > (324-25) && xI<378 && yI>(810-25) && yI < 864)
		   {
			xI -= 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(432-25) && yI < 486)
		   {
			xI -= 10;
		   } */
             
	     }	
	 
	else if (key == GLUT_KEY_UP) {                                                      //xI = 13 and yI = 1033 
	 
	           yI += 10;                                   //if the user presses the up key and any of these condition fullfills so it wont be able to go up as the value of y will decrements 
	           
	        if(yI == 1043 && (xI >=13 || xI<=1073))
                {          
                     yI-=10;  
                 }
		else if(xI>(108-25) && xI<270 && yI >(918-25) && yI <972){
		yI -= 10;
		}
		else if(xI>(486-25) && xI<1080 && yI >(918-25) && yI <972){
		yI -= 10;
		}
		else if(xI > (108-25) && xI< 216 && yI>(756-25) && yI < 810)
		{
			yI -= 10;
		}
		else if(xI > (162-25) && xI< 216 && yI>(702-25) && yI < 756)
		{
			yI -= 10;
		}
		else if(xI > (270-25) && xI< 432 && yI>(756-25) && yI < 810)
		{
			yI -= 10;
		}
	        else if(xI > (378-25) && xI<432 && yI>(810-25) && yI < 918)
		{
			yI -= 10;
		}
	        else if(xI > (486-25) && xI<540 && yI>(702-25) && yI < 756)
		{
			yI -= 10;
		}
		 else if(xI > (108-25) && xI<216 && yI>(270-25) && yI < 432)
		   {
			yI -= 10;
		   }
		   else if(xI > (270-25) && xI<324 && yI>(216-25) && yI < 540)
		   {
			yI -= 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(0-25) && yI < 270)
		   {
			yI -= 10;
		   }
		   else if(xI > (972-25) && xI<1026 && yI>(594-25) && yI < 864)
		   {
			yI -= 10;
		   }
		   else if(xI > (918-25) && xI<1026 && yI>(54-25) && yI < 108)
		   {
			yI -= 10;
		   }
		   else if(xI > (378-25) && xI<648 && yI>(378-25) && yI < 432)
		   {
			yI -= 10;
		   }
		   else if(xI > (594-25) && xI<648 && yI>(432-25) && yI < 540)
		   {
			yI -= 10;
		   }
		   else if(xI > (648-25) && xI<702 && yI>(594-25) && yI < 864)
		   {
			yI -= 10;
		   }
		   else if(xI > (702-25) && xI<864 && yI>(702-25) && yI < 756)
		   {
			yI -= 10;
		   }
		   
		   else if(xI > (756-25) && xI<810 && yI>(270-25) && yI < 486)
		   {
			yI -= 10;
		   }
		   else if(xI > (810-25) && xI<1080 && yI>(432-25) && yI < 486)
		   {
			yI -= 10;
		   }
		   /*else if(xI > (864-25) && xI<918 && yI>(324-25) && yI < 378)
		   {
			yI -= 10;
		   }
		   
		   else if(xI > (162-25) && xI<216 && yI>(864-25) && yI < 918)
		   {
			yI -= 10;
		   }
		   else if(xI > (216-25) && xI<270 && yI>(324-25) && yI < 378)
		   {
			yI -= 10;
		   }
		   else if(xI > (540-25) && xI<594 && yI>(972-25) && yI < 1026)
		   {
			yI -= 10;
		   }
		   else if(xI > (810-25) && xI<864 && yI>(648-25) && yI < 702)
		   {
			yI -= 10;
		   }
		   
		   else if(xI > (324-25) && xI<378 && yI>(810-25) && yI < 864)
		   {
			yI -= 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(432-25) && yI < 486)
		   {
			yI -= 10;
		   } */
		 
           		
		 
	}

	else if (key == GLUT_KEY_DOWN) {                                                      //xI = 13 and yI = 1033 
	   
	      
			yI -= 10;
			
              if(yI == 13 && (xI > 13 || xI < 1073))
             {          yI+=10;  }
             
		     else if(xI>(108-25) && xI<270 && yI >(918-25) && yI <972){
		      yI += 10;
		    }
		     else if(xI>(486-25) && xI<1080 && yI >(918-25) && yI <972){
		      yI += 10;
		    }
		     else if(xI > (108-25) && xI< 216 && yI>(756-25) && yI < 810)
		    {
			yI += 10;
		     }
		     else if(xI > (162-25) && xI< 216 && yI>(702-25) && yI < 756)
		    {
			yI += 10;
		     }
		     else if(xI < (0) && xI>1080 && yI>(1080) && yI < 0)
		     {
			yI += 10;
		     }
		     else if(xI > (270-25) && xI< 432 && yI>(756-25) && yI < 810)
		    {
			yI += 10;
		    }
		    else if(xI > (378-25) && xI<432 && yI>(810-25) && yI < 918)
		    {
			yI += 10;
		    }
		    else if(xI > (486-25) && xI<540 && yI>(702-25) && yI < 756)
		   {
			yI += 10;
		   }
		    else if(xI > (108-25) && xI<216 && yI>(270-25) && yI < 432)
		   {
			yI += 10;
		   }
		   else if(xI > (270-25) && xI<324 && yI>(216-25) && yI < 540)
		   {
			yI += 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(0-25) && yI < 270)
		   {
			yI += 10;
		   }
		   else if(xI > (972-25) && xI<1026 && yI>(594-25) && yI < 864)
		   {
			yI += 10;
		   }
		   else if(xI > (918-25) && xI<1026 && yI>(54-25) && yI < 108)
		   {
			yI += 10;
		   }
		   else if(xI > (378-25) && xI<648 && yI>(378-25) && yI < 432)
		   {
			yI += 10;
		   }
		   else if(xI > (594-25) && xI<648 && yI>(432-25) && yI < 540)
		   {
			yI += 10;
		   }
		   else if(xI > (648-25) && xI<702 && yI>(594-25) && yI < 864)
		   {
			yI += 10;
		   }
		   else if(xI > (702-25) && xI<864 && yI>(702-25) && yI < 756)
		   {
			yI += 10;
		   }
		   
		   else if(xI > (756-25) && xI<810 && yI>(270-25) && yI < 486)
		   {
			yI += 10;
		   }
		   else if(xI > (810-25) && xI<1080 && yI>(432-25) && yI < 486)
		   {
			yI += 10;
		   }
		  /* else if(xI > (864-25) && xI<918 && yI>(324-25) && yI < 378)
		   {
			yI += 10;
		   }
		   
		   else if(xI > (162-25) && xI<216 && yI>(864-25) && yI < 918)
		   {
			yI += 10;
		   }
		   else if(xI > (216-25) && xI<270 && yI>(324-25) && yI < 378)
		   {
			yI += 10;
		   }
		   
		   else if(xI > (540-25) && xI<594 && yI>(972-25) && yI < 1026)
		   {
			yI += 10;
		   }
		   else if(xI > (810-25) && xI<864 && yI>(648-25) && yI < 702)
		   {
			yI += 10;
		   }
		   
		   else if(xI > (324-25) && xI<378 && yI>(810-25) && yI < 864)
		   {
			yI += 10;
		   }
		   else if(xI > (486-25) && xI<540 && yI>(432-25) && yI < 486)
		   {
			yI += 10;
		   }*/
		
	    	
	}
	
	//2nd block
	
	
         /* else if(key== GLUT_KEY_LEFT ) 
	{      xI -= 10;
		
		if(xI > (486-25) && xI< 1080 && yI>(918-25) && yI < 972)
		{
			xI += 10;
		}

	} 
	else if (key== GLUT_KEY_RIGHT) 
	{       xI += 10;
	
		if(xI>(486-25) && xI<1080 && yI > (918-25)&& yI <972){
		xI -= 10;
		}
	} 
	else if (key
		
			== GLUT_KEY_UP) {
		yI += 10;
		if(xI>(486-25) && xI<1080 && yI >(918-25) && yI <972){
		yI -= 10;
		}
	}

	else if (key
			== GLUT_KEY_DOWN) {
			yI -= 10;
		if(xI>(486-25) && xI<1080 && yI >(918-25) && yI <972){
		yI += 10;
		}
		
		
		
		
	}*/
	
	
	
	
	
	

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	
	if (key== 'p' || key=='P' || key == 'Q' || key == 'q' || key == 'w' || key == 'W' || key == 'e' || key == 'E' || key == 't' || key == 'T' || key == 'u' || key == 'U' || key == 'I' || key == 'i' || key == 'o' || key == 'O'  || key == 'a' || key == 'A' || key == 'S' || key == 's' || key == 'D' || key == 'd' || key == 'f' || key == 'F' || key == 'g' || key == 'G' || key == 'h' || key == 'H' || key == 'j' || key == 'J' || key == 'k' || key == 'K' || key == 'l' || key == 'L' ||  key == 'Z' || key == 'z' || key == 'x' || key == 'X' || key == 'c' || key == 'C'|| key == 'v' || key == 'V' || key == 'b' || key == 'B' || key == 'N' || key == 'n' || key == 'M' || key == 'm' || key == 'Y' || key == 'y' || key == 'R' || key == 'r' || key == 32){
		menu=0;
		game=1;
	
	}
	
	
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) 
{

	// implement your functionality here
	moveCar();
	moveCar2();
	moveCar3();
	

	


	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
	
		
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */

int main(int argc, char*argv[]) {
         cout << "RUSH HOUR BY KISSA ZAHRA I210572" << endl;
         cout << endl;
         //cout << "Enter your name: ";
         //cin >> name;
         cout << "Select the color of the car: " << endl;
         cout << "Press 1 for Yellow." << endl;
         cout << "Press 2 for Red." << endl;
         cin >> color_of_car;
         switch(color_of_car)
         {                                                              //user will select color of the car
             case 1:  color_of_car = 1;
             break;
             case 2:  color_of_car = 2;
             break;
         }
         
	int width = 1080, height = 1080; // i have set my window size to be 800 x 600
  
                
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by Kissa Zahra i210572"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...
	 

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
