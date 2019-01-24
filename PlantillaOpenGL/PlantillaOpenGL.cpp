// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

void dibujarTriangulos()
{
/*
	// TRIANGULO
	glBegin(GL_TRIANGLES);
	glColor3f(1, 1, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);

	glColor3f(0, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(1, -1 ,0);
	glVertex3f(1, 1, 0);
	

	// POLIGONO
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 1);
    glVertex3f(0.25, 0.25, 0); 
    glVertex3f(0.25, -0.25, 0); 
    glVertex3f(-0.25,-0.25, 0); 
    glVertex3f(-0.25, 0.25, 0);

	glEnd();
	glFlush();*/
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
	*/

	// DIBUJAR TRIANGULO CONTINIO
	DibujarTrianguloContinuo();
	
	

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
		glClearColor(0, 0, 1, 1);
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