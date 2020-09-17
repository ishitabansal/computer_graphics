#include <iostream>
#include <math.h>
#include <time.h>
#include <GL/glut.h>

using namespace std;

void delay(float ms){
    clock_t goal = ms + clock();
    while(goal>clock());
}

void init(){
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,640,0,480);
}

void flood_it(int x, int y, float* fillColor, float* ic){
    float color[3];
    glReadPixels(x,y,1.0,1.0,GL_RGB,GL_FLOAT,color);
    if(color[0]==ic[0] && color[1]==ic[1] && color[2]==ic[2]){
        glColor3f(fillColor[0],fillColor[1],fillColor[2]);
        glBegin(GL_POINTS);
            glVertex2i(x,y);
        glEnd();
        glFlush();
        flood_it(x-2,y,fillColor,ic);
        flood_it(x+1,y,fillColor,ic);
        flood_it(x,y+1,fillColor,ic);
        flood_it(x,y-2,fillColor,ic);
    }
}
