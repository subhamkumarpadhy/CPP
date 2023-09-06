//If a function calls itself , then its known as recursion.

/*Its mandatory to write the base case & then write the recursive relation.
If we dont write the base case then segmentation fault will came which means 
out memory is full & it is overflowing.
-->Recursion Tree.
-->Theory of how recursion works.
-->Recursion has 3 parts,such as 
    1.Base case
    2.Recursive Relation
    3.Processing part*/
#include<iostream>
using namespace std;

//Factorial of a number
/*int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}*/

//Print 2^n
/*int power(int n)
{
    if(n==0)
    return 1;
    return 2*power(n-1);
}*/

//Printing number
void print(int n)
{
    if(n==0)
    return;
    //To print the number in decending order
    cout << n << endl;
    print(n-1);
    //To print the number in ascending order
    // cout << n << endl;
    return;
}
int main()
{
    int n;
    cin >> n;
    cout << endl;
    // cout << fact(n);
    // cout << power(n);
    print(n);
    return 0;
}