#include <iostream>
#include "library.h"
#include <GLFW/glfw3.h>
#include <Config.h>

int main(int argc, char* argv[]) )
{
    std::cout << argv[0] << " Version " << MYPROJECT_VERSION_MAJOR << "." << MYPROJECT_VERSION_MINOR << '\n';

    GLFWwindow *window;

    if (!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(300, 300, "MyProject", NULL, NULL);

    if (!window)
    {
        fprintf(stderr, "Failed to open GLFW window\n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    // Main Loop
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}