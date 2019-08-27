#include <iostream>

#include <GL/gl3w.h>
#include <GLFW/glfw3.h>

const GLint WIDTH = 800, HEIGHT = 600;

int main() {
	// Initialize glfw
	if(glfwInit() == false) {
		fprintf(stderr, "GLFW Failed To Initialise\n");
		return -1;
	}

	// Create window
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "RigidBodySimulator", NULL, NULL);
	if(!window){
		fprintf(stderr, "Window Failed To Create\n");
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	// Initialize gl3w (modern opengl)
	if (!gl3wInit()) {
		fprintf(stderr, "GL3W Failed To Initialise\n");
		return -1;
	}

	// Simple application loop
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
	}

	// Halt
	glfwDestroyWindow(window);
	glfwTerminate();
}