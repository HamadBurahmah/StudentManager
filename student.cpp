#include "student.h"
void student::setName(std::string first,std::string last)
{
firstname = first;
lastname = last;
}
std::string student::fullName()
{
std::string str = firstname;
str.append(" ");
str.append(lastname);
return str;
}
