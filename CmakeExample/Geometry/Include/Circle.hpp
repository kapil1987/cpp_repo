/**
 * \file Circle.hpp
 *
 * \brief Interface for class - Circle
 *
 * \date 08-Jun-2019
 * \author kapil
 */

#ifndef INCLUDE_CIRCLE_HPP_
#define INCLUDE_CIRCLE_HPP_


class Circle {
public:
	Point2D Centre;
	double Radius;

	/**
	 * \fn double Area() const
	 * \returns Area under the circle
	 */
	double Area() const;

};




#endif /* INCLUDE_CIRCLE_HPP_ */
