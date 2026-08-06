#include <iostream>
#include <string>
using namespace std;
class Student{
  private:
      string name;
      string section;
      int roll_no;
      int maths, science, english;
  public:
    void SetDetails(string name, string section, int roll_no,
                    int maths, int science, int english){
          this->name = name;
          this->section = section;
          this->roll_no = roll_no;
          this->maths = maths;
          this->science = science;
          this->english = english;  
  }
  bool SearchStudent(string name, string section, int roll_no) {
     return (this->name == name &&
                this->section == section &&
                this->roll_no == roll_no);
  }   
  void Result(){
    int total = maths+ science+english;
    float percentage = total/3.0;

    cout<<"\n-------Student Result--------\n";
    cout<<"Name         :"<<name<< endl;
    cout<<"Section      :"<<section<< endl;
    cout<<"ROll_no      :"<<roll_no<< endl;

    cout << "\nMarks\n";
    cout << "Maths      : " << maths << endl;
    cout << "Science    : " << science << endl;
    cout << "English    : " << english << endl;

    cout << "\nTotal      : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 40)
            cout << "Result     : PASS" << endl;
        else
            cout << "Result     : FAIL" << endl;
  }
};
int main()
{
    Student students[5];

    // Database
    students[0].SetDetails("Aaryan", "H", 2, 100, 100, 100);
    students[1].SetDetails("Rahul", "A", 5, 90, 85, 80);
    students[2].SetDetails("Riya", "B", 7, 95, 96, 97);
    students[3].SetDetails("Aman", "C", 9, 70, 65, 75);
    students[4].SetDetails("Priya", "D", 10, 88, 91, 86);

    string name, section;
    int roll_no;

    cout << "====== Student Result Portal ======\n\n";

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Section: ";
    cin >> section;

    cout << "Enter Roll No: ";
    cin >> roll_no;

    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (students[i].SearchStudent(name, section, roll_no))
        {
            students[i].Result();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent Record Not Found!" << endl;
    }

    return 0;
}

