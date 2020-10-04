//
// Created by Rolland on 9/25/2020.
//

#include "functions.h"
#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

int countBits(unsigned int number)
{
    //if number is 0 then it can go back else countBits for number shifted by 1 bit
    return number ? (number & 1) + countBits(number >> 1) : 0;
}

int setBit(int &number, unsigned int order)
{
    (number | (1 << (order - 1)));
    return (order < 32) ? 1 : 0;
}

double getArrayOfRealNumbersAverage(double arrayOfRealNumbers[], int numberOfElements)
{
    int sumOfElements = 0;
    for (int index = 0; index < numberOfElements; index++)
    {
        sumOfElements += arrayOfRealNumbers[index];
    }
    return numberOfElements ? double(sumOfElements / numberOfElements) : NAN;
}

double getStandardDeviationOfRealNumbers(double arrayOfRealNumbers[], int numberOfElements)
{
    double standardDeviation = 0.0;
    double average = getArrayOfRealNumbersAverage(arrayOfRealNumbers, numberOfElements);

    for (int index = 0; index < numberOfElements; index++)
    {
        standardDeviation += pow(arrayOfRealNumbers[index] - average, 2);
    }

    return sqrt(standardDeviation / numberOfElements);
}

double *getTwoHighestNumberFromArrayOfRealNumbers(double arrayOfRealNumbers[], int numberOfElements)
{
    static double returnArray[2];

    if (numberOfElements == 0)
    {
        returnArray[0] = NAN;
        returnArray[1] = NAN;

        return returnArray;
    }

    if (numberOfElements == 1)
    {
        returnArray[0] = arrayOfRealNumbers[0];
        returnArray[1] = arrayOfRealNumbers[0];

        return returnArray;
    }

    std::sort(arrayOfRealNumbers, arrayOfRealNumbers + numberOfElements);
    returnArray[0] = arrayOfRealNumbers[numberOfElements - 2];
    returnArray[1] = arrayOfRealNumbers[numberOfElements - 1];

    return returnArray;
}

std::string capitalizeWords(std::string text)
{
    for (int index = 0; index < text.length(); ++index)
    {
        text[index] = (index == 0) ? toupper(text[index]) : (text[index - 1] == ' ') ? toupper(text[index]) : text[index];
    }
    return text;
}

std::string modifyAlphabetCharBy(std::string text, int modifyBy)
{
    for (int index = 0; index < text.length(); ++index)
    {
        text[index] += modifyBy;
    }
    return text;
}

std::vector<std::string> splitCSVLine(const std::string &text)
{
    std::vector<std::string> result;

    std::stringstream s_stream(text);

    std::string substr;

    getline(s_stream, substr, ',');
    
    return result;
}