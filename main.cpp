#include <iostream>
#include <iomanip>
#include "PointSet.h"

using namespace std;
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
    return 0;
}