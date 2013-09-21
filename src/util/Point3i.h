#ifndef POINT3I_H
#define POINT3I_H

/* 3D Point with (signed) integers
 * Operator overloading! Cool!
 */

class Point3i
{
    public:
        int x, y, z;
        Point3i();
        Point3i(int x, int y, int z);
        Point3i operator+ (Point3i p);
        Point3i operator- (Point3i p);
        Point3i operator* (Point3i p);
        bool operator== (Point3i p);
};

#endif // POINT3I_H
