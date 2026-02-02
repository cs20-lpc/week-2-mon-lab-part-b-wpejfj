#include <iostream>
#include "Student.hpp"


Student::Student() {
  name = new std::string();
  age = new int();

  std::cout << "Student object created!\n";
}

Student::~Student() {
  delete name;
  delete age;

  std::cout << "Student object destroyed!\n";
}

void Student::setName(std::string s) {
  *name = s;
}

void Student::setAge(int i) {
  *age = i;
}

std::string Student::getName() const {
  return *name;
}

int Student::getAge() const {
  return *age;
}

