//
//  History.cpp
//  Zombie Exterminator
//
//  Created by Jasmine on 1/8/14.
//  Copyright (c) 2014 Jasmine. All rights reserved.
//
#include <iostream>
#include <cctype>
using namespace std;

#include "History.h"
#include "Arena.h"

History::History(int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
    zombie = 0;
    for (int r = 0; r < m_rows; r++) {
        for (int c = 0; c < m_cols; c++) {
            zombie_array[r][c] = 0;
        }
    }
}

bool History::record(int r, int c)
{
    if (r < 1 || c < 1 || r > MAXROWS || c > MAXCOLS)
        return false;
    else
    {
        zombie_array[r][c]++;       // records the number of zombies at a location on grid
        return true;
    }
}

void History::display() const
{
    clearScreen();
    
    char historyGrid[MAXROWS][MAXCOLS];
    
    for (int r = 1; r <= m_rows; r++)
    {
        for (int c = 1; c <= m_cols; c++)
        {
            if (zombie_array[r][c] > 0 && zombie_array[r][c] < 26)
            {
                historyGrid[r][c] = 'A' + zombie_array[r][c] - 1;
            }
            else if (zombie_array[r][c] >= 26)
                historyGrid[r][c] = 'Z';
            else
                historyGrid[r][c] = '.';
        }
    }
    
    for (int i = 1; i <= m_rows; i++) {
        for (int j = 1; j <= m_cols; j++) {
            cout << historyGrid[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
    return;
}






















