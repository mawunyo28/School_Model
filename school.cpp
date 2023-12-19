#include "school.h"

School::School()
{
}

std::string School::getN_name() const
{
    return n_name;
}

void School::setN_name(const std::string &newN_name)
{
    n_name = newN_name;
}

QDate School::getDate_of_establishment() const
{
    return Date_of_establishment;
}

void School::setDate_of_establishment(const QDate &newDate_of_establishment)
{
    Date_of_establishment = newDate_of_establishment;
}

long long School::getN_number_of_students() const
{
    return n_number_of_students;
}

void School::setN_number_of_students(long long newN_number_of_students)
{
    n_number_of_students = newN_number_of_students;
}

long long School::getN_number_of_teachers() const
{
    return n_number_of_teachers;
}

void School::setN_number_of_teachers(long long newN_number_of_teachers)
{
    n_number_of_teachers = newN_number_of_teachers;
}

std::vector<Teacher> School::getTeachers() const
{
    return teachers;
}

void School::setTeachers(const std::vector<Teacher> &newTeachers)
{
    teachers = newTeachers;
}

std::vector<School_Class<Student> > School::getClasses() const
{
    return classes;
}

void School::setClasses(const std::vector<School_Class<Student> > &newClasses)
{
    classes = newClasses;
}
}


