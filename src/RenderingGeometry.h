#ifndef RENDERING_GEO_H_
#define RENDERING_GEO_H_

#include "Application.h"
#include "Camera.h"

class RenderingGeometry : public Application
{
private:
	FlyCamera m_flyCamera;
	unsigned int m_programID;
	unsigned int m_indexCount;
	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;

	float m_waveSpeed;
	float m_heightScale;
	float m_time;
public:
	virtual bool startup();
	virtual void shutdown();
	virtual bool update();
	virtual void draw();

	void generateGrid(unsigned int a_rows, unsigned int a_cols);
};

#endif