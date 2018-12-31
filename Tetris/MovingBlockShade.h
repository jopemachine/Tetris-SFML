#pragma once

#include "MovingBlock.h"

class MovingBlockShade {

private:


	MovingBlock mMovingBlock;

	sf::Texture mBlockTransparentTexture;

	sf::Sprite mBlockTransparentSprite;

public:

	MovingBlockShade();

	void DrawMovingBlockShade(sf::RenderWindow& window) 
	{
		mMovingBlock.DrawMovingBlock(window);
	}

	void UpdateBlockShade(MovingBlock movingBlock);



};