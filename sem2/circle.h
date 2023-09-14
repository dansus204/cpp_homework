#pragma once

class Circle
{
private:
	Point mCenter;
	float mRadius;

public:
    Circle(const Point& acenter, float aradius);
    Circle();
    Circle(const Circle& circle);

    float getRadius() const;
    Point getCenter() const;
    void setRadius(float r);
    void setCenter(Point p);

    float getArea() const;
    float getDistance(const Point& p) const;
    bool isColliding(const Circle& c) const;
    void move(const Point& p);



};
