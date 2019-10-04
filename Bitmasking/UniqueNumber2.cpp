/*UNIQUE NUMBERS - II*/
/*We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format:
First line contains the number n. Second line contains n space separated number.

Constraints:
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3*/

#include<iostream>
using namespace std;

void printUnique(int arr[], int size){
    int Xor = arr[0];
    for(int i = 1; i < size; i++){
        Xor = Xor ^ arr[i];
    }

    int x = Xor;
    int pos = 0; 
    while(1){
        if(x & 1){
            break;
        }
        pos++;
        x = x>>1;
    }
    int f_unique = 0;
    int s_unique = 0;
    for(int i = 0; i < size; i++){
        int y = arr[i]>>pos;
        if(y & 1){
            f_unique = f_unique ^ arr[i];
        }
    }
    s_unique = f_unique ^ Xor;
    cout<<s_unique<<" "<<f_unique;
    return;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    printUnique(arr, n);
    return 0;
}
