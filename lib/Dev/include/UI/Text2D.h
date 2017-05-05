#ifndef _TEXT_2D_H_
#define _TEXT_2D_H_

#include <iostream>

#include "CanvasElement.h"

#define ROWS 8
#define COLUMNS 16



//Canvas Element for rendering text to the screen.
class Text2D : public CanvasElement {
private:
	//Text to be drawn.
	std::string m_Text_;

	//The VAO for the text.
	GLuint quadVAO;
	//Its VBO.
	GLuint VBO;

	bool usesID = false;


public:
	Text2D(std::string pShader, std::string pText);

	//Set if the text uses an ID resource from the Resource manager or uses raw text from xml.
	void setUsesID(bool pToggle) {
		usesID = pToggle;
	}
	void Start();

	void Update(float dt);

	void Render();
	void Destroy();
};

#endif