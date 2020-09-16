#include<GL/glut.h>


GLfloat t,u=1;

void init()
{
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-10,100,-10,100,20,-20);
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,0.7,0.7);



 glLineWidth(5);
 glColor3f(t,u,7.0);
 glBegin(GL_LINES);
