#include <iostream>
#include <GL/glut.h>
#include <stdio.h>
void segitiga();
main(int argc, char** argv)
{
                glutInit(&argc,argv);
                glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
                glutInitWindowSize(1360,768);
                glutInitWindowPosition(100,100);
                glutCreateWindow("Percobaan 2");

                glClearColor(0.0,0.0,0.0,0.0); 
                glMatrixMode(GL_PROJECTION);
                glLoadIdentity();
                glOrtho(0.0, 1360.0, 0.0, 768.0, -1.0, 1.0);
                // glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
                glutDisplayFunc(segitiga);

                glutMainLoop();
}
void titik()
{
                glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
                glPointSize(5.5);//ukuran titik piksel
                glBegin(GL_POINTS);//perintah untuk grafik primitif
                glColor3f(1.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
                glVertex2f(0.25,0.25);
                glColor3f(0.1,1.0,1.0);
                glVertex2f(0.5,0.5);
                //glPointSize(2.0);
                glEnd();
                glFlush();
}

void garis()
{
                glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
                glPointSize(5.5);//ukuran titik piksel
                glBegin(GL_POINTS);//perintah untuk grafik primitif
                glColor3f(1.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
                glVertex2f(0.25,0.25);
                glColor3f(0.1,1.0,1.0);
                glVertex2f(0.5,0.5);
                //glPointSize(2.0);
                glEnd();
                glFlush();
}

void segitiga() {
    glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
/*
    glBegin(GL_TRIANGLES);//perintah untuk grafik primitif
    glColor3f(1.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
    glVertex2f(100,100);
    glVertex2f(250,300);
    glVertex2f(400,100);
    glEnd();

    glBegin(GL_TRIANGLES);//perintah untuk grafik primitif
    glColor3f(1.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
    glVertex2f(100+500,100);
    glVertex2f(250+500,300);
    glVertex2f(400+500,100);
    glEnd();
    
    glBegin(GL_TRIANGLES);//perintah untuk grafik primitif
    glColor3f(1.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
    glVertex2f(100+500,100+350);
    glVertex2f(250+500,300+350);
    glVertex2f(400+500,100+350);
    glEnd();

    glBegin(GL_TRIANGLES);//perintah untuk grafik primitif
    glColor3f(1.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
    glVertex2f(100,100+350);
    glVertex2f(250,300+350);
    glVertex2f(400,100+350);
    glEnd();
*/
    glBegin(GL_TRIANGLES);//perintah untuk grafik primitif
    glColor3f(1.0,0.0,1.0);//warna latar antarmuka/3 komponen warna RGB
    glVertex2f(100,100);
    glVertex2f(450,700);
    glVertex2f(800,100);
    glEnd();
    glFlush();    
}