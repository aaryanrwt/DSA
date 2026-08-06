#include <iostream>
using namespace std;
class Student{
private: 
      string name;
      string section;
      int roll_no;
      int maths, science, english;
public:
      void SetDetails(string name,string section,int roll_no,int maths, int science, int english){
      this->name = name;
      this->section = section;
      this->roll_no = roll_no;
      this->maths = maths;
      this->science = science;
      this->english = english;
    }
      void result(){
        int total = maths + science + english;
        float percentage = total / 3.0;

        cout << "\n------ Student Result ------\n";
        cout << "Name       : " << name << endl;
        cout << "Section    : " << section << endl;
        cout << "Roll No    : " << roll_no << endl;

        cout << "\nTotal      : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result     : PASS" << endl;
        else
            cout << "Result     : FAIL" << endl;

    }
};

int main(){
  Student s1;
  s1.SetDetails("Aaryan","H",02,100,100,100);
  s1.result();
  return 0;
}