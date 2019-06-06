/**
 * \file Point2D.hpp
 *
 *  Created on: 06-Jun-2019
 *      Author: kapil
 */

#ifndef POINT2D_HPP_
#define POINT2D_HPP_


class Point2D {
public:
	double x;
	double y;

	/**
	 * \fn double DistanceToAPoint(const Point2D APoint) const
	 *
	 * \brief Computes distance to a given point
	 *
	 * \param [in] APoint A point whose distance with this point needs to be computed
	 *
	 * \returns distance from this point to the given point
	 */
	double DistanceToAPoint(const Point2D APoint) const;
};




#endif /* POINT2D_HPP_ */
