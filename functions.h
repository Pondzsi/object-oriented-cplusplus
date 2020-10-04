//
// Created by Rolland on 9/25/2020.
//
#include <string>
#include <vector>

#ifndef OOP1_FUNCTIONS_H
#define OOP1_FUNCTIONS_H

int countBits(unsigned int number);
int setBit(int& number,unsigned int order);
double getArrayOfRealNumbersAverage(double arrayOfRealNumbers[], int numberOfElements);
double getStandardDeviationOfRealNumbers(double arrayOfRealNumbers[], int numberOfElements);
double* getTwoHighestNumberFromArrayOfRealNumbers(double arrayOfRealNumbers[], int numberOfElements);
std::string capitalizeWords(std::string text);
std::string modifyAlphabetCharBy(std::string text, int modifyBy);
int splitSentenceToWords(std::string sentence);
std::vector<std::string> splitCSVLine(const std::string& text);

#endif //OOP1_FUNCTIONS_H
