// Reference Variable
#include <iostream>
using namespace std;

int &func(int a) // The declaration of this function describes that return type of this function will be an reference type
{
    int num = a;
    int &ans = num;
    return ans;
}

int *fun(int n) // The declaration of this function describes that return type of this function will be an "int*" type
{
    int *ptr = &n;
    return ptr;
}

void update2(int &n) // it will update the value in main memory
{
    n++;
}

void update1(int n) // it won't update the value in main memory
{
    n++;
}

int main()
{

    /*
    int i = 5;

    //create a ref variable
    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

    int n = 5;
    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;

    fun(n);
    return 0;
}

// DMA
#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n]; // Declaration of dynamic array

    // takign input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "answer is " << ans << endl;

    // case 1
    while (true)
    {
        int i = 5;
    }

    // case 2
    while (true)
    {
        int *ptr = new int;
        delete ptr;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter row & col:";
    cin >> row >> col;

    // creating a 2D array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking output
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    // What learned in this chapter:-
    // how to create a 2D array dynamically
    // input/Output
    // memory free kaise karani hai
    return 0;
}

/*
// C++ Program to implement Jagged array
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    row = 3;

    // Create Row Array- dynamic array of pointers
    int** arr = new int*[row];

    int sizes[] = { 4, 2, 3 };
    // int *sizes= new int[row];
    // if taking row as input

    // no of columns for each row as input from user
    for (int i = 0; i < row; i++) {
        //cin>>col;	 //if col is taken as input
        / sizes[i]=col;
        // store each col number in size ( if row and col
        // are taken as input)

        *(arr + i) = new int[sizes[i]];
        // creating column of sizes[i] for each row
    }

    // input from user
    int num = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {

            // cin>>arr[i][j]; //if user want to input

            arr[i][j] = num++;
        }
    }

    cout << "elements in matrix form as follow" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
