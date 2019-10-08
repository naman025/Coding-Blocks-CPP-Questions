/*DECIMAL TO OCTAL*/
/*Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77*/

#include<iostream>
#include<math.h>
using namespace std;

int reverse(int N){
    int rev = 0;
    while(N!=0){
        rev=rev*10 +N%10;
        N/=10;
    }
    return rev;
}

int returnOctal(int N){
    int octal = 0;
    while(N!=0){
        octal = octal*10 + N%8;
        N/=8;
    }
    octal = reverse(octal);
    return octal;
}

int main(){
    int N;
    cin>>N;
    cout<<returnOctal(N);
    return 0;
}
