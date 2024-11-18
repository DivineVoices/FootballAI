#pragma once
#include "Entity.h"

class PlayerEntity : public Entity
{
public:
	PlayerEntity(float radius, const sf::Color& color)
		: Entity(radius, color)
	{
	}

	void OnCollision(Entity* other) override;
};

