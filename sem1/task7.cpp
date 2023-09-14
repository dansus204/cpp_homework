#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

struct Vector3f {
    float x;
    float y;
    float z;
};

Vector3f operator+(const Vector3f& a, const Vector3f& b) {
    Vector3f result = {a.x + b.x, a.y + b.y, a.z + b.z};
    return result;
}

Vector3f operator-(const Vector3f& a, const Vector3f& b) {
    Vector3f result = {a.x - b.x, a.y - b.y, a.z - b.z};
    return result;
}

Vector3f operator*(const Vector3f& a, const float& b) {
    Vector3f result = {a.x*b, a.y*b, a.z*b};
    return result;
}

Vector3f operator*(const float& a, const Vector3f& b) {
    Vector3f result = {a*b.x, a*b.y, a*b.z};
    return result;
}

Vector3f operator/(const Vector3f& a, const float& b) {
    Vector3f result = {a.x/b, a.y/b, a.z/b};
    return result;
}

Vector3f operator/(const float& a, const Vector3f& b) {
    Vector3f result = {b.x/a, b.y/a, b.z/a};
    return result;
}

float operator*(const Vector3f& a, const Vector3f& b) {
    float result = a.x*b.x + a.y*b.y + a.z*b.z;
    return result;
}

Vector3f operator-(const Vector3f& a) {
    Vector3f result = {-a.x, -a.y, -a.z};
    return result;
}

Vector3f operator+(const Vector3f& a) {
    return a;
}

bool operator==(const Vector3f& a, const Vector3f& b) {
    float delta = 1e-10;
    return (abs(a.x - b.x) < delta && abs(a.y - b.y) < delta && abs(a.z - b.z) < delta);
}

bool operator!=(const Vector3f& a, const Vector3f& b) {
    return (a.x != b.x || a.y != b.y || a.z != b.z);
}

Vector3f operator+=(Vector3f& a, const Vector3f& b) {
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

Vector3f operator-=(Vector3f& a, const Vector3f& b) {
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

Vector3f operator*=(Vector3f& a, const float& b) {
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

Vector3f operator/=(Vector3f& a, const float& b) {
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

std::ostream& operator<<(std::ostream& out, const Vector3f& a) {
    out << '{' << a.x << ", " << a.y << ", " << a.z << '}';
    return out;
}

std::istream& operator>>(std::istream& in, Vector3f& a)
{
    in >> a.x >> a.y >> a.z;
    return in;
}

float squaredNorm(const Vector3f& a) {
    float result = a.x*a.x + a.y*a.y + a.z*a.z;
    return result;
}

float norm(const Vector3f& a) {
    float result = sqrt(squaredNorm(a));
    return result;
}

void normalize(Vector3f& a) {
    float n = norm(a);
    a.x /= n;
    a.y /= n;
    a.z /= n;
}

int main()
{
    Vector3f a = {1.0, 2.0, -2.0};
    Vector3f b = {4.0, -1.0, 3.0};
    cout << "a = " << a << endl << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "-a = " << -a << endl;
    cout << "Scalar product of a and b = " << a * b << endl;
    a /= 5;
    cout << "a after a /= 5;" << a << endl;
    normalize(b);
    cout << "Normalized b:" << b << endl;
    a += b;
    cout << "a after a+= b;" << a << endl;
}
