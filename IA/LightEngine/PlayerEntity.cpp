#include "PlayerEntity.h"

#include <iostream>

void PlayerEntity::OnCollision(Entity* other)
{
	std::cout << "DummyEntity::OnCollision" << std::endl;
}