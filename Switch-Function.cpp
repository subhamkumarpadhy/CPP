// SWITCH CASE//
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = '1';
//     int num = 1;
//     cout << endl;
//     switch (num)
//     {
//     case 1:
//         cout << "First " << endl;
//         cout << "First again " << endl;
//         break;
//     case '1':
//         switch (num)
//         {
//         case 1:
//             cout << "Value of num is " << num << endl;
//             break;
//         default:
//             cout << "It is default case" << endl;
//         }
//     default:
//         cout << "It is default case" << endl;
//         cout << endl;
//     }
// }
// Basic Calculator
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a & b " << endl;
//     cin >> a >> b;
//     char op;
//     cout << "Enter the operation you want " << endl;
//     cin >> op;
//     switch (op)
//     {
//     case '+':
//         cout << "The answer is " << (a + b) << endl;
//         break;
//     case '-':
//         cout << "The answer is " << (a - b) << endl;
//         break;
//     case '*':
//         cout << "The answer is " << (a * b) << endl;
//         break;
//     case '/':
//         cout << "The answer is " << (a / b) << endl;
//         break;
//     case '%':
//         cout << "The answer is " << (a % b) << endl;
//         break;
//     default:
//         cout << "Enter a valid operatrion " << endl;
//     }
// }
// How many notes required for a given amount//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the Amount:->";
//     cin >> n;
//     int amount = 0;
//     int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//     switch (1)
//     {
//     case 1:
//         count1 = (n / 100);
//         amount = n - (100 * count1);
//     case 2:
//         count2 = (amount / 50);
//         amount = amount - (50 * count2);
//     case 3:
//         count3 = (amount / 20);
//         amount = amount - (20 * count3);
//     case 4:
//         count4 = (amount / 1);
//         amount = amount - (1 * count4);
//         break;
//     }
//     cout << "The number of 100 ruppes notes are:->" << count1 << endl;
//     cout << "The number of 50 ruppes notes are:->" << count2 << endl;
//     cout << "The number of 20 ruppes notes are:->" << count3 << endl;
//     cout << "The number of 1 ruppes notes are:->" << count4 << endl;
//     return 0;
// }
// FUNCTIONS//
// Value of power of a number
//  #include <iostream>
//  using namespace std;
//  int power(int a, int b)
//  {
//      int ans = 1;
//      for (int i = 1; i <= b; i++)
//      {
//          ans = ans * a;
//      }
//      return ans;
//  }
//  int main()
//  {
//      int a, b;
//      cout << "Enter the value of a & b " << endl;
//      cin >> a >> b;
//      int ans = power(a, b);
//      cout << "The answer is " << ans << endl;
//      return 0;
//  }
// Number is even or odd
// #include <iostream>
// using namespace std;
// bool isEven(int num)
// {
//     if (num & 1)
//     {
//         return 0;//odd
//     }
//     return 1;//even
// }
// int main()
// {
//     int num;
//     cout << "Enter the number ";
//     cin >> num;
//     // isEven(num);
//     if (isEven(num) == 1)
//     {
//         cout << num << " is even! " << endl;
//     }
//     else
//     {
//         cout << num << " is odd! " << endl;
//     }
//     return 0;
// }
// Finding the value of ncr;
/*#include <iostream>
using namespace std;
int factorial(int n)
{
    int a = 1;
    for (int i = n; i >= 1; i--)
    {
        a = (n * factorial(n-1));
    }
    return a;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return num / denom;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r " << endl;
    cin >> n >> r;
    cout << "Answer is " << nCr(n, r) << endl;
}*/
// Prime number or not
/*#include<iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    isPrime(n);
    if (isPrime(n))
    {
        cout << "The number is prime " << endl;
    }
    else
    {
        cout << "The number is not prime " << endl;
    }
    return 0;
}*/
// Total number of set bits
/*#include <iostream>
#include <math.h>
using namespace std;
int bitConverter(int n)
{
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (ans * 10) + bit;
        n = n >> 1;
        i = i + 1;
    }
    return ans;
}
int BitCounter(int n)
{
    int num = bitConverter(n);
    int ans = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 1)
        {
            ans = ans + digit;
        }
        num = num / 10;
    }
    return ans;
    return num;
}
int main()
{
    int a, b;
    cout << "Enter the Value of A and B" << endl;
    cin >> a;
    cin >> b;
    int answer = BitCounter(a) + BitCounter(b);
    cout << answer;
}*/
// Finding the value of AP
/*#include<iostream>
using namespace std;
int ap(int n){
    int ans = 1;
    ans = ((3 * n) +7);
    return ans;
}
int main(){
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    cout << "The answer is " << ap(n) << endl;
    return 0;
}*/
// Fibonacchi number
/*#include <iostream>
using namespace std;
int fibonnaciSeries(int n)
{

    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int main()
{
    int n;
    cout << "Enter the value of N: " << endl;
    cin >> n;
    cout << "The fibonnaci number is " << fibonnaciSeries(n) << endl;;
}*/
// #include<iostream>
// using namespace std;
// int update(int a)
// {
//     int ans = (a * a);
//     return ans;
// }
// int main(){
//     int a = 14;
//     a = update(a);
//     cout << a << endl;
// }