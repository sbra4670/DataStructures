//
//  Timer.hpp
//  DataStructures
//
//  Created by Bravo, Sebastian on 1/31/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#define Timer_hpp

#include <time.h>
#include <iostream>
#include <assert.h>

class Timer
{
private:
    clock_t executionTime;
    
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeinMicroseconds();
};
