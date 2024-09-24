// It disables specific security-related warnings that Microsoft Visual Studio
// emits for certain standard C library functions demed unsafe
#define _CRT_SECURE_NO_WARNINGS

// # -> Telling the compiler to do something before you compile the code
// include -> Copies the content in iostream and replaces the line with
// everything that iostream has
#include <cstring> // Similar to importing string.h in C Language
#include <iostream> // iostream is stream of information coming from input and going to output
using namespace std;

// How would you define a struct in C
struct Teacher {
  char m_subject[7]{};
  char m_name[41]{};
  int m_rating{};
  int m_grading{};
};

// Attribute means a member variable

// All of these functions below can be put inside the struct
// This would look more like the object oriented design
// You need to set access so that the methods are accessible but the attributes
// are not
void setTeacher(Teacher *T, const char *subject, const char *name, int rating,
                int grading) {
  strcpy(T->m_name, name);
  strcpy(T->m_subject, subject);
  T->m_grading = grading;
  T->m_rating = rating;
}

void printTeacher(const Teacher *T) {
  cout << T->m_name << ": " << "subject(" << T->m_subject << ")" << endl
       << "Rating: " << T->m_rating << endl
       << "Grading: " << T->m_grading << endl;
}

int main() {
  cout << "Hello World!" << endl;
  Teacher T;
  setTeacher(&T, "OOP244", "Aryan Khurana", 4, 10);
  printTeacher(&T);
  return 0;
}