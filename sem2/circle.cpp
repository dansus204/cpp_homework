#include <cmath>

#include "point.h"
#include "circle.h"

Circle::Circle(const Point& acenter, float aradius) {
    mCenter = acenter;
    mRadius = aradius;
}

Circle::Circle()
{
    mCenter = Point();
    mRadius = 1;
}

Circle::Circle(const Circle& circle)
{
    mCenter = circle.mCenter;
    mRadius = circle.mRadius;
}

Point Circle::getCenter() const
{
    return mCenter;
}

float Circle::getRadius() const
{
    return mRadius;
}

void Circle::setCenter(Point p)
{
    mCenter = p;
}

void Circle::setRadius(float r)
{
    mRadius = r;
}

float Circle::getArea() const
{
    return M_PI*mRadius*mRadius;
}

float Circle::getDistance(const Point& p) const
{
    return fabs(p.distance(mCenter) - mRadius);
}

bool Circle::isColliding(const Circle& c) const
{
    return getDistance(c.getCenter()) > c.getRadius();
}

void Circle::move(const Point& p)
{
    setCenter(getCenter() + p);
}













