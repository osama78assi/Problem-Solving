#include <iostream>
using namespace std;

class car {
private:
    string type;
    string motor;
    int model;
public:
    car(string Type, int Model, string Motor) {
        type = Type;
        model = Model;
        motor = Motor;
    }
    //----------------------------------------------------------------*
    // Virtual Functions Sees If there Another Implementation For It  |
    // In Children Classes, It Will Execute The Children Function     |
    // If There No Implementation In Children Class The Method        |
    // In Super Class Will Be Executed                                |
    // If You Didn't Added Virtual Keyword Before Method Name         |
    // And Implemented In The Second Class Will Take The Method From  |
    // Super Class                                                    |
    //----------------------------------------------------------------*
    // Function For All Classes
    // Polymorphism One
    virtual void details() {
        cout << type << ", Produced In " << model << " With " << motor << " Capacity.\n";
    }
    // Polymorphism Two
    virtual void members() {
        cout << "Members: 2\n";
    }
};
class taxi: public car {
private:

public:
    taxi(string Type, int Model, string Motor)
    :car(Type, Model, Motor){}
    // The Super class Will Handel This Method If You Called It
    /*void members() {
        cout << "Members: 4\n";
    }*/
    // Polymorphism One Without Override Keyword
    void details() override {
        car::details();
    }

};
class bus:public car {
private:

public:
    bus(string Type, int Model, string Motor)
    : car(Type, Model, Motor){}
    void members() {
        cout << "Members: 14\n";
    }
    void details() override{
        car::details();
    }
};

int main() {
    car car1("Honda", 2010, "2200cc");
    taxi car2("Hyundai", 2005, "1400cc");
    bus car3 = bus("Scania", 2010, "17000cc");
    cout << "####################\n";
    car1.details();
    car2.details();
    car3.details();
    cout << "####################\n";
    //--------------------------------------------*
    // Used To Access Class By A Pointer From The |
    // Same Class Unlike The Dot Method           |
    //--------------------------------------------*
    car* t = &car2;
    car* c = &car3;
    //---------------------------------------------*
    // Father Pointer Hold Children Object Address |
    //---------------------------------------------*
    t->members(); // 2
    c->members(); // 14
    return 0;
}
