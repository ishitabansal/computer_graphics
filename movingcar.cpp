#include<GL/glut.h>
#include<math.h>
#include<unistd.h>
#define pi 3.142857

void init()
{         glClearColor(1.1,0.0,0.1,1.1); //Background Color
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	gluOrtho2D(-100, 100, -100, 100);
}

void car(int z) //z is the no of time the function is called
{       
	float x,y;
	glBegin(GL_POINTS);
		for(float i=0;i<(2*pi);i=i+0.001)
		{
			x = 5 * cos(i);
			y = 5 * sin(i);
			glVertex2f(x-50+25*(z-1),y);
		}
		for(float i=0;i<(2*pi);i=i+0.001)
		{
			x = 5 * cos(i);
			y = 5 * sin(i);
			glVertex2f(x-25+25*(z-1),y);
		}
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-50+25*(z-1),5);
		glVertex2f(-50+25*(z-1),10);
		glVertex2f(-50+25*(z-1),5);
		glVertex2f(-25+25*(z-1),5);
		glVertex2f(-25+25*(z-1),5);
		glVertex2f(-25+25*(z-1),10);
		glVertex2f(-50+25*(z-1),10);
		glVertex2f(-25+25*(z-1),10);
	glEnd();
}

void display()
{       glColor3f(0.0,0.0,1.0); //car color
	glClear(GL_COLOR_BUFFER_BIT);

	//first car
	car(1);
	glFlush();
	
	sleep(2);
	
	//second car
	glClear(GL_COLOR_BUFFER_BIT);
	car(2);
	glFlush();
	
	sleep(2);
	
	//third car
	glClear(GL_COLOR_BUFFER_BIT);
	car(3);
	glFlush();
	
	sleep(2);
	
	//fourth car
	glClear(GL_COLOR_BUFFER_BIT);
	car(4);
	glFlush();
}
