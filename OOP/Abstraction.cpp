#include <iostream>
using namespace std;
// Abstraction Class
class abstractEmployee {
    // Method By It's Abstraction Form
    virtual void givePromotion()=0;
    virtual void giveBonus(int bonus)=0;
};
// Inherit From Abstract Class
// You Must Implement That Functions
// Like A Promise
class employee:abstractEmployee {
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
    void details() {
        cout << "Name: " << name << "\n";
        cout << "Work For: " << company << "\n";
        cout << age << " Years Old\n";
        cout << "Salary: " << salary << "$\n";
    }
    // First Promise (Function Override)
    void givePromotion() {
        cout << name << ": ";
        age >= 30 ? cout << "Got Promoted!\n" : cout << "Can't Promote!\n";
    }
    // Second Promise (Function Override)
    void giveBonus(int bonus) {
        int result = salary * (bonus * 1e-2);
        cout << "Salary For " << name << " After Bonus: " << salary+result << "\n";
    }
};
int main()
{
    employee emp1("osama", "Google", 32);
    emp1.details();
    // Use First Function
    emp1.givePromotion();
    // Use Second Function
    emp1.giveBonus(10);
    cout << "\n####\n";
    employee emp2 = employee("moumin", "IBM", 21);
    emp2.details();
    emp2.givePromotion();
    emp2.giveBonus(100);
    return 0;
}
