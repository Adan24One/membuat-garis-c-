 #include <iostream>
#include <GL/glut.h>
#include <stdio.h>
void titik();
main(int argc, char**argv)
{
                glutInit(&argc,argv);
                glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
                glutInitWindowSize(800,600);
                glutInitWindowPosition(100,100);
                glutCreateWindow("Percobaan 3");
                glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
                glutDisplayFunc(titik);
                glutMainLoop();
}
void titik()
{
                glClear(GL_COLOR_BUFFER_BIT);
                glBegin(GL_LINE_STRIP);
                glColor3f(1.0,0.0,0.0);
                glVertex2f(0.25,0.25);
                glColor3f(0.1,1.0,0.0);
                glVertex2f(0.75,0.5);
                glVertex2f(0.7,0.8);
                glPointSize(50.0f);
                glEnd();
                glFlush();
}