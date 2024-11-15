#pragma once

#include "Scene.h"

class BallEntity;

class PlayerEntity;

class SampleScene : public Scene
{
	PlayerEntity* pEntity1;
	PlayerEntity* pEntity2;
	BallEntity* pEntity3;

	PlayerEntity* pEntitySelected;

private:
	void TrySetSelectedEntity(Entity* pEntity, int x, int y);

public:
	void OnInitialize() override;
	void OnEvent(const sf::Event& event) override;
	void OnUpdate() override;
};


