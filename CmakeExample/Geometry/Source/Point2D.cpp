/**
 * \file Point2D.cpp
 *
 * \date 06-Jun-2019
 * \author kapil
 */

#include <iostream>
#include <math.h>
#include "Point2D.hpp"


double Point2D::DistanceToAPoint(const Point2D APoint) const
{
	return sqrt(pow((APoint.x - x), 2) + pow((APoint.y -y), 2));

}




