#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    cout << num << endl;

    // address of Operator - &

    cout << " address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl; //it prints the address of num variable
    cout << "value is : " << *ptr << endl; //it prints the value inside num

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    // pointer to int is created, and pointing to some garbage address
    // int *p = 0;

    // cout << *p << endl;

    /*
    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */

    int num = 5;
    int a = num;
    cout << "Before increment " << num << endl; //5
    a++;
    cout << "After increment " << num << endl; //5
    //it is coz "num" is not modified, only 'a' is modified. Both are different variables.

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++; // increment the value, which is inside num
    cout << "after " << num << endl;

    // copying a pointer
    int *q = p; //address of q = address of p
    cout << p << " - " << q << endl; //same address
    cout << *p << " - " << *q << endl; //same value

    // important concept
    int i = 3;
    int *t = &i;
    // cout <<  (*t)++ << endl;
    *t = *t + 1; // it increment the value, which is pointed by 't'
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1; //it will increment by 4 bytes coz 'int' takes 4 bytes
    cout << " after t " << t << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    // int arr[10] = {23, 122, 41, 67};

    /*
    cout <<" address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout <<" address of first memory block is " << &arr[0] << endl;

     cout << "4th " << *arr << endl; //prints value inside arr[0]
     cout << "5th " << *arr + 1 << endl; //increment the value inside arr[0]
     cout << "6th " << *(arr + 1) << endl; //prints the value present at arr[1]
     cout << "7th " << *(arr) + 1 << endl; //increment the value inside arr[0]
    cout << "8th " << arr[2] << endl;
     cout << "9th " << *(arr+2) << endl; //prints the value present at arr[2]

    int i = 3;
    cout << i[arr] << endl; //prints the value present at arr[3]


    int temp[10] = {1,2};
    cout << sizeof(temp) << endl; // it should be 40bytes coz "int" takes 4 bytes & total number of locations are 10
    cout << " 1st " <<  sizeof(*temp) << endl; //'int' takes 4bytes
    cout << " 2nd " <<  sizeof(&temp) << endl; //pointer takes 8bytes

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl ;
    cout << sizeof(*ptr) << endl ;
    cout << sizeof(&ptr) << endl ;



    int a[20] = {1,2,3,5};
    //cout << " ->" << &a[0] << endl; // All 3 points to the same location
    //cout << &a << endl;
    //cout << a << endl;

    int *p = &a[0];
    //cout << p << endl;
    //cout << *p << endl;
    cout << "-> " << &p << endl;

     */

    int arr[10];

    // ERROR
    // arr = arr+1; //we can not do it.

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1; //it will increment by 4 bytes, coz it is an integer type pointer
    cout << ptr << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl; //it will prints the memory address of arr[0]
    // attention here
    cout << ch << endl; //it will print the entire string, untill it gets a null char.

    char *c = &ch[0];
    // prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; //it will print 'z', then it prints the string present in memory coz 
    // there is not a null char to stop it's execution.So if you want to just print 'z' then we 
    // have to add a null char in "temp" to terminate the process.

    return 0;
}
#include <iostream>
using namespace std;

void print(int *p)
{

    cout << *p << endl;
}

void update(int *p)
{

    // p = p + 1;
    // cout << "inside "<< p <<endl;
    *p = *p + 1;
}

int getSum(int *arr, int n)
{

    cout << endl
        << "Size : " << sizeof(arr) << endl; //it prints 8 coz arr is pointed to arr[0] location, which is a address of 8bytes

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    /*
        int value = 5;
        int *p = &value;

        //print(p);
        cout <<" Before " << *p << endl;
        update(p);
        cout <<" After " << *p << endl;
        */

    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum is " << getSum(arr + 3, 3) << endl;

    return 0;
}
#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;
    // kuch change hoga  - YES, but the change happened only inside update() function not in main()

    //*p2 = *p2 + 1;
    // kuch change hoga - YES & changes happened in main()

    **p2 = **p2 + 1;
    // kuch change hoga - YES & changes happened in main()
}
void update(int *p)
{
    *p = (*p) * 2;
}
void increment(int **p)
{
    ++(**p);
}
int main()
{
    /*
        int i = 5;
        int* p = &i;
        int** p2 = &p;

        cout<< endl <<"Sab sahi chal rha h:-" << endl ;

        //it will print 5 in all 3 cout statements
        cout << i << endl;
        cout << *p << endl;
        cout << **p2 << endl;

        //it will print address of 'i' in all 3 cout statements
        cout << &i << endl;
        cout << p << endl;
        cout << *p2 << endl;
        cout << endl;

        //it will print address of pointer 'p' in both cout statements
        cout << &p << endl;
        cout << p2 << endl;

        cout << endl;
        cout<< "before " << i << endl;
        cout<< "before " << p << endl;
        cout<< "before " << p2 << endl;
        update(p2);
        cout<< "after " << i << endl;
        cout<< "after " << p << endl;
        cout<< "after " << p2 << endl;
        cout << endl << endl;
        */

    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;

    return 0;
}
/*

//  Pointer MCQ's

    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;

    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;

    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;

    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout  << first << "  " << second << endl;

    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;

    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;

    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;

    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;

    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;

    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);

    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;

    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;

    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;

    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;

    char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;


    void update(int *p){
        *p = (*p)  *  2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;
    }

    void fun(int arr[]) {
        cout << arr[0] << " ";
    }

    int main() {
        int arr[] = {11, 12, 13, 14};
        fun(arr + 1);
        cout << arr[0] << endl;
    }

    void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);
    }

    int main(){
        int a = 70;
        square(&a);
        cout << a << endl;
    }


    int first = 10;
    int *p = &a;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;

    void increment(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;
    }

    int main()
    {
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;
    return 0;
    }

    int main()
    {
        char *p;
        char str[] = "pqrstuv";
        p = str;
        p += 3;
        cout << p;
        return 0;
    }

    int main()
    {
        char arr[20];
        int i;
        for(i = 0; i < 10; i++) {
            *(arr + i) = 65 + i;
        }
        *(arr + i) = '\0';
        cout << arr;
        return 0;
    }

    int main()
    {
        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
        float *ptr1 = &arr[0];
        float *ptr2 = ptr1 + 3;
        cout<<*ptr2<<" ";
        cout<< ptr2 - ptr1;
        return 0;
    }

    int main() {
        char st[] = "ABCD";
        for(int i = 0; st[i] != ‘\0’; i++) {
            cout << st[i] << *(st)+i << *(i+st) << i[st];
        }
        return 0;
    }

    void Q(int z)
    {
        z += z;
        cout<<z << " ";
    }

    void P(int *y)
    {
        int x = *y + 2;
        Q(x);
        *y = x - 1;
        cout<<x << " ";
    }

    int main()
    {
        int x = 5;
        P(&x);
        cout<<x;
        return 0;
    }

    int main()
    {
        int ***r, **q, *p, i=8;
        p = &i;
        (*p)++;
        q = &p;
        (**q)++;
        r = &q;
        cout<<*p << " " <<**q << " "<<***r;
        return 0;
    }

    int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x + y + z;
    }

    int main() {
        int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);
        return 0;
    }
*/