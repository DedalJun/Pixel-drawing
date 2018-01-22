// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <GL\glut.h>
#include <stdio.h>

float S_C1 = 0, S_C2 = 0, S_C3 = 0, S_B1 = 0, S_B2 = 0, S_B3 = 0, S_A1 = 0, S_A2 = 0, S_A3 = 0, x1, x2, y1, y2;

bool check(double ax1, double ay1, double ax2, double ay2, double bx1, double by1, double bx2, double by2)
{	
    double v1=(bx2-bx1)*(ay1-by1)-(by2-by1)*(ax1-bx1);
    double v2=(bx2-bx1)*(ay2-by1)-(by2-by1)*(ax2-bx1);
    double v3=(ax2-ax1)*(by1-ay1)-(ay2-ay1)*(bx1-ax1);
    double v4=(ax2-ax1)*(by2-ay1)-(ay2-ay1)*(bx2-ax1);
    return ((v1*v2<=0) && (v3*v4<=0));
}

void startCheck(unsigned char key, int x, int y)
{
	switch (key)
	{
	 case 's':
		if (check(x1, y1, x2, y2, 2.96, 0, 2.96, 2.90) == true) 
		{
			S_C1 = 1;
			S_C2 = 1;
			glutPostRedisplay();
		}
		
		if (check(x1, y1, x2, y2, 6.02, 0, 6.02, 2.92) == true)
		{
			S_C2 = 1;
			S_C3 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 2.92, 3.08, 2.92, 5.92) == true)
		{
			S_B1 = 1;
			S_B2 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 6.08, 3.08, 6.08, 5.92) == true)
		{
			S_B2 = 1;
			S_B3 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 2.96, 6.08, 2.96, 9) == true)
		{
			S_A1 = 1;
			S_A2 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 5.92, 6.08, 5.92, 9) == true)
		{
			S_A2 = 1;
			S_A3 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 0, 2.96, 2.92, 2.96) == true)
		{
			S_B1 = 1;
			S_C1 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 3.20, 2.90, 5.90, 2.90) == true)
		{
			S_B2 = 1;
			S_C2 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 6.08, 3.10, 9, 3.10) == true)
		{
			S_B3 = 1;
			S_C3 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 0, 5.90, 2.90, 5.90) == true)
		{
			S_A1 = 1;
			S_B1 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 3.02, 6.02, 5.96, 6.02) == true)
		{
			S_A2 = 1;
			S_B2 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 6.10, 6.02, 9, 6.02) == true)
		{
			S_A3 = 1;
			S_B3 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 0, 0, 2.95, 2.95) == true || check(x1, y1, x2, y2, 2.95, 0, 0, 2.95) == true)
		{
			S_C1 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 3.05, 0, 5.95, 2.95) == true || check(x1, y1, x2, y2, 5.95, 0, 3.05, 2.95) == true)
		{
			S_C2 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 6.05, 0, 9, 2.95) == true || check(x1, y1, x2, y2, 9, 0, 6.05, 2.95) == true)
		{
			S_C3 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 0, 3.05, 2.95, 5.95) == true || check(x1, y1, x2, y2, 2.95, 3.05, 0, 5.95) == true)
		{
			S_B1 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 3.05, 3.05, 5.95, 5.95) == true || check(x1, y1, x2, y2, 5.95, 3.05, 3.05, 5.95) == true)
		{
			S_B2 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 6.05, 3.05, 9, 5.95) == true || check(x1, y1, x2, y2, 9, 3.05, 6.05, 5.95) == true)
		{
			S_B3 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 0, 6.05, 2.95, 9) == true || check(x1, y1, x2, y2, 2.95, 6.05, 0, 9) == true)
		{
			S_A1 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 3.05, 6.05, 5.95, 9) == true || check(x1, y1, x2, y2, 5.95, 6.05, 3.05, 9) == true)
		{
			S_A2 = 1;
			glutPostRedisplay();
		}

		if (check(x1, y1, x2, y2, 6.05, 6.05, 9, 9) == true || check(x1, y1, x2, y2, 9, 6.05, 6.05, 9) == true)
		{
			S_A3 = 1;
			glutPostRedisplay();
		}
	}
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(1);
	glBegin(GL_QUADS);
	
	 // Sektor C1
	 glColor3f(0.3, S_C1, 0.3);
	 glVertex2d(0, 0);
	 glVertex2d(2.95, 0);
	 glVertex2d(2.95, 2.95);
	 glVertex2d(0, 2.95);

	 // Sektor C2
	 glColor3f(0.3, S_C2, 0.3);
	 glVertex2d(3.05, 0);
	 glVertex2d(5.95, 0);
	 glVertex2d(5.95, 2.95);
	 glVertex2d(3.05, 2.95);

	 // Sektor C3
	 glColor3f(0.3, S_C3, 0.3);
	 glVertex2d(6.05, 0);
	 glVertex2d(9, 0);
	 glVertex2d(9, 2.95);
	 glVertex2d(6.05, 2.95);

	 //Sektor B1
	 glColor3f(0.3, S_B1, 0.3);
	 glVertex2d(0, 3.05);
	 glVertex2d(2.95, 3.05);
	 glVertex2d(2.95, 5.95);
	 glVertex2d(0, 5.95);

	 //Sektor B2
	 glColor3f(0.3, S_B2, 0.3);
	 glVertex2d(3.05, 3.05);
	 glVertex2d(5.95, 3.05);
	 glVertex2d(5.95, 5.95);
	 glVertex2d(3.05, 5.95);

	 //Sektor B3
	 glColor3f(0.3, S_B3, 0.3);
	 glVertex2d(6.05, 3.05);
	 glVertex2d(9, 3.05);
	 glVertex2d(9, 5.95);
	 glVertex2d(6.05, 5.95);

	 //Sektor A1
	 glColor3f(0.3, S_A1, 0.3);
	 glVertex2d(0, 6.05);
	 glVertex2d(2.95, 6.05);
	 glVertex2d(2.95, 9);
	 glVertex2d(0, 9);

	 //Sektor A2
	 glColor3f(0.3, S_A2, 0.3);
	 glVertex2d(3.05, 6.05);
	 glVertex2d(5.95, 6.05);
	 glVertex2d(5.95, 9);
	 glVertex2d(3.05, 9);

	 //Sektor A3
	 glColor3f(0.3, S_A3, 0.3);
	 glVertex2d(6.05, 6.05);
	 glVertex2d(9, 6.05);
	 glVertex2d(9, 9);
	 glVertex2d(6.05, 9);
  glEnd();
  glFlush();

  glLineWidth(2);
  glBegin(GL_LINES);
	glColor3f(0, 0, 1);
	glVertex2d(x1, y1);
    glVertex2d(x2, y2);
  glEnd();
  glFlush();
}
int main(int argc, char **argv)
{
	printf("Vedit koordynaty pochatkovoi tochku linii v mezhah vid 0 do 9 (X,Y)");
	scanf_s("%f%f",&x1,&y1);
	printf("Vedit koordynaty kincevoi tochku linii v mezhah vid 0 do 9 (X,Y)");
	scanf_s("%f%f",&x2,&y2);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Some else");
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 9, 0, 9, -1, 1);

	glutKeyboardFunc(startCheck);
	glutDisplayFunc(display);
	glutMainLoop();
}

