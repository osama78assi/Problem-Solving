#include <iostream>

class A
{
public:
    void print()
    {
        std::cout << "this is A A A." << std::endl;
    }
};

class B : public A
{
public:
    void print()
    {
        std::cout << "this is B B B." << std::endl;
    }
};

class C : public A
{
public:
    void print()
    {
        std::cout << "this is C C C." << std::endl;
    }
};

int main()
{
    A *a = new A;
    B *b = new B;

    a->print(); // this is A A A.
    b->print(); // this is B B B.

    a = new B; // parent class reference points to child class object

    a->print(); // this is A A A. eventhough it is B object; "we assigned new B to the pointer a",
                // shouldn't it print "this is B B B." ?
                // here comes 'virtual' keyword's job

    std::cout << "......................" << std::endl;

    A *array[3]; // this doesn't work without polymorphism !!!.

    array[0] = new A;
    array[1] = new B;
    array[2] = new C;

    for (int i = 0; i < 3; i++)
        array[i]->print(); // this will print only "this is A A A." without the virtual keyword.
}
