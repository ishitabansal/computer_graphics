#include<GL/glut.h>
#include <cmath>

void init()
{
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-100,100,-100,100,20,-20);
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  //glPointSize(2);



     glBegin(GL_LINES);
     glColor3f(1.0,1.0,0.0);


     glVertex2f(-90,-90);
     glVertex2f(90,-90);

     glVertex2f(-90,-90);
     glVertex2f(-90,90);
     glEnd();


     glBegin(GL_LINES);
     glColor3f(0.0,1.0,0.9);
    for(int i=-70;i<-49; i=i+2)
     {
         glVertex2f(i,70);
         glVertex2f(i,-90);
     }

     for(int i=70;i>-90;i=i-2)
     {
         glVertex2f(-70,i);
         glVertex2f(-50,i);
     }
     glEnd();


     glBegin(GL_LINES);
     glColor3f(0.0,0.0,1.0);

     for(int i=-40;i<-19; i=i+2)
     {
         glVertex2f(i,10);
         glVertex2f(i,-90);
     }

     for(int i=10;i>-90;i=i-2)
     {
         glVertex2f(-40,i);
         glVertex2f(-20,i);
     }
     glEnd();

