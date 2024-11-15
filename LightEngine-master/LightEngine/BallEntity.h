#pragma once
#include "Entity.h"

class BallEntity : public Entity
{
public:
	BallEntity(float radius, const sf::Color& color)
		: Entity(radius, color)
	{
	}

	void OnCollision(Entity* other) override;
};

