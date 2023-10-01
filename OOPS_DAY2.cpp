/* 

1. Encapsulation : Wraping up data members & functions into a single entity. 
Q. What is a Fully Encapsulated Class?
-> It is one type of class in which all the data members are marked as private members.
Q. Why Encapsulation?
-> With the help of this we can hide the data.
    we can make out class "Read only" by creating getter() only.
    Code Reusability increases.
    It helps us in Unit Testing.

2. Inheritance : It a feature which allows us to create a class from an existing class in such a way that the derived class can use all
                the properties of the existing class. The derived class is called as "child class" or "sub-class" & the existing class is 
                called as "parent class" or "super class".

--> Mode of inheritance:     Base class      Child class      Access possible or not

                        public             public             public
                        public             private            private
                        public             protected          protected

                        protected          public             protected
                        protected          private            protected
                        protected          protected          private

                        private            public             Can't access
                        private            private            Can't access
                        private            protected          Can't access

--> Types of inheritance: Single :- One child class is inherited from the base class.
                            
                        Multi-level :- From one base class(B) , a child class(C) is derived & now from that child class(C) another class
                                        is created(C1) from that another class(C2) ...... so on. This is known as Multi-level inheritance.

                        Multiple :- The child class is derived from 2 base classes. Ex: C is inherited from A, B.

                        Hybrid :- It is the combination of more than one inheritance.

                        Hierarchical :- From one base class more than one child class is derived is called as Hierarchical inheritance.

Q. What is Inheritance Ambiguity?
-> If the function name of base class & child class are same then, to solve this we use scope resolution operator & this is known as 
    inheritance ambiguity.

3. Polymorphism : When one thing is implemented as multiple things then, it is known as Polymorphism.
                    It is of 2 types: Static / Complie Time Polymorphism & Dynamic / Run Time Polymorphism.

--> Function overloading: Same name of the function but, the return type or input parameter differ.
--> Operator overloading: Refer documentation. Ex: Below

--> Method Overriding: Same name, input parameter of the function but different implementation. It dependes on the inheritance.

4. Abstraction : Showing only necessary things & hide the unnecessary things.
*/

#include<iostream>
using namespace std;

/*

// Operator overloading

class B
{
    public:
    int a;

    void operator+ (B &obj)
    {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

*/






/*

// Inheritance Ambiguity

class A
{
    public:
    void show()
    {
        cout << "This is class A" << endl;
    }
};
class B
{
    public:
    void show()
    {
        cout << "This is class B" << endl;
    }
};
class C: public A, public B
{
    public:
};

*/



/*

// Inheritance

class Human
{
    public:
        int weight = 5;
        float money = 554545.02;
        int age = 45;
    public:
        int getAge()
        {
            return this->age;
        }
        int setWeight(int w)
        {
            this -> weight  = w;
            return weight;
        }
};


class male: public Human
{
    public:
        string colour = "White";

        void sleep()
        {
            cout << "Male is inherited from Human." << endl;
        }
};

*/


/*

// Encapsulation

class student
{
    private:
        string name;
        int age;
        int weight;
    public:
        int getWeight()
        {
            return this -> weight;
        }
};

*/
int main()
{


/*

// Operator overloading

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();

*/

    /*
    // Inheritance Ambiguity

    C obj;
    // obj.show(); // Error
    obj.A :: show(); //Implement the function of class A
    obj.B :: show(); //Implement the function of class B

    */

    /*

    // Inheritance  

    male m1;
    cout << m1.age << endl;
    cout << m1.colour << endl;
    cout << m1.getAge() << endl;
    cout << m1.money << endl;
    cout << m1.weight << endl;
    m1.sleep();
    m1.setWeight(78);
    cout << m1.weight << endl;

    */


    /*

    // Encapsulation

    student s1;
    cout << "This is Encapsulation concept." << endl;
    
    */
    
    return 0;
}