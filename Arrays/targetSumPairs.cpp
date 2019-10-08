/*ARRAYS-TARGET SUM PAIRS*/
/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format:
The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.

Constraints:
Length of the arrays should be between 1 and 1000.

Output Format
Print all the pairs of numbers which sum to target. Print each pair in increasing order.

Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);

    int target;
    cin>>target;

    int left_ptr = 0, right_ptr = n-1;

    while(left_ptr < right_ptr){
        int sum = arr[left_ptr] + arr[right_ptr];
        if(sum == target){
            cout<<arr[left_ptr]<<" and "<<arr[right_ptr];
            cout<<endl;
            left_ptr++;
            right_ptr--;
            continue;
        }
        else if(sum > target){
            right_ptr--;
        }
        else{
            left_ptr++;
        }
    }

    return 0;
}
