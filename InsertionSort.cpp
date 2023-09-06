#include<iostream>
using namespace std;

void insertionSort(int n, int *arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

int main()
{
    int arr[8] = {1,85,4,7,966,2,4,67};
    int n = 8;
    insertionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << i[arr] << " ";
    }
    
}