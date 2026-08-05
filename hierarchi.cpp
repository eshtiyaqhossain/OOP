#include <iostream>
using namespace std;
class Person {
protected:

    string name;
    int age;

public:
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
        cout << "Person constructor called\n";
    }

    void showPersonInfo() {
        cout << "Name: " << name << ", Age: " << age <<
endl;
    }
};

class Teacher : virtual public Person {
protected:
    int employeeID;

public:
    Teacher(string n = "", int a = 0, int id = 0) :
Person(n, a) {
        employeeID = id;
        cout << "Teacher constructor called\n";
    }

    void showTeacher() {
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Researcher : virtual public Person {
protected:
    string researchArea;

public:
    Researcher(string n = "", int a = 0, string area =
"") : Person(n, a) {
        researchArea = area;
        cout << "Researcher constructor called\n";
    }

    void showResearch() {
        cout << "Research Area: " << researchArea <<
endl;
    }
};

class Professor : public Teacher, public Researcher {
public:
    Professor(string n, int a, int id, string area)
        : Person(n,a),
  Teacher(n, a, id),
        Researcher(n, a, area) {
        cout << "Professor constructor called\n";
    }

    void showProfessorInfo() {
        showPersonInfo();
        showTeacher();
        showResearch();
        }
};
int main() {
Professor prof("dr.Yunus", 75, 360000, "Microfinancee");
prof.showProfessorInfo();
return 0;
}
