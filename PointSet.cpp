#include "Point.h"
#include <vector>
#include "PointSet.h"
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define M 2000
#include <algorithm>
#include <iostream>
using namespace std;

void PointSet::computeDistances()
{
    int k = 0;
    for (int i = 0; i < this->numPoints; i++)
    {
        for (int j = i + 1; j < this->numPoints; j++)
        {
            distances.push_back(sqrt((points[i].getX() - points[j].getX()) * (points[i].getX() - points[j].getX()) + (points[i].getY() - points[j].getY()) * (points[i].getY() - points[j].getY())));
        }
    }
}

bool pointsHelper[M][M] = {true};
void setToNull()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            pointsHelper[i][j] = true;
        }
    }
}

PointSet::PointSet(int numPoints)
{
    this->numPoints = numPoints;
    srand(time(NULL));
    setToNull();
    while (points.size() < numPoints)
    {
        int a = rand() % M;
        int b = rand() % M;
        if (pointsHelper[a][b] == true)
        {
            pointsHelper[a][b] = false;
            Point helper;
            helper.setX(a);
            helper.setY(b);
            points.push_back(helper);
        }
    }
    computeDistances();
}

double PointSet ::maxDistance() const
{
    return *max_element(distances.begin(), distances.end());
}
double PointSet ::minDistance() const
{
    return *min_element(distances.begin(), distances.end());
}
int PointSet ::numDistances() const
{
    return (numPoints * (numPoints - 1)) / 2;
}

void PointSet ::printPoints() const
{
    for (auto point : points)
    {
        cout << point.getX() << point.getY() << endl;
    }
}

void PointSet ::printDistances() const
{
    for (auto distance : distances)
    {
        cout << distance << endl;
    }
}

struct byX
{
    bool operator()(Point i, Point j)
    {
        return (i.getX() < j.getX());
    }
} byX;

void PointSet ::sortPointsByX()
{
    sort(points.begin(), points.end(), byX);
}

struct byY
{
    bool operator()(Point i, Point j)
    {
        return (i.getY() < j.getY());
    }
} byY;

void PointSet ::sortPointsByY()
{
    sort(points.begin(), points.end(), byY);
}

int PointSet ::numDistinctDistances()
{
    double helper = distances[0];
    int number = 1;
    for (auto distance : distances)
    {
        if (helper != distance)
        {
            number++;
            helper = distance;
        }
    }
    return number;
}