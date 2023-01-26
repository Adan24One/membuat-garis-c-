#include <iostream>
#include <GL/glut.h>
#include <stdio.h>
void garis();
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(600,800);
glutInitWindowPosition(100,100);
glutCreateWindow("Percobaan 3");
glClearColor(0.0,0.0,0.0,0.0); //warna latar belakang/ 4 komponen warna yaitu RGB, dan alpha
glMatrixMode(GL_PROJECTION);
//glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
glutDisplayFunc(garis);
glutMainLoop();
}
void garis()
{
glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
glBegin(GL_LINES);//perintah untuk grafik primitif
glColor3f(1.0,0.0,0.0);
glVertex2f(-0.5,-0.3);
glVertex2f(-0.5,0.5);

glVertex2f(0.5,-0.3);
glVertex2f(0.5,0.5);

glVertex2f(0.5,-0.3);
glVertex2f(-0.5,-0.3);

glVertex2f(-0.5,0.5);
glVertex2f(0.5,0.5);

glColor3f(0.0,0.0,1.0);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,0.7);

glVertex2f(0.7,-0.1);
glVertex2f(0.7,0.7);

glVertex2f(0.7,-0.1);
glVertex2f(-0.3,-0.1);

glVertex2f(-0.3,0.7);
glVertex2f(0.7,0.7);

glColor3f(0.0,1.0,0.0);//warna yang diset terakhir akan menjadi warna garis selanjutnya
glVertex2f(-0.3,0.7);
glVertex2f(-0.5,0.5);

glVertex2f(0.5,0.5);
glVertex2f(0.7,0.7);

glVertex2f(0.5,-0.3);
glVertex2f(0.7,-0.1);

glVertex2f(-0.5,-0.3);
glVertex2f(-0.3,-0.1);
glEnd();
glPointSize(500.0f);
glFlush();
}