#ifndef SCHOOL_CLASS_H
#define SCHOOL_CLASS_H

#include <QObject>
#include <vector>

template<typename T>
class School_Class
{
public:
    School_Class();

private:
    std::vector<T> class_members;
};

#endif // SCHOOL_CLASS_H
