#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0);
    void print() const;
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY (int y);
};

#endif /* PONT_H */