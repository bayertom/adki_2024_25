#include "algorithms.h"

Algorithms::Algorithms() {}

short Algorithms::analyzePointAndPolPosition(const QPointF &q, const QPolygonF &pol)
{
    //Ray crossing algorithm
    int k = 0;
    int n = pol.size();

    for(int i = 0; i<n; i++)
    {
        //Get coordinates
        double xir = pol[i].x()-q.x();
        double yir = pol[i].y()-q.y();
        double xi1r = pol[(i+1)%n].x()-q.x();
        double yi1r = pol[(i+1)%n].y()-q.y();

        //Do we have a suitable segment
        if((yi1r > 0) && (yir <= 0) || (yir > 0) && (yi1r <= 0))
        {
            //Point M in the right half-plane
            double xm = (xi1r*yir-xir*yi1r)/(yi1r-yir);
            if(xm>0)
                k++;
        }
    }

    return k%2;
}
