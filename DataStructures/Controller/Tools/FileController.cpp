//
//  FileController.cpp
//  DataStructures
//
//  Created by Bravo, Sebastian on 1/31/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV sepeerated by the carriage return character.
            getline(dataFile, current CSVLine, '\r');
            //Exclude header row
            if (rowCount!= 0)
            {
                //Create a CrimeData instance from the lilne. Exclude a blank line (typically if opened seperately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++
        }
        dataFile.close();
    }
    else
    {
        cerr<< "NO FILE" << endl;
    }
    
    return crimeVector;
}
