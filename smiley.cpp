#include<GL/glut.h>
#include <cmath>

void init()
{
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-10,10,-10,10,20,-20);
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  //glPointSize(2);



     glBegin(GL_LINES);
     glColor3f(1.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         float theta2= (i-0.5)*3.142/180;
         glVertex2f(8*cos(theta1),8*sin(theta1));
         glVertex2f(8*cos(theta2),8*sin(theta2));
     }
     glEnd();



