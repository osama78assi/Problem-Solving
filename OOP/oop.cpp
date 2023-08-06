#include <iostream>
using namespace std;

class employee {
private:
    string nickName;
    int salary;
public:
    string name;
    string company;
    int age;
    void setSalary(int Salary) { salary = Salary; }
    void getSalary() { cout << "Salary: " << salary << "$\n"; }
    void getNick() { cout << nickName << ". " << name << "\n"; }
    employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;
        Age > 20 ? nickName = "Mr" : nickName = "Noop";
    }
    void details() {
        cout << "Name: " << name << "\n";
        cout << "Work For: " << company << "\n";
        cout << age << " Years Old\n";
    }
};
int main()
{
    employee emp1("osama", "Google", 22);
    emp1.details();
    emp1.setSalary(10000);
    emp1.getSalary();
    emp1.getNick();
    cout << "\n####\n";
    employee emp2 = employee("moumin", "IBM", 21);
    emp2.details();
    emp2.setSalary(10000);
    emp2.getSalary();
    emp2.getNick();
    return 0;
}
