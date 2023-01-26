#include<GL/glut.h>
#include<GL/glut.h>
#include<iostream>
using namespace std;
void segitiga();
main (int argc, char** argv)
{ 
	glutInit(&argc,argv); 
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 
	glutInitWindowSize(1366,768); 
	glutInitWindowPosition(0,0); 
	glutCreateWindow("Tugas Muhammad Syahdan"); 
	glClearColor(1, 1, 1, 1); 
	glMatrixMode(GL_PROJECTION); 
	glOrtho(0.0, 1360.0, 0.0, 768.0, -1.0, 1.0); 
	glutDisplayFunc(segitiga); 
	glutMainLoop();
}

void segitiga() {
	float tx=500;
	float ty=350-34;
	
	float fs=0.5;
    glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel

    glBegin(GL_TRIANGLES);//perintah untuk grafik primitif
    glColor3ub(210,105,30);//warna latar antarmuka/3 komponen warna RGB
    glVertex2f(150,100);
    glVertex2f(300,350);
    glVertex2f(450,100);
    glVertex2f(0.5,0.5);
    glEnd();
    
   
    
    glBegin(GL_TRIANGLES);//perintah untuk grafik primitif
    glColor3ub(210,105,30);//warna latar antarmuka/3 komponen warna RGB
    glVertex2f(150,350+ty);
    glVertex2f(300,100+ty);
    glVertex2f(450,350+ty);
    glEnd();
    
    glBegin(GL_LINES); 
	glPointSize(2000.0f); 
	
	glColor3ub(0,0,0); 
	glVertex2f(0, 768/2); 
	glVertex2f(1366, 768/2);
	
	
	glEnd(); 
    
    glBegin(GL_LINES); 
	glPointSize(50.0f); 
	
	glColor3ub(0,0,0); 
	glVertex2f(1366/2, 0); 
	glVertex2f(1366/2, 768);
	
	
	glEnd(); 
    
    
    glFlush();    
    
    
}