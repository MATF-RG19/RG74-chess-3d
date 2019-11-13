#include <GL/glut.h>
using namespace std;

int main(int argc, char**argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(500, 500);

	glutCreateWindow("Chess 3D");

	glClearColor(0, 0, 0, 0);

	glutMainLoop();
return 0;

}
