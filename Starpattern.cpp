// square * pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 0;
//     while (i < n)
//     {
//         int j = 0;
//         while (j < n)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// square reverse order number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             // cout << j ;
//             cout << n - j + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Triangular * pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int count = 1;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Triangular number counting
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << count << " ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// 1,23,345,4567.......pattern column wise
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//          int j = 1;
//          int count = i;
//          while (j <= i)
//          {
//              cout << count << " ";
//              count = count + 1;
//              j = j + 1;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
//  Alternative of above
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//          int j = i;
//          while (j <= (2 * i)-1)
//          {
//              cout << j << " ";
//              j = j + 1;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
// Reverse number starting & ending at 1
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//          int j = 1;
//          while (j <=i)
//          {
//              cout << i - j + 1 << " ";
//              j = j + 1;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
// Square same row char pattern
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      char start = 'A';
//      while (i <= n)
//      {
//          int j = 1;
//          while (j <= n)
//          {
//              cout << start;
//              j = j + 1;
//          }
//          start = start +1;
//          cout<< endl;
//          i = i + 1;
//      }
//  }
// Alternative of above
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//          int j = 1;
//          while (j <= n)
//          {
//              char ch = 'A' + i - 1;
//              cout << ch;
//              j = j + 1;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
// Square same column
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//          int j = 1;
//          while (j <= n)
//          {
//              char ch = 'A'+ j - 1 ;
//              cout << ch ;
//              j = j + 1;
//          }
//          cout<<endl;
//          i = i + 1;
//      }
//  }
// Square char counting
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      char start = 'A';
//      while (i <= n)
//      {
//          int j = 1;
//          while (j <= n)
//          {
//              cout << start;
//              j = j + 1;
//              start = start + 1;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
// Square pattern ABC,BCD,CDE
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     char ch = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A' + i - 1;
//         while (j <= n)
//         {
//             cout << ch;
//             j = j + 1;
//             ch = ch + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Triangular pattern of same row
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     char ch = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A' + i - 1;
//         while (j <= i)
//         {
//             cout << ch;
//             j = j + 1;
//             // ch = ch + 1 ;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Triangular pattern of char counting
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      char ch = 'A';
//      while (i <= n)
//      {
//          int j = 1;
//          while (j <= i)
//          {
//              cout << ch ;
//              j = j + 1;
//              ch = ch + 1 ;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
// Triangular pattern of A,BC,CDE
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      char ch = 'A';
//      while (i <= n)
//      {
//          int j = 1;
//          char ch = 'A'+i+j-2;
//          while (j <= i)
//          {
//              cout << ch ;
//              j = j + 1;
//              ch = ch + 1 ;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
// Triangular pattern of D,CD,BCD,ABCD
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A' + n - i;
//         while (j <= i)
//         {
//             cout << ch;
//             j = j + 1;
//             ch = ch + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// printing star with space in the 1st side
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }
// }
// Opposite of above
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// opposite of above
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = i - 1;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int j = n - i + 1;
//         while (j > 0)
//         {
//             cout << "*";
//             j = j - 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Something special
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " " << " ";
//             space = space - 1;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << j << " ";
//             j = j + 1;
//         }
//         int start = i - 1;
//         while (start)
//         {
//             cout << start << " ";
//             start = start - 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Triangular pattern of printing row number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = i - 1;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int j = n - i + 1;
//         while (j > 0)
//         {
//             cout << i;
//             j = j - 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Triangular pattern of printing number start from row number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row & column number ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = i - 1;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int j = n - i + 1;
//         int k = 1;
//         int start = i + k - 1;
//         while (j > 0)
//         {
//             cout << start;
//             start = start + 1;
//             j = j - 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// Triangular pattern of printing row number(opposite of above)
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//          int space = n - i;
//          while (space)
//          {
//              cout << " ";
//              space = space - 1;
//          }
//          int j = 1;
//          while (j <= i)
//          {
//              cout << i;
//              j = j + 1;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
// Triangular pattern number count space 1st
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "Enter row & column number ";
//      cin >> n;
//      int i = 1;
//      int start = i;
//      while (i <= n)
//      {
//          int space = n - i;
//          while (space)
//          {
//              cout << " ";
//              space = space - 1;
//          }
//          int j = n - i + 1;
//          while (j <= n)
//          {
//              cout << start;
//              start = start + 1;
//              j = j + 1;
//          }
//          cout << endl;
//          i = i + 1;
//      }
//  }
//  DABANG PATTERN
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter row & column number ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int start = 1;
        int j = n - i + 1;
        while (j > 0)
        {
            cout << start << " ";
            j = j - 1;
            start = start + 1;
        }
        int space = ((2 * i) - 2);
        while (space)
        {
            cout << "*" << " ";
            space = space - 1;
        }
        int k = n - i + 1;
        while (k > 0)
        {
            cout << k << " ";
            k = k - 1;
        }
        cout << endl;
        i = i + 1;
    }
}
