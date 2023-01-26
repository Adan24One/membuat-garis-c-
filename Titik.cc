#include <iostream>
#include <GL/glut.h>
#include <stdio.h>
void titik()
int main (int iArgc, char** cppArgv)
{
                glutInit(&argc,argv);
                glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
                glutInitWindowSize(600,800);
                glutInitWindowPosition(100,100);
                glutCreateWindow("Percobaan 1");
                glClearColor(0.0,0.0,0.0,0.0); 
                glMatrixMode(GL_PROJECTION);
                glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
                glutDisplayFunc(titik);
                glutMainLoop();
}
void garis()
{
                glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
                glPointSize(5.5);//ukuran titik piksel
                glBegin(GL_POINTS);//perintah untuk grafik primitif
                glColor3f(1.0,1.0,1.0);//warna latar antarmuka/3 komponen warna RGB
                glVertex2f(0.25,0.25);
                glColor3f(0.1,1.0,1.0);
                glVertex2f(0.5,0.5);
                //glPointSize(2.0);
                glEnd();
                glFlush();
}