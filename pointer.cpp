#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    cout << num << endl;

    // address of Operator - &

    cout << " address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

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
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    // copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;
    // cout <<  (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
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

     cout << "4th " << *arr << endl;
     cout << "5th " << *arr + 1 << endl;
     cout << "6th " << *(arr + 1) << endl;
     cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
     cout << "9th " << *(arr+2) << endl;

    int i = 3;
    cout << i[arr] << endl;


    int temp[10] = {1,2};
    cout << sizeof(temp) << endl;
    cout << " 1st " <<  sizeof(*temp) << endl;
    cout << " 2nd " <<  sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl ;
    cout << sizeof(*ptr) << endl ;
    cout << sizeof(&ptr) << endl ;



    int a[20] = {1,2,3,5};
    //cout << " ->" << &a[0] << endl;
   // cout << &a << endl;
    //cout << a << endl;

    int *p = &a[0];
    //cout << p << endl;
    //cout << *p << endl;
    cout << "-> " << &p << endl;

     */

    int arr[10];

    // ERROR
    // arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    // attention here
    cout << ch << endl;

    char *c = &ch[0];
    // prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

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
        << "Size : " << sizeof(arr) << endl;

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
    // kuch change hoga  - NO

    //*p2 = *p2 + 1;
    // kuch change hoga - YES

    **p2 = **p2 + 1;
    // kuch change hoga - YES
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

        cout<< endl << endl <<" Sab sahi chal rha h " << endl << endl ;

        cout << i << endl;
        cout << *p << endl;
        cout << **p2 << endl;

        cout << &i << endl;
        cout << p << endl;
        cout << *p2 << endl;

        cout << &p << endl;
        cout << p2 << endl;

        cout << endl << endl;
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