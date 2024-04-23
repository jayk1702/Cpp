/*create a class Student 
having data members int rollNo, int age, char sex, name(char*),
map<string, int> containing marks of subjects
English, Maths, Science, History, Geography
create 10 students and add it to a vector.
 
sort the vector according to name.*/

#include <iostream>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

class Student {
private:
    int rollNo;
    int age;
    char sex;
    char* name;
    map<string, int> marks;

public:
    // Constructor
    //Student(){}
    Student(int Roll1, int Age1, char Sex1, const char* Name1, map<string, int>& Marks1) : rollNo(Roll1), age(Age1), sex(Sex1) {
         name = new char[strlen(Name1)+1];
        strcpy(name,Name1);
        marks = Marks1;
    }
    
    
    void display() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Marks:" << endl;
        for (const auto& pair : marks) {
            cout << pair.first << ": " << pair.second << endl;
        }
        cout << endl;
    }
	/*~Student() {
        delete[] name;
    }*/

};

int main() {
    std::vector<Student> students;
    
    map<string, int> S1_marks = {{"English", 50}, {"Maths", 80}, {"Science", 70}, {"History", 60}, {"Geography", 40}};
    map<string, int> S2_marks = {{"English", 70}, {"Maths", 65}, {"Science", 96}, {"History", 87}, {"Geography", 78}};
    map<string, int> S3_marks = {{"English", 60}, {"Maths", 43}, {"Science", 86}, {"History", 30}, {"Geography", 94}};
    map<string, int> S4_marks = {{"English", 90}, {"Maths", 48}, {"Science", 46}, {"History", 76}, {"Geography", 45}};
    map<string, int> S5_marks = {{"English", 43}, {"Maths", 42}, {"Science", 35}, {"History", 63}, {"Geography", 38}};
    map<string, int> S6_marks = {{"English", 76}, {"Maths", 79}, {"Science", 43}, {"History", 68}, {"Geography", 79}};
    map<string, int> S7_marks = {{"English", 56}, {"Maths", 68}, {"Science", 83}, {"History", 47}, {"Geography", 84}};
    map<string, int> S8_marks = {{"English", 82}, {"Maths", 28}, {"Science", 45}, {"History", 57}, {"Geography", 38}};
    map<string, int> S9_marks = {{"English", 43}, {"Maths", 83}, {"Science", 49}, {"History", 59}, {"Geography", 72}};
    map<string, int> S10_marks = {{"English", 79}, {"Maths", 75}, {"Science", 61}, {"History", 91}, {"Geography", 62}};

    // Add 10 students to the vector
    students.push_back(Student(1, 18, 'M', "Kohli", S1_marks));
    students.push_back(Student(2, 20, 'M', "Itachi", S1_marks));
    students.push_back(Student(3, 19, 'M', "Messi", S1_marks));
    students.push_back(Student(4, 19, 'F', "Nami", S4_marks));
    students.push_back(Student(5, 20, 'M', "Zoro", S5_marks));
    students.push_back(Student(6, 21, 'F', "NicoRobin", S6_marks));
    students.push_back(Student(7, 22, 'M', "Luffy", S7_marks));
    students.push_back(Student(8, 19, 'F', "Boa", S8_marks));
    students.push_back(Student(9, 20, 'M', "Naruto", S9_marks));
    students.push_back(Student(10, 21, 'F', "Hinata", S10_marks));
    
    for (const auto& student : students) {
        student.display();
    }

    return 0;
}