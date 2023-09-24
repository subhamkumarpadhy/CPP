/* 

Q. What is an object?
-> An Object is an entity which have 2 things such as: 1) State/Property
                                                        2) Behaviour
Q. What is a class?
-> It is a user defined DataType.

--> If the class is empty then the size of the class is 1byte for identification\tracking of the class.
Q. How to access the Data members?
-> We can use the "." operator for accessing the data members.

--> There are 3 access modifier in Cpp : 1) public - we can access the data members from anywhere.
                                        2) private - we can access the data members only inside the class.
                                        3) protected

--> We can access or read or manipulate a private data member outside the class with the help of Getter() && Setter().

--> When we create an object both in statically or in dynamically then in bts a default constructor is called.
    Ex:- if we write Hero kanha then in bts kanha.Hero() is called.
    If we write our custom constructor then the default constructor will die automatically.
    Constructors are 3 types :- 1) Default constructor
                                2) parameterized constructor
                                3) Copy constructor

--> 'this' is a keyword in cpp , which store the address of current object. So that means we can observe that,
    'this' is a pointer , which points to the address location of the current object.

*/



#include<iostream>
using namespace std;
class Hero
{
    // Properties or Data members
    private:
    int health;

    public:
    char level;

    Hero()
    {
        cout << "I'm Constructor. " << endl;
    }

    Hero(int health)
    {
        this -> health = health;
    }

    Hero(int health , char level)
    {
        this -> level = level;
        this -> health = health;
    }

    // If we write manual copy constructor then the automatic copy constructor will die.
    Hero(Hero& mom)
    {
        cout << "Manual copy constructor called." << endl;
        this -> health = mom.health;
        this -> level = mom.level;
    }

    void print()
    {
        cout << "Health is " << this -> health << endl;
        cout << "Level is " << this -> level << endl;
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }
    void setHealth(int a)
    {
        health = a;
    }

    char getLevel()
    {
        return level;
    }
    void setLevel(char f)
    {
        level = f;
    }
};


int main()
{



    Hero y(67, 'O');
    y.print();

    // Copy constructor (Automatic/Default)
    Hero p(y);
    p.print();





    
    /*
    
    Hero kanha(89);
    cout << kanha.getHealth() << endl;


    Hero *sri = new Hero(45, 'S');
    cout << sri -> getHealth() << endl;
    cout << sri -> getLevel() << endl;

    */



    /*

    // Creating object statically
    Hero subham;

    // Setting the value
    subham.setHealth(56);
    subham.setLevel('C');

    // Getting the value or Printing the value
    cout << "Health in staticaly is : " << subham.getHealth() << endl;
    cout << "Level in statically is : " << subham.getLevel() << endl;
    cout << endl;

    // Creating object Dynamically
    Hero *h = new Hero;

    // Setting the value
    h->setHealth(65);
    h->setLevel('T');

    // Getting the value or Printing the value using '*'
    cout << "Health in Dynamically is : " << (*h).getHealth() << endl;
    cout << "Level in Dynamically is : " << (*h).getLevel() << endl;
    cout << endl;

    // Getting the value or Printing the value using '->'
    cout << "Health in Dynamically is : " << h -> getHealth() << endl;
    cout << "Level in Dynamically is : " << h -> getLevel() << endl;
    cout << endl;

    */


    
    /*

    subham.health = 98;
    cout << "Health is : " << subham.health << endl;

    subham.level = 'A';
    cout << "Level is : " << subham.level << endl;

    subham.setHealth(54);
    cout << "Health after set is : " << subham.getHealth() << endl;

    cout << "Size : " << sizeof(subham) << endl;

    */

    
    return 0;
}