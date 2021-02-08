#include "libs.h"

int main()
{
	// 7±îÁö º½. -- glew link
	glfwInit();

	glm::vec3(0.f);

	glewExperimental = GL_TRUE; // ready to use new stuff

	if (glewInit != GLEW_OK)
		std::cout << "omg!!!!!" << "\n";
	else
		std::cout << "success!!!" << "\n";

	system("PAUSE");
	return 0;
}