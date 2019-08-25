
#include <iostream>

#define GLEW_STATIC
#include <GL/glew.h>

#include <GLFW/glfw3.h>

const GLint WIDTH = 800, HEIGHT = 600;

int main() {

	if(glfwInit() == false) {
		fprintf(stderr, "GLFW Failed To Initialise");
		return -1;
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window;
	window = glfwCreateWindow(600, 600, "RigidBodySimulator", NULL, NULL);

	if(!window){
		fprintf(stderr, "Window Failed To Create");
		glfwTerminate();
		return - 1;
	}

	glfwMakeContextCurrent(window);

}