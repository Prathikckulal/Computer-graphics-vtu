#include<GL/glut.h>
#include<stdlib.h>
void myInit (void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glColor3f(0.0,1.0,1.0);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2i(0,240);
	glVertex2i(640,240);
	glVertex2i(320,0);
	glVertex2i(320,480);
	glEnd();
	glFlush();
}
int main(int argc,char**argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(800,500);
  glutInitWindowPosition(100,150);
  glutCreateWindow("INSERTION");
  glutDisplayFunc(display);
  myInit();
  glutMainLoop();
}        
	
