#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student {
public:

  Student();
  ~Student();

  void setName(std::string s);
  void setAge(int i);

  std::string getName() const;
  int getAge() const;
  
private:
  std::string* name;
  int* age;
};

#endif // STUDENT_H_
