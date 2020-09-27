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

int setBit(int& number, unsigned int order)
{
    (number | (1 << (order - 1)));
    return (order < 32) ? 1 : 0;
}

double getArrayOfRealNumbersAverage(double arrayOfRealNumbers[], int numberOfElements)
{
    int sumOfElements = 0;
    for(int index = 0; index < numberOfElements; index++){
        sumOfElements += arrayOfRealNumbers[index];
    }
    return numberOfElements ? double(sumOfElements / numberOfElements) : NAN;
}

double getStandardDeviationOfRealNumbers(double arrayOfRealNumbers[], int numberOfElements)
{
    double standardDeviation = 0.0;
    double average = getArrayOfRealNumbersAverage(arrayOfRealNumbers, numberOfElements);

    for(int index = 0; index < numberOfElements; index++) {
        standardDeviation += pow(arrayOfRealNumbers[index] - average, 2);
    }

    return sqrt(standardDeviation/numberOfElements);
}

double* getTwoHighestNumberFromArrayOfRealNumbers(double arrayOfRealNumbers[], int numberOfElements)
{
    double nanArray[] = {NAN,NAN};
    if (numberOfElements == 0) { return nanArray; }
    double oneArray[] = { arrayOfRealNumbers[0], arrayOfRealNumbers[0] };
    if (numberOfElements == 1) { return oneArray; }
    //double sortedArray[] = std::sort(arrayOfRealNumbers, numberOfElements);
    //double returnArray[] = {sortedArray[numberOfElements-2],sortedArray[numberOfElements-1]};
    double returnArray[] = {arrayOfRealNumbers[numberOfElements-2],arrayOfRealNumbers[numberOfElements-1]};
    return returnArray;
}

std::string capitalizeWords(std::string text)
{
    std::string word = "";
    for(auto& word: text) {
        word = toupper(word);
    }
    return word;
}

std::string increaseAlphabetChar(std::string text)
{
    int currentAscii = 0;
    for (int index = 0; index < text.length(); ++index) {
        currentAscii = int(text[index]) + 1;
        text[index] = char(currentAscii);
    }

    return text;
}

std::string decreaseAlphabetChar(std::string text)
{
    int currentAscii = 0;
    for (int index = 0; index < text.length(); ++index) {
        currentAscii = int(text[index]) - 1;
        text[index] = char(currentAscii);
    }

    return text;
}

std::vector<std::string> splitCSVLine(const std::string& text)
{
    std::vector<std::string> result;

    std::stringstream s_stream(text); //create string stream from the string while(s_stream.good()) {

    std::string substr;

    getline(s_stream, substr, ','); //get first string delimited by comma result.push_back(substr);


    return result;
}