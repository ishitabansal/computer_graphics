#include <GL/gl.h>
#include <GL/glut.h>
 

void display() 
{ 
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    	glColor3f( 1, 1, 0 );
    	glVertex2f( -0.8, -0.8 );
	glVertex2f( 0.8, -0.8 );
    	glVertex2f( 0, 0.9 );
    glEnd();
    glFlush();
}

void mouse(int button,int state,int x,int y)
{
if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
{
	glBegin(GL_TRIANGLES);
    	glColor3f( 1, 0, 1 );
    	glVertex2f( -0.8, -0.8 );
	glVertex2f( 0.8, -0.8 );
    	glVertex2f( 0, 0.9 );
    glEnd();
    glFlush();
}
}
