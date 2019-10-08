/*ARRAYS-INSERTION SORT*/
/*Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that insertion sorts the array. Print the elements of sorted array.

Input Format:
Constraints:
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
3
4
2
1
Sample Output
1
2
3
4*/

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void insertionSort(int arr[], int n){
    for(int i = 1, j; i < n; i++){
        int num = arr[i];
        for(j = i-1; j >= 0 and arr[j] > num; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = num;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    insertionSort(arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
