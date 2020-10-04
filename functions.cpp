#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Point.h"

double distance(const Point &a, const Point &b) { return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2)); }
bool isSquare(const Point &a, const Point &b, const Point &c, const Point &d)
{
    double distAB = distance(a, b);
    double distAC = distance(a, c);
    double distAD = distance(a, d);
    double distBC = distance(b, c);
    double distBD = distance(b, d);
    double distCD = distance(c, d);

    if (distAB <= 0 || distAC <= 0 || distAD <= 0 || distBC <= 0 || distBD <= 0 || distCD <= 0)
    {
        return false;
    }

    if (distAB == distCD)
    {
        if (distAC == distBC)
        {
            if (distAC == distBD)
            {
                return true;
            }
        }
    }
    return false;
}
void testIsSquare(const char *filename)
{
    std::vector<bool> squares;
    std::string line;
    std::ifstream inputFile(filename);
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        if (line.empty())
            continue;

        int x1 = stoi(line.substr(0, line.find(' ')));
        int y1 = stoi(line.substr(1, line.find(' ')));

        int x2 = stoi(line.substr(2, line.find(' ')));
        int y2 = stoi(line.substr(3, line.find(' ')));

        int x3 = stoi(line.substr(4, line.find(' ')));
        int y3 = stoi(line.substr(5, line.find(' ')));

        int x4 = stoi(line.substr(6, line.find(' ')));
        int y4 = stoi(line.substr(7, line.find(' ')));

        Point point1 = Point(x1, y1);
        Point point2 = Point(x2, y2);
        Point point3 = Point(x3, y3);
        Point point4 = Point(x4, y4);

        squares.push_back(isSquare(point1, point2, point3, point4));
    }

    inputFile.close();

    for (std::vector<bool>::iterator it = squares.begin(); it != squares.end(); ++it)
    {
        std::cout << ' ' << *it;
    }
}

