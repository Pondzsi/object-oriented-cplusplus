#include "Point.h"
#include "functions.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define N = 100000;

bool comparer(Point a, Point b)
{
    return (a.getX() < b.getX());
}

int main(int argc, char **argv)
{
    // Point p1(2, 3);
    // cout << "p1( " << p1.getX() << "," << p1.getY() << ")" << endl;
    // Point p2(100, 200);
    // cout << "p2( " << p2.getX() << "," << p2.getY() << ")" << endl;
    // Point *pp1 = new Point(300, 400);
    // Point *pp2 = new Point(500, 1000);
    // cout << "pp1( " << pp1->getX() << "," << pp1->getY() << ")" << endl;
    // cout << "pp2( " << pp2->getX() << "," << pp2->getY() << ")" << endl;
    // delete pp1;
    // delete pp2;
    // return (EXIT_SUCCESS);
    //testIsSquare("points.txt");
    int arraySize = 10;
    Point *points;
    points = (Point *)malloc(arraySize * sizeof(Point));

    srand(time(NULL));
    points[0].setX(rand() % 2000);
    points[0].setY(rand() % 2000);
    for (int index = 1; index < arraySize; index++)
    {
        points[index].setX(rand() % 2000);
        points[index].setY(rand() % 2000);
        for (int jndex = 0; jndex < index; jndex++)
        {
            if (theSame(points[jndex], points[index]))
            {
                index--;
                jndex = index;
            }
        }
    }

    double *minAndMaxDist = minMaxDistance(points, arraySize);
    cout << "A legkissebb tav = " << minAndMaxDist[0] << endl;
    cout << "A legnagyobb tav = " << minAndMaxDist[1] << endl;

    sort(points, points + arraySize, comparer);

}