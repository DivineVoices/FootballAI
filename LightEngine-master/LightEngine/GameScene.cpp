#include "GameScene.h"

#include "DummyEntity.h"

#include "Debug.h"

void GameScene::Initialize()
{

}

void GameScene::HandleInput(const sf::Event& event)
{

}

void GameScene::TrySetSelectedEntity(DummyEntity* pEntity, int x, int y)
{

}

void GameScene::Update()
{
    int screenWidth = GetWindowWidth();
    int screenHeight = GetWindowHeight();
    int zoneHeight = screenHeight / 3;

    sf::Color darkBrown(101, 67, 33);
    sf::Color lightBrown(181, 151, 129);

    Debug::DrawLine(0, zoneHeight, screenWidth, zoneHeight, sf::Color::Red);      // Ligne 1
    Debug::DrawLine(0, 2 * zoneHeight, screenWidth, 2 * zoneHeight, sf::Color::Red); // Ligne 2

    int goalSize = screenWidth * 0.1;  // 10% de la largeur de l'écran

    int centralZoneWidth = screenWidth * 0.8;  // 80% de la largeur de l'écran

    // Zone gauche (bordure)
    Debug::DrawFilledRectangle(0, 0, goalSize, screenHeight, darkBrown);

    // Zone centrale
    Debug::DrawFilledRectangle(goalSize, 0, centralZoneWidth, screenHeight, lightBrown);

    // Zone droite (bordure)
    Debug::DrawFilledRectangle(goalSize + centralZoneWidth, 0, goalSize, screenHeight, darkBrown);
}

