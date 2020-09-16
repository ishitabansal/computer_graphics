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

    glVertex2f(20,20);
    glVertex2f(60,20);
    glVertex2f(60,60);
    glVertex2f(20,60);
    glVertex2f(20,60);
    glVertex2f(20,20);
    glVertex2f(60,20);

    glVertex2f(60,60);
    glVertex2f(60,60);
    glVertex2f(40,80);
    glVertex2f(40,80);
    glVertex2f(20,60);

    
    
    glEnd();


  glFlush();
}


void mouse(int button,int state,int x,int y){

    if(button==GLUT_RIGHT_BUTTON){
        t=1;
        u=0;
    }
    else if(button==GLUT_LEFT_BUTTON){
        t=0;
        u=1;
    }

    else{

    }
    glutPostRedisplay();
}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(800,100);
 glutCreateWindow("ishita bansal");
 init();
 glutDisplayFunc(display);
 glutMouseFunc(mouse);
 glutMainLoop();
}
