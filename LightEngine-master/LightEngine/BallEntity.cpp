#include "BallEntity.h"

#include <iostream>

void BallEntity::OnCollision(Entity* other)
{
	std::cout << "DummyEntity::OnCollision" << std::endl;
}