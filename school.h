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


    std::string getN_name() const;
    void setN_name(const std::string &newN_name);
    QDate getDate_of_establishment() const;
    void setDate_of_establishment(const QDate &newDate_of_establishment);
    long long getN_number_of_students() const;
    void setN_number_of_students(long long newN_number_of_students);
    long long getN_number_of_teachers() const;
    void setN_number_of_teachers(long long newN_number_of_teachers);
    std::vector<Teacher> getTeachers() const;
    void setTeachers(const std::vector<Teacher> &newTeachers);
    std::vector<School_Class<Student> > getClasses() const;
    void setClasses(const std::vector<School_Class<Student> > &newClasses);

private:
    std::string n_name;
    QDate Date_of_establishment;
    long long int n_number_of_students;
    long long int n_number_of_teachers;

    std::vector<Teacher> teachers;

    std::vector<School_Class<Student>> classes;


};

#endif // SCHOOL_H
