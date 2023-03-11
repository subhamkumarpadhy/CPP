#include <iostream>
using namespace std;
int main()
{
    // int a = 4;
    // int b = 6;
    // Bit wise operator
    // cout << " a&b " << (a & b) << endl;
    // cout << " a|b " << (a | b) << endl;
    // cout << " ~a " << ~a << endl;
    // cout << " a^b " << (a ^ b) << endl;

    // Left and right shift operator
    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;
    // cout << (19 << 1) << endl;
    // cout << (19 << 2) << endl;

    // Increment and Decrement operator examples
    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout << b << endl;
    // cout << c;

    // For loop examples
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            // if (i + j == 10)
            // {
            //     break;
            // }
            cout << i << " " << j << endl;
        }
    }
}
// Printing fibonacchi numbers
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = 0;
//     int b = 1;
//     cout << a << " " << b << " ";
//     for (int i = 0; i < n - 2; i++)
//     {
//         int ans = a + b;
//         cout << ans << " ";
//         a = b;
//         b = ans;
//     }
// }