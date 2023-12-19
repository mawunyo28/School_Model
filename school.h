#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include <QDate>
#include <vector>
#include "teacher.h"
#include "school_class.h"
#include "student.h"

#include "School_global.h"

class SCHOOL_EXPORT School
{
public:

    School();


private:
    std::string n_name;
    QDate Date_of_establishment;
    long long int n_number_of_students;
    long long int n_number_of_teachers;

    std::vector<Teacher> teachers;

    std::vector<School_Class<Student>> classes;


};

#endif // SCHOOL_H
