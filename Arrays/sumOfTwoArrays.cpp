/*ARRAYS-SUM OF TWO ARRAYS*/
/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Input Format:
Constraints:
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr1[100] = {0};
    for(int i = 100-n; i < 100; i++)
        cin>>arr1[i];
    // for(int i = 0, count = 0; i < 100; i++){
    //     if(arr1[i] == 0 and count == 0){
    //         continue;
    //     }
    //     count++;
    //     cout<<arr1[i];
    // }
    // cout<<endl;
    int m;
    cin>>m;
    int arr2[100] = {0};
    for(int i = 100-m; i < 100; i++)
        cin>>arr2[i];
    // for(int i = 0, count = 0; i < 100; i++){
    //     if(arr2[i] == 0 and count == 0){
    //         continue;
    //     }
    //     count++;
    //     cout<<arr2[i];
    // }
    // cout<<endl;

    int carry = 0;
    int ans[100] = {0};
    for(int i = 99; i >= 0; i--){
        // if(ans[i] == 0 and count == 0){
        //     continue;
        // }
        // count++;
        ans[i] = arr1[i]+arr2[i]+carry;
        carry = ans[i]/10;
        ans[i] %= 10;

    }
    for(int i = 0, count = 0; i < 100; i++){
        if(ans[i] == 0 and count == 0){
            continue;
        }
        else{
            count++;
            cout<<ans[i]<<", ";
        }
    }
    cout<<"END";
	return 0;
}
