// Decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // For -ve integers
    if (n < 0)
    {
        int i = 0, x;
        int ans = 0;
        n = n * (-1);
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i++;
            x = (~ans);
            x = x + 1;
        }
        cout << "Answer is " << x << endl;
    }
    // For +ve integers
    else
    {
        int i = 0;
        int ans = 0;
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
        cout << "Answer is " << ans << endl;
    }
}
/*Binary to decimal
// #include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 0, n, x;
    cin >> n;
    int ans = 0;
    //For negative binary numbers
    if (n < 0)
    {
        n = n * (-1);
        while (n != 0)
        {
            int digit = n % 10;
            if (digit == 1)
            {
                ans = pow(2, i) + ans;
            }
            n = n / 10;
            i++;
            x = (~ans);
            x = x + 1;
        }
        cout << "Answer is " << x << endl;
}
            //For positive binary numbers
    else
    {
        while (n != 0)
        {
            int digit = n % 10;
            if (digit == 1)
            {
                ans = pow(2, i) + ans;
            }
            n = n / 10;
            i++;
        }
        cout << "Answer is " << ans << endl;
    }
}*/
