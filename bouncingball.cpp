#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
 
#define WIDTH 640
#define HEIGHT 480
 
 
 
void reshape(int width, int height){
glViewport(0,0,width,height);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-WIDTH/2,WIDTH/2-1,-HEIGHT/2,HEIGHT/2-1,-1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
 
void init(void){
glClearColor(1.0,0.0,1.0,1.0);
glPointSize(2.0);
}
 
void Timer(int ex)
{
 
 
glutPostRedisplay();
glutTimerFunc(30,Timer,0);
}
 
