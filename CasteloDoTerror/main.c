
#include <Gl/glut.h>
 
void drawWindow()
{
glClearColor(1.0f, 0.5f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glFlush();
}
int main(int argc, char *argv[])
{
glutCreateWindow("Ol� Mundo OpenGL");
glutDisplayFunc(drawWindow);
 glutMainLoop();
 return 1;
}
