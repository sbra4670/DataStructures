//
//  Controller.cpp
//  DataStructures
//
//  Created by Bravo, Sebastian on 1/31/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "Controller.hpp"


using namespace std;

void Controller :: start()
{
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Look code on the screen!" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for (int index = 0; index < 50000; index++)
    {
        cout << "Index is " << index << "\t";
    }
    
    vector<CrimeData> myData FileController :: readCrimeDataToVector("/Users/sbra4670/Documents/SwiftProjects/DataStructures/Controller/Controller.cpp/Users/sbra4670/Downloads/crime.csv");
    
    for (int index = 234; index < 400; index += 30)
    {
        cout << index << " is " << myData[index] << endl;
    }
    
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
