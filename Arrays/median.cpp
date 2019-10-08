/*MEDIAN OF SORTED ARRAYS*/
/*We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

Input Format:
First line contains the input n. Second and Third line contains n space separated integers.

Constraints:
N < 1000

Output Format
Print the median in a single line.

Sample Input
5
1 3 5 7 9
2 4 6 8 10
Sample Output
5*/

#include<iostream>
using namespace std;

void merge(int arr[], int brr[], int n, int mergedArr[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n and j < n){
        if(arr[i] < brr[j]){
            mergedArr[k++] = arr[i++];
        }
        else{
            mergedArr[k++] = brr[j++];
        }
    }
    while(i < n){
        mergedArr[k++] = arr[i++];
    }
    while(j < n){
        mergedArr[k++] = brr[j++];
    }
}

int median(int arr[], int size){
    int centralIndex = (size/2)-1;
    return arr[centralIndex];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    for(int i = 0; i < n; i++)
        cin>>brr[i];
    int mergedArr[2*n];
    merge(arr, brr, n, mergedArr);
    cout<<median(mergedArr, 2*n)<<endl;
    return 0;
}
