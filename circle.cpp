#include<math.h>
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
 	glBegin(GL_POINTS);
 	for(int i=0;i<1000;++i)
  	{
 	 glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
 	 }
	 glEnd();
	glFlush();
}
int main(int argc,char **argv,char **arg)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(500,500);
	glutInitWindowSize(700,700);
	glutCreateWindow("ishita");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}
