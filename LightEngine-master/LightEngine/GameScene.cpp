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

    // D'abord, dessiner les lignes
    Debug::DrawLine(0, zoneHeight, screenWidth, zoneHeight, sf::Color::Red);      // Ligne 1
    Debug::DrawLine(0, 2 * zoneHeight, screenWidth, 2 * zoneHeight, sf::Color::Red); // Ligne 2

    // Zone gauche (bordure)
    Debug::DrawFilledRectangle(0, 0, 150, screenHeight, darkBrown);

    // Zone centrale
    Debug::DrawFilledRectangle(150, 0, 980, screenHeight, lightBrown);

    // Zone droite (bordure)
    Debug::DrawFilledRectangle(1130, 0, 150, screenHeight, darkBrown);
}

