#include <iostream>
#include "functions.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int main()
{

    ///1

    // for (auto currentNumber = 0; currentNumber != 127; ++currentNumber) {
    //     std::cout << currentNumber << "- has " << countBits(currentNumber) << " 1 bit" << std::endl;
    // }

    ///2

    // int seven = 7, order = 1; //111
    // std::cout << setBit(seven,order) << " " << seven << std::endl;

    ///3

    // const int FIVE = 5;
    // double arrayOfRealNumbers[FIVE] = {12, 76, 23, 9, 5};
    // std::cout << getArrayOfRealNumbersAverage(arrayOfRealNumbers, FIVE) << std::endl;

    ///4

    // const int FIVE = 5;
    // double arrayOfRealNumbers[FIVE] = {12, 76, 23, 9, 5};
    // std::cout << getStandardDeviationOfRealNumbers(arrayOfRealNumbers, FIVE) << std::endl;

    ///5

    // const int FIVE = 5;
    // double arrayOfRealNumbers[FIVE] = {12, 76, 23, 9, 5};
    // double* twoHighestNumber = getTwoHighestNumberFromArrayOfRealNumbers(arrayOfRealNumbers, FIVE);
    // std::cout << twoHighestNumber[0] << " and " << twoHighestNumber[1] << std::endl;

    ///6

    // std::string lowercaseString = "";
    // std::cout << "Please, enter string: ";
    // std::getline (std::cin, lowercaseString);
    // std::cout << capitalizeWords(lowercaseString) << std::endl;

    ///7

    // std::string niceString = "ABCDEFG";
    // std::cout << modifyAlphabetCharBy(niceString, 1) << std::endl;
    // std::cout << modifyAlphabetCharBy(niceString, -1) << std::endl;

    ///8

    // std::string line;
    // std::ifstream inputFile("inputfile.csv");
    // std::vector<std::string> currentLineVector;
    // while (!inputFile.eof())
    // {
    //     getline(inputFile, line);
    //     currentLineVector = splitCSVLine(line);
    //     std::cout << line << std::endl;
    //     ///std::cout << result.size() << std::endl;
    //     ///std::cout << result.back() << std::endl;
    // }
    // inputFile.close();

    return 0;
}