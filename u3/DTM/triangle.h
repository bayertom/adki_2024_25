#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <QtGui>

#include "qpoint3df.h"

class Triangle
{

private:
    QPolygonF vertices;
    double slope, aspect;

public:
    Triangle();

    Triangle(QPoint3DF p1_, QPoint3DF p2_, QPoint3DF p3_, double slope_, double aspect_)
    {
        vertices.push_back(p1_);
        vertices.push_back(p2_);
        vertices.push_back(p3_);
        aspect = aspect_;
        slope = slope_;
    }

    QPolygonF getVertices() {return vertices;}
};

#endif // TRIANGLE_H
