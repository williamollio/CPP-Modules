#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		Fixed x1;
		Fixed y1;
	public:
		Point(void);
		Point(float x1, float y1);
		~Point(void);
		Point(const Point &copy);
		float getX(void) const;
		float getY(void) const;
		Point	&operator = (const Point &copy);
};

#endif
