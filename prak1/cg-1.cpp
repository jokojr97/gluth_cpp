#include <stdlib.h>
#include <glut.h>

void drawQuad ()
{
	glBegin(GL_QUADS);
	glVertex2f(0.,0.);
	glVertex2f(0.,10.);
	glVertex2f(20.,10.);
	glVertex2f(20.,0.);
	glEnd();
	//glFlush();
}
void drawQuad1 ()
{
	glBegin(GL_QUADS);
	glVertex2f(0.,0.);
	glVertex2f(5.,0.);
	glVertex2f(10.,5.);
	glVertex2f(5.,5.);
	glEnd();
	//glFlush();
}

void render(){
	glClear(GL_COLOR_BUFFER_BIT);	
	glColor3f(1.,1.,1.);
	//glTranslatef(50,0,0);
	drawQuad();
	glRotatef(45,0,1,0);
	glColor3f(1.,0.,0.);
	drawQuad1();
	glFlush();
}

void main (int argc, char **argv) 
{
	glutInitWindowPosition(100,100);
	glutInitWindowSize(480,480);
    gluOrtho2D(-320.,320.,-320.,320.);
    glutCreateWindow("Joko Riyadi");
	glutDisplayFunc(render);
    glutMainLoop();
}
