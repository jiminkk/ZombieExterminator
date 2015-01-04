//
//  History.h
//  Zombie Exterminator
//
//  Created by Jasmine on 1/8/14.
//  Copyright (c) 2014 Jasmine. All rights reserved.
//

#ifndef HISTORY_H
#define HISTORY_H

#include "globals.h"

class Arena;

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
private:
    int m_rows;
    int m_cols;
    Arena* h_arena;
    int zombie_array[MAXZOMBIES][MAXZOMBIES];
    int zombie;
};

#endif // HISTORY_H
