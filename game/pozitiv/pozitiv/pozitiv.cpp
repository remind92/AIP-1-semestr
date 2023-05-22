#include <glut.h>
#include "fonk.h"
#include "1.h"
#include "2.h"
#include "3.h"
void renderScene(void);
void process_keys(unsigned char key, int x, int y);
void update(int value);

unsigned char sel_key;

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Schuut");
	glutDisplayFunc(renderScene);
	glutKeyboardFunc(process_keys);
	glutTimerFunc(25, update, 0);
	glClearColor(0.2, 0.4, 0.5, 0);
	glutMainLoop();
	return 0;
}


void renderScene(void) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна быть первой в renderScene
	draw_fonk();
	if (sel_key == '1')
		gorschock(gorsh);
	if (sel_key == '2')
		knaz();
	shut();
	glutSwapBuffers(); // эта функция должна быть последний в renderScene
}

void process_keys(unsigned char key,int x,int y)
{
	if (key == '1')
	{
		sel_key = '1';
	}
	if (key == '2')
	{
		sel_key = '2';
	}
	if (key == '3')
	{
		sel_key = '3';
	}
	if (key == 'd')
	{
		gorsh.x += 0.1;
	}
	if (key == 'a')
	{
		gorsh.x -= 0.1;
	}
	if (key == 'w')
	{
		gorsh.y += 0.1;
	}
	if (key == 's')
	{
		gorsh.y -= 0.1;
	}
	glutPostRedisplay();
}

void update(int value)
{
	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}