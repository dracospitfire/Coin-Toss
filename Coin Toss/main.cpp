/*
  Coin-Toss.cpp
  Created by Austin Flores on 12/9/13.
  Copyright (c) 2013 dracospitfire All rights reserved.
*/

#include <iostream>        //required for display output
#include <cmath>           //required for pow and sqrt
#include <iomanip>         //required for setw or setprecision
#include <string>          //required for string class
#include <ctime>           //required for time function
#include <cstdlib>         //required for rand and srand
#include <fstream>         //required to open files for reading, writing, or both

using namespace std;       //requred to access entities with namespace std

int heads_or_tails();

int main()                 //marks the begining of a function
{
    int i;
    unsigned int seed;
    seed = static_cast<unsigned int>(time(0));  //"cast" manually promote or demote a value.
    srand(seed);
    
    cout << "\t\tCoin-Toss\n\n";
    
    int coin_toss;
    int amount_flips;
    
    cout << "How many times would you like the coin tossed?\n";
    cin >> amount_flips;
    
    for (i = 0; i < amount_flips; i++)
    {
        coin_toss = heads_or_tails();
        
        if (coin_toss == 1)
            cout << "\tHeads\n";
        if (coin_toss == 2)
            cout << "\tTails\n";
    }
    cout << "\n\n\t";
    return 0;
}
int heads_or_tails()
{
    int rnum;
    rnum = 1+rand() % 2;     //gives you random number 1 or 2
    return rnum;
}
