//
//  FileController.hpp
//  DataStructures
//
//  Created by Bravo, Sebastian on 1/31/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include </Users/sbra4670/Downloads/crime.csv>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    
};


#endif /* FileController_hpp */
