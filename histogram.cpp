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
