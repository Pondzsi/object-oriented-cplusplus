#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include "PointSet.h"

using namespace std;

// static bool sort_using_greater_than(double u, double v)
// {
//    return u > v;
// }

// double median(vector<double> vectorOfDoubles)
// {
//     sort(vectorOfDoubles.begin(), vectorOfDoubles.end(), sort_using_greater_than);

//     int myVectorSize = vectorOfDoubles.size();

//     if (myVectorSize % 2 != 0) {
//         return vectorOfDoubles.at(myVectorSize/2);
//     }

//     return (vectorOfDoubles.at((myVectorSize - 1)/2) + vectorOfDoubles.at((myVectorSize + 1)/2)) / 2.0; 
// }

int main(int argc, char **argv)
{
    int numPoints = 2;
    cout << "#pontok\t\t\tMin\t\t\tMax\t\t#distances\t#distinctDistances" << endl;
    for (int index = 0; index < 12; index++)
    {
        PointSet poinsSet(numPoints);
        cout << setw(8);
        cout << numPoints << "\t";
        cout << setw(8) << setprecision(2) << fixed;
        cout << poinsSet.minDistance() << "\t";
        cout << setw(8) << setprecision(2) << fixed;
        cout << poinsSet.maxDistance() << "\t";
        cout << setw(8);
        cout << poinsSet.numDistances() << "\t";
        cout << setw(8);
        cout << poinsSet.numDistinctDistances() << "\t";
        numPoints = numPoints << 1;
    }

    // vector<double> myVector{ 1,2,5,4,3,1,4,3,3,4,3,5,1 };
    // cout << median(myVector) << endl;

    return 0;
}