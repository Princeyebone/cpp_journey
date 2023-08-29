#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    string department;

public:
    virtual void get_data() = 0;
    virtual void show_data() = 0;
};

class Medical : public Student {
public:
    void get_data() {
        cout << "Enter Medical Student's Name: " << endl;
        cin >> name;
        department = "Medical";
    }

    void show_data()  {
        cout << "Name: " << name << "\nDepartment: " << department << endl;
    }
};

class Engineering : public Student {
public:
    void get_data()  {
        cout << "Enter Engineering Student's Name: " << endl;
        cin >> name;
        department = "Engineering";
    }

    void show_data()  {
        cout << "Name: " << name << "\nDepartment: " << department << endl;
    }
};

class Science : public Student {
public:
    void get_data()  {
        cout << "Enter Science Student's Name: " << endl;
        cin >> name;
        department = "Science";
    }

    void show_data()  {
        cout << "Name: " << name << "\nDepartment: " << department << endl;
    }
};

int main() {
    Student* students[3];
    students[0] = new Medical;
    students[1] = new Engineering;
    students[2] = new Science;

    for (int i = 0; i < 3; i++) {
        students[i]->get_data();
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < 3; i++) {
        students[i]->show_data();
        delete students[i];
    }

    return 0;
}
