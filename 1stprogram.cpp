#include <iostream>
using namespace std;
int main()
{
    // cout << "Namaste Duniya" << endl;

    // int a = 24;
    // // int b = a + 1;

    // if (a > 20)
    // {
    //     cout << "Love";
    // }
    // else if (a == 24)
    // {
    //     cout << "Lovely";
    // }
    // else
    // {
    //     cout << "Babbar";
    // }
    // cout << a;
    // cout << "Namaste Duniya";
    // return 0;
    // a =cin.get();//to get input as space,enter....etc
    // cout << "The value of a is:" << a << endl;

    // char a;
    // cout << "Enter a" << endl;
    // cin >> a;
    // if (a >= 'A' && a <= 'Z')
    // {
    //     cout << "This is upper case" << endl;
    // }
    // else if (a >= 'a' && a <= 'z')
    // {
    //     cout << "This is lower case" << endl;
    // }
    // else if(a >= 0 && a <= 9);
    //     {
    //         cout << "This is numeric" << endl;
    //     }

    // int n;
    // cout << "Enter the value of n\n";
    // cin >> n;
    // int sum = 0, i =2;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 2;
    // }
    // cout << "The value of sum is"<< " " << sum << endl;

    // float F, C;
    // cout << "Enter the value of Ferhenite\n";
    // cin >> F;
    // C = ((F - 32) * 5) / 9;
    // cout << "The value of celcius from Ferhenite is \n" << C << endl;

    // int n;
    // cout << "Enter the value of n\n";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}