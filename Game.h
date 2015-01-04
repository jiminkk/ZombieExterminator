//
//  Game.h
//  Zombie Exterminator
//
//  Created by Jasmine on 1/8/14.
//  Copyright (c) 2014 Jasmine. All rights reserved.
//

#ifndef GAME_H
#define GAME_H

#include <string>

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nZombies);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
    
    // Helper functions
    std::string takePlayerTurn();
};

#endif  // GAME_H

