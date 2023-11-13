#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

#include "GameObject.h"

using namespace std;

class GameWindow
{
public:
	sf::RenderWindow* oWindow;
    sf::VideoMode oVideoMode;
    sf::Clock oClock;

    
    int screenW;
	int screenH;
    int gameWidth;
    float fDeltaTime;;
    bool fire;

	vector<GameObject*> objectList;
	

    sf::Vector2i localPosition;

	GameWindow();
    
    void Shoot();
    void Display();
    void GameLoop();
};

