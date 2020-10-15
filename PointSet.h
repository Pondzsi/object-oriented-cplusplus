#ifndef POINTSET_H_INCLUDED
#define POINTSET_H_INCLUDED

#include "Point.h"
#include <vector>
using namespace std;
class PointSet
{
    vector<Point> points;
    int numPoints;
    vector<double> distances; 
    void computeDistances();
public:
    PointSet( int numPoints = 100 );
    double maxDistance() const;
    double minDistance() const;
    int numDistances() const;
    void printPoints() const;
    void printDistances() const;
    void sortPointsByX();
    void sortPointsByY();
    int numDistinctDistances();
};


#endif // POINTSET_H_INCLUDED


