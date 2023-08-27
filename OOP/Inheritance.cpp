#include <iostream>
using namespace std;

class employee {
private:
    int salary;
    string name;
    string company;
    int age;
public:
    employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;
        salary = 5000;
    }
    virtual void details() {
        cout << "Name: " << name << "\n";
        cout << "Work For: " << company << "\n";
        cout << age << " Years Old\n";
        cout << "Salary: " << salary << "$\n";
    }
};
//-----------------------------------------------------------*
// Modifier Keyword Here To Tell Everthing That Your Inherit |
// public, private and protected                             |
// That Mean It's Can Sees Everything From Its Parent        |
//-----------------------------------------------------------*
class developer : public employee {
private:
    string work;
public:
    // You Can Build It's Own Constructor
    // Or Inherit The Constructor And Give It
    // The Needed Parameters
    developer(string Name, string Company, int Age, string Work)
        : employee(Name, Company, Age) {
        work = Work;
    }
    void details() override {
        employee::details(); // Call the base class function
        cout << "Specialty: " << work << "\n";
    }
};

int main() {
    employee emp1("osama", "Google", 32);
    emp1.details();
    cout << "\n####\n";
    developer emp2("moumin", "IBM", 32, "Cyber Security");
    emp2.details();
    return 0;
}
