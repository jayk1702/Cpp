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
#include <algorithm>

using namespace std;

class Student {
private:
    int rollNo;
    int age;
    char sex;
    char* name;
    

public:
    
    map<string, int> marks;
// Constructor
    Student(int RollNo, int Age, char Sex, const char* Name) : rollNo(RollNo), age(Age), sex(Sex) {
        name = new char[strlen(Name) + 1];
        strcpy(name, Name);
        // Initialize marks with default values
        marks["English"] = 0;
        marks["Maths"] = 0;
        marks["Science"] = 0;
        marks["History"] = 0;
        marks["Geography"] = 0;
    }

    // Destructor
    ~Student() {
        delete[] name;
    }

        void setMark(const string& subject, int mark) {
        marks[subject] = mark;
    }

    
    const char* getName() const {
        return name;
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
};

bool compareByName(const Student& s1, const Student& s2) {
    return strcmp(s1.getName(), s2.getName()) < 0;
}

int main() {
    vector<Student> students;

    for (int i = 0; i < 10; ++i) {
        int rollNo, age;
        char sex, name[50];
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Sex (M/F): ";
        cin >> sex;

        students.push_back(Student(rollNo, age, sex, name));

        for (auto& student : students.back().marks) {
            string subject;
            int mark;
            cout << "Enter marks for " << student.first << ": ";
            cin >> mark;
            student.second = mark;
        }
    }

    sort(students.begin(), students.end(), compareByName);

    cout << "Student information after sorting by name:" << endl;
    for (const auto& student : students) {
        student.display();
    }

    return 0;
}