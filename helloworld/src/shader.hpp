#ifndef SHADER_H
#define SHADER_H
#include <glad/glad.h> // include glad to get all the required OpenGL headers

#include <string>

class Shader {
public:
	unsigned int ID;
	Shader(const char* vertexPath, const char* fragmentPath);
	void use();
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;
};

#endif
