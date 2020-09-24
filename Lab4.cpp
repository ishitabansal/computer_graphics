#include <GL/glut.h>
#include <math.h>
void line_join(float x1 , float y1 , float x2 , float y2){
    
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    
}

void cirlce()
{
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(1*cos(theta),1*sin(theta));
    }
    glEnd();
    glFlush();
}
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    
    glColor3f(0.0,1.0,1.0);
    
    line_join(0.0, 1.0, -0.86, -0.50);
    line_join(0.0, 1.0, 0.86, -0.50);
    line_join(-0.86, -0.50, 0.86, -0.50);
    line_join(0.0, 1.0, 0.0, -0.50);
    line_join(0.0, 0.8, 0.086, 0.849);
    line_join(0.0, 0.6, 0.173, 0.699);
    line_join(0.0, 0.4, 0.2
