/*COUNT DIGITS*/
/*Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.

Input Format:
Integer (A number) Integer (A digit)

Constraints:
0 <= N <= 1000000000 0 <= Digit <= 9

Output Format
Integer (count of times digit occurs in the number)

Sample Input
5433231 
3
Sample Output
3*/

#include<iostream>
using namespace std;

int returnDigit(int N,int n){
    int count = 0;
    while(N){
        if(N%10==n){
            count++;
        }
        N/=10;
    }
    return count;
}

int main(){
    int N,n;
    cin>>N>>n;
    cout<<(returnDigit(N,n));
    return 0;
}
