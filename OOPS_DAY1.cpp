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
                                        3) protected - 

--> We can access or read or manipulate a private data member outside the class with the help of Getter() && Setter().

--> When we create an object both in statically or in dynamically then in bts a default constructor is called.
    Ex:- if we write Hero kanha then in bts kanha.Hero() is called.
    If we write our custom constructor then the default constructor will die automatically.
    Constructors are 3 types :- 1) Default constructor
                                2) parameterized constructor
                                3) Copy constructor

--> 'this' is a keyword in cpp , which store the address of current object. So that means we can observe that,
    'this' is a pointer , which points to the address location of the current object.

--> Default copy constructor does shallow copy , where as custom copy constructor does Deep copy. In shallow copy we access the 
    same memory location with 2 different names but in Deep copy another copy is made of the given data & the new variable points
    to the copied data. 
    
--> Copy assignment operator "=": If object is already created & now you want to copy the value of one obj to another obj then 
                                    you will use the copy assignment operator to do so. Ex: a = b that means copy the values of b to a.
    
--> Destructor = It is used to free the memory. When the scope of a variable ends then the destructor is called to free up the memory.
                In case of statically created obj the destructor is automatically called but in case of dynamically created obj we have
                to call the destructor manually.
    
--> Static keyword: It creates a data member which belongs to a class & to access the member we don't need to create an object.
                    As long as you create a static member you have to initialize it from outside the class.
                    The syntax for initializing it is: [datatype className :: nameOfMember = value;] , where :: -> scope resolution operator
    
--> Static functions: No need to creating obj for accesing it. We can access it by it's class name only. They don't have 'this' keyword.
                    It only access the static members only. If we try to access the non-static members in this function then it will 
                    generate error.

--> Const keyword : It has to be initialized while declearing it. Ex: const int var = 9. If we don't initialize then we will get error.
                    More on gfg article: https://www.geeksforgeeks.org/const-keyword-in-cpp/

--> Initializer list in cpp: https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/

--> Padding, Member allignment, Data packing: https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/


    */


#include<iostream>
#include<cstring>
using namespace std;
class Hero
{
    // Properties or Data members
    private:
    int health;

    public:
    char level;
    char *name;
    static int complete;

    Hero()
    {
        cout << "I'm Constructor. " << endl;
        name = new char[100];
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
        char *ch = new char[strlen(mom.name) + 1];
        strcpy(ch, mom.name);
        this -> name = ch;
        cout << "Manual copy constructor called." << endl;
        this -> health = mom.health;
        this -> level = mom.level;
    }

    void print()
    {
        cout << endl;
        cout << " [ Health: " << this -> health << ", ";
        cout << "Level: " << this -> level << ", ";
        cout << "Name: " << this -> name << " ]";
        cout << endl << endl;
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

    void setName(char name[])
    {
        strcpy(this -> name, name);
    }

    // Creating a static function
    static int solve()
    {
        return complete;
    }

    // Created Destructor
    ~Hero()
    {
        cout << "Hi, I'm Destructor." << endl;
    }

};

// Initializing the static member
int Hero::complete = 6;

int main()
{

    // Accessing the static function
    cout << Hero::solve << endl;



    // Accessing the static member
    cout << Hero::complete << endl;



/* 

    // Concept of Destructor

    // Static
    Hero a;

    // Dynamic
    Hero *b = new Hero();
    delete b;

    */



/* 

    // Concept of shallow & deep copy

    Hero h1;
    h1.setHealth(78);
    h1.setLevel('O');
    char name[7] = "SUBHAM";
    h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'A';
    h1.print();
    h2.print();

    // (In the case of default copy constructor)
    // Here h2 also changes coz we define our variable "name"in the above as a pointer type.
    // So as h1 changes so h2 also changes.
    // So this concept is known is shallow copy.

    */



/*

    Hero y(67, 'O');
    y.print();

    // Copy constructor (Automatic/Default)
    Hero p(y);
    p.print();

*/



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