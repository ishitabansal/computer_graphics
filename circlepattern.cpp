#include<GL/glut.h>
#include <cmath>

void init()
{
 glClearColor(1,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-100,100,-100,100,20,-20);
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);




 //glPointSize(2);


    glColor3f(1.0,0.0,0.0);
 /*glBegin(GL_LINES);


     for(int i=0;i<180;i+10)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(8*cos(theta1),8*sin(theta1));
         glVertex2f((8*cos(theta1)),-(8*sin(theta1)));
     }
     glEnd(); */


        glBegin(GL_LINES);
        glColor3f(1.0,1.0,0.0);
        for(int i=0;i<360;i++)
