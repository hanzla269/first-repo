
#include <iostream>
using namespace std;
class Student {

private:
 string name;
int marks;

public:
 static int totalStudents;

Student(string n, int m) {
 name = n;
 marks = m;
 totalStudents++;
  cout<<"Student "<< name<< " "<<"add Total:"<<totalStudents<<endl;}
~Student() {
 cout <<"Student "<<name<<" "<<"removed by system." << endl;
 totalStudents--; }

void display() {
 cout<<"Name: "<<name<<" "<<"Marks: "<<marks<< endl;}
};

int Student::totalStudents = 0;
int main() {
Student s1("umer", 123);
 Student s2("kamran", 134);
 Student s3("bashir", 187);

s1.display();
s2.display();
s3.display();
 cout<<"Total Students: "<< Student::totalStudents<<endl;
 return 0;
}
