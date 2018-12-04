#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
class student
{
  private: 
 std::string firstname;
 std::string lastname;

      
    
  public:
  void setName(std::string first, std::string last);
  std::string fullName();
};
#endif
