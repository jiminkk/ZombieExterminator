//
//  globals.h
//  Zombie Exterminator
//
//  Created by Jasmine on 1/8/14.
//  Copyright (c) 2014 Jasmine. All rights reserved.
//

#ifndef GLOBALS_H
#define GLOBALS_H

///////////////////////////////////////////////////////////////////////////
// Manifest constants
///////////////////////////////////////////////////////////////////////////
class Arena;

const int MAXROWS = 20;              // max number of rows in the arena
const int MAXCOLS = 20;              // max number of columns in the arena
const int MAXZOMBIES = 100;          // max number of zombies allowed
const int INITIAL_ZOMBIE_HEALTH = 2; // initial zombie health
const int POISONED_IDLE_TIME = 1;    // poisoned zombie idles this many
//   turns between moves

const int NORTH = 0;
const int EAST  = 1;
const int SOUTH = 2;
const int WEST  = 3;
const int NUMDIRS = 4;

const int EMPTY      = 0;
const int HAS_BRAIN  = 1;

int randInt(int lowest, int highest);
bool attemptMove(const Arena& a, int dir, int& r, int& c);
bool charToDir(char ch, int& dir);
int computeDanger(const Arena& a, int r, int c);
void clearScreen();


#endif  // GLOBALS_H
