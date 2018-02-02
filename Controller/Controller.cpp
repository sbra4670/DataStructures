//
//  Controller.cpp
//  DataStructures
//
//  Created by Bravo, Sebastian on 1/31/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "Controller.hpp"
#include "/Users/sbra4670/Downloads/crime.csv"


using namespace std;

void Controller :: start()
{
    findMaxAndMin();
    
    for (int index = 234; index < 400; index += 30)
    {
        std :: cout << index << " is " << myData[index] << endl;
    }
    
    void Controller :: findMaxAndMin()
    {
        Timer searchTimer;
        searchTimer.startTimer()
        vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/sbra4670/Documents/SwiftProjects/DataStructures/Controller/Controller.cpp/Users/sbra4670/Downloads/crime.csv");
        
        int minIndex = 0;
        int maxIndex = 0;
        
        for (int index = 1; index < myData.size(); index ++)
        {
            if(myData [minIndex] > myData [index])
            {
                minIndex = index;
            }
            
            if (myData [maxIndex] < myData [index])
            {
                maxIndex = index;
            }
        }
        searchTimer.stopTimer();
        cout << "The smallest rime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
        cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl
        searchTimer.displayInfromation();
    }
}
