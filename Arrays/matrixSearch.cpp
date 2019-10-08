/*MATRIX SEARCH*/
/*Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

Input Format:
First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

Constraints:
1 <= N,M <= 30 0 <= A[i] <= 100

Output Format
Print 1 if the element is present in the matrix, else 0.

Sample Input
3 3
3 30 38
44 52 54
57 60 69
62
Sample Output
0*/

#include<iostream>
using namespace std;

bool searchNum(int arr[][30], int n, int m, int x){
        int first = 0;
        int last = m-1;
        while(first <= last){
            int mid = (first + last)/2;
            if(arr[n][mid] == x){
                return true;
            }
            else if(arr[n][mid] < x){
                first = mid + 1;
            }
            else if(arr[n][mid] > x){
                last = mid - 1;
            }
        }
        return false;
}

int main(){

    int n,m;
    cin>>n>>m;
    
    int arr[30][30];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    for(int i = 0; i < n; i++){
        if(searchNum(arr, i, m, x)){
            cout<<"1";
            return 0;
        }
    }
    cout<<"0";
    return 0;
}
