// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include <math.h>

using namespace std;

void dibujarTriangulos()
{

	 //TRIANGULO
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);


	glEnd();

}

void DibujarPuntos(){
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex3f(0.5f, 0.1f, 0);
	glVertex3f(0.55f, 0.1f, 0);


	glEnd();

}

void DibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.4, 0);
	glColor3f(0, 0, 0);
	glVertex3f(0.2, 0.5, 0);
	glColor3f(0, 1, 0);
	glVertex3f(-0.2, 0.5, 0);


	glEnd();
}

void DibujarLineaContinua() {
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, -0.2, 0);
	glVertex3f(0.3, -0.2, 0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0, 0, 0);


	glEnd();
}

void DibujarArbol() {
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.5, 0.1 * sin((double)i * 3.14159 / 180.0) + 0, 0);
	}
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.6, 0.1 * sin((double)i * 3.14159 / 180.0) + -0.1, 0);

	}

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.5, 0.1 * sin((double)i * 3.14159 / 180.0) + -0.1, 0);

	}

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.4, 0.1 * sin((double)i * 3.14159 / 180.0) + -0.1, 0);

	}

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.5, 0.1 * sin((double)i * 3.14159 / 180.0) + -0.2, 0);
	}

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.6, 0.1 * sin((double)i * 3.14159 / 180.0) + -0.3, 0);

	}

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.5, 0.1 * sin((double)i * 3.14159 / 180.0) + -0.3, 0);

	}

	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1 * cos((double)i * 3.14159 / 180.0) + -0.4, 0.1 * sin((double)i * 3.14159 / 180.0) + -0.3, 0);

	}

	


	glEnd();
}

void DibujarTronco() {
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.2, 0);
	glVertex3f(-0.6, -0.6, 0);
	glVertex3f(-0.6, -0.39, 0);
	glVertex3f(-0.4, -0.39, 0);
	glVertex3f(-0.4, -0.6, 0);

	glEnd();
}

void DibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(-0.2, -0.2, 0);
	glVertex3f(0.2, -0.2, 0);
	glColor3f(0, 1, 1);
	glVertex3f(0.2, -0.4, 0);
	glColor3f(0, 0.3, 0.3);
	glVertex3f(-0.2, -0.4, 0);

	

}

void DibujarCasa() {
	{	
		glBegin(GL_QUADS);
		glColor3f(0, 1, 0.4);
		glVertex3f(.1f, -.5f, 0);
		glVertex3f(.5f, -.5f, 0);
		glVertex3f(.5f, -.10f, 0);
		glVertex3f(.1f, -.10f, 0);
		glEnd();
	
		glBegin(GL_QUADS);
		glColor3f(0.329412f, 0.329412f, 0.329412f);
		glVertex3f(.2f, -.5f, 0);
		glVertex3f(.3f, -.5f, 0);
		glVertex3f(.3f, -.30f, 0);
		glVertex3f(.2f, -.30f, 0);
		glEnd();

		
		glBegin(GL_TRIANGLES);
		glColor3d(.7, 1, .5);
		glVertex3d(.05f, -.10f, 0);
		glVertex3d(.55f, -.10f, 0);
		glVertex3d(.30f, .1f, 0);
		glEnd();

		
		glBegin(GL_QUADS);
		glColor3f(0.329412f, 0.329412f, 0.329412f);
		glVertex3f(.35f, -.2f, 0);
		glVertex3d(.35f, -.35f, 0);
		glVertex3d(.45f, -.35f, 0);
		glVertex3d(.45f, -.2f, 0);
		glEnd();

		glBegin(GL_POINTS);
		glColor3d(.23f, .31f, .8f);
		for (int i = 0; i<1000; ++i)
		{
			glVertex3f(cos(1 * 3.14159*i / 1000.0), sin(1 * 3.14159*i / 1000.0), 0);
		}
		glEnd();
		
	}

}


void DibujarPoligonos() {
	glBegin(GL_POLYGON);
	/*glColor3f(1, 1, 1);
	glVertex3f(-0.8, 0.7, 0);
	glVertex3f(-0.5, 0.5, 0);
	glVertex3f(0.5, 0.9, 0);
	glColor3f(0, 1, 0);
	glVertex3f(0.3, 0.2, 0);
	glVertex3f(-0.2, 0.8, 0);*/
	glColor3f(1, 0.8, 0);
	for (int i = 0; i < 360; i++) {
	
		glVertex3f(0.2*cos((double)i*3.14159/180.0)-0.7,
			0.2* sin((double)i*3.14159/180.0)+0.7, 0);
	}
	
	
	glEnd();

}

void DibujarNubes1()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	for (int i = 0; i < 360; i++) {

		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.3,
			0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}

	for (int i = 0; i < 360; i++) {

		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.2,
			0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}

	for (int i = 0; i < 360; i++) {

		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.1,
			0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}


	glEnd();

}

void DibujarNubes2()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	for (int i = 0; i < 360; i++) {

		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - -0.5,
			0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}

	for (int i = 0; i < 360; i++) {

		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - -0.7,
			0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}

	for (int i = 0; i < 360; i++) {

		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - -0.6,
			0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}


	glEnd();

}

void DibujarCesped()
{

	glBegin(GL_QUADS);
	glColor3f(0.5, 0.8, 0.10);
	glVertex3f(-.15f, -.50f, 0);
	glVertex3f(-.15f, -.50f, 0);
	glVertex3f(.60f, -.60, 0);
	glVertex3f(.60f, -.60, 0);

	glEnd();


}

void dibujar() {
	
	glClear(GL_COLOR_BUFFER_BIT);
/*
	// DIBUJAR PUNTOS
	DibujarPuntos();

	// DIBUJAR LINEAS
	DibujarLineas();
	
	// DIBUJAR LINEA CONTINUA
	DibujarLineaContinua();
	
	// DIBUJAR TRIANGULO CONTINIO
	DibujarTrianguloContinuo();
	*/

	// DIBUJAR POLIGONOS
	DibujarPoligonos();
	DibujarNubes1();
	DibujarNubes2();
	DibujarCasa();
	DibujarCesped();
	DibujarArbol();
	DibujarTronco();
	

}

void actualizar() {

}


int main()
{
	GLFWwindow * window;

	//Si no se pudo iniciar glfw
	//entonces inicializamos en la ventana
	if (!glfwInit())
		exit(EXIT_FAILURE);

	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	//Si no podemos iniciar la ventana
	//Entonces terminamos la ejecucion

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos el contexto
	glfwMakeContextCurrent(window);
	// Una vez establecido el contexto activamos funciones modernas.
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	
	if (errorGlew != GLEW_OK) 
	{
     	cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//Ciclo de dibujo (Draw Loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region del dibujo
		glViewport(0, 0, 1024, 768);
		//Establecer el color del borrado
		glClearColor(.3, .3,0.3, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		// Cambiar los buffer
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}