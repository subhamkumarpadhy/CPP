/*#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "src " << src << " dest " << dest << endl;
    if (src == dest)
    {
        cout << "Ghar aagaya ";
        return;
    }
    src++;
    reachHome(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;
    reachHome(src, dest);
    cout << endl;
}*/

// Number of ways to reach N-th stair
/*
#include <bits/stdc++.h>
int countDistinctWays(int nStairs)
{
    //  Write your code here.
    if (nStairs < 0)
        return 0;
    if (nStairs == 0)
        return 1;
    int ans = countDistinctWays(nStairs - 2) +
            countDistinctWays(nStairs - 1);
    return ans;
}*/
//Write the number in words
#include <iostream>
using namespace std;
void sayDigit(int n)
{
    if (n==0)
    {
        return;
    }
    
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int digit = n % 10;
    n = n / 10;

    sayDigit(n);
    
    cout << arr[digit] << " ";
}
int main()
{
    int num;
    cin >> num;
    sayDigit(num);
}