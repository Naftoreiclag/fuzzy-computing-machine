#ifndef CARDINAL_H
#define CARDINAL_H

#include <string>

class Point3i;

class Cardinal
{
    public:
        static Point3i interpretString(std::string str);
};

#endif // CARDINAL_H