#include "draw.h"
#include <QtGui>

Draw::Draw(QWidget *parent)
    : QWidget{parent}
{
    q.setX(0);
    q.setY(0);

}


void Draw::mousePressEvent(QMouseEvent *e)
{
    //Add point to polygon

    //Get x, y coordinates
    double x = e->pos().x();
    double y = e->pos().y();

    //Create point
    QPointF p(x, y);

    //Add point to polygon
    pol.push_back(p);

    //Repaint screen
    repaint();
}


void Draw::paintEvent(QPaintEvent *event)
{
    //Draw
    QPainter painter(this);

    //Create object for drawing
    painter.begin(this);

    //Set graphic attributes

    //Begin draw
    painter.drawPolygon(pol);

    //End draw
    painter.end();
}
