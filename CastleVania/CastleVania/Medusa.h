#ifndef _MEDUSA_H_
#define _MEDUSA_H_

#include "DynamicObject.h"
#include "CEnum.h"

class Medusa :public DynamicObject
{
protected:
	float _alpha;
	float _posY0;
public:
	Medusa(void);
	Medusa(float _x, float _y);
	void MoveSinPath(int deltaTime);
	void Update(int deltaTime);
	void Draw(CCamera*);
	void Collision(list<GameObject*> obj, int dt);
	~Medusa(void);
};

#endif