#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

GLFWwindow* window;

int main()
{
	glfwInit();
	glfwDefaultWindowHints();

	window = glfwCreateWindow(800, 600, "ide", nullptr, nullptr);
	glfwMakeContextCurrent(window);

	glewInit();

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glfwSwapBuffers(window);
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}