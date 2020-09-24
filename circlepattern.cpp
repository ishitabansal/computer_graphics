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
 {
             float theta1= (i+0.5)*3.142/180;
             float theta2= (i-0.5)*3.142/180;
             glVertex2f(90*cos(theta1),90*sin(theta1));
             glVertex2f(90*cos(theta2),90*sin(theta2));
        }
        glEnd();

        float rad, x ,y;



        glBegin(GL_LINES);
        glColor3f(0.0,0.0,1.0);
        rad = 90;
        x=0.0f;y=0.0f;
        while(x<=rad)
        {
            y= sqrt((rad*rad - x*x));
            glVertex2f(x,y);
            glVertex2f(x,-y);
            glVertex2f(-x,y);
            glVertex2f(-x,-y);
            glVertex2f(y,x);
            glVertex2f(-y,x);
            glVertex2f(y,-x);
            glVertex2f(-y,-x);
            x=x+2;
        }
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(0.0,1.0,1.0);
        for(int i=0;i<360;i++)
 {
            float theta1= (i+0.5)*3.142/180;
            glVertex2f(80*cos(theta1),80*sin(theta1));
        }
        glEnd();




        glBegin(GL_LINES);
        glColor3f(0.0,0.0,1.0);
        rad = 80;
        x=0.0f;y=0.0f;
        while(x<=rad)
        {
            y= sqrt((rad*rad - x*x));
            glVertex2f(x,y);
            glVertex2f(x,-y);
            glVertex2f(-x,y);
            glVertex2f(-x,-y);
            /*
            glVertex2f(y,x);
            glVertex2f(-y,x);
            glVertex2f(y,-x);
            glVertex2f(-y,-x);
            */
            x=x+2;
        }
        glEnd();

        glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        for(int i=0;i<360;i++)
{
             float theta1= (i+0.5)*3.142/180;
             float theta2= (i-0.5)*3.142/180;
             glVertex2f(80*cos(theta1),80*sin(theta1));
             glVertex2f(80*cos(theta2),80*sin(theta2));
        }
        glEnd();




        glBegin(GL_POLYGON);
        glColor3f(1.0,1.0,0.0);
        for(int i=0;i<360;i++)
        {
            float theta1= (i+0.5)*3.142/180;
            glVertex2f(70*cos(theta1),70*sin(theta1));
        }
        glEnd();


        glBegin(GL_LINES);
        glColor3f(0.6,0.1,0.2);
        rad = 70;
        x=0.0f;y=0.0f;
        while(x<=rad)
        {
            y= sqrt((rad*rad - x*x));
            glVertex2f(x,y);
            glVertex2f(x,-y);
            glVertex2f(-x,y);
            glVertex2f(-x,-y);
            glVertex2f(y,x);
            glVertex2f(-y,x);
            glVertex2f(y,-x);
            glVertex2f(-y,-x);
            x=x+2;
        }
