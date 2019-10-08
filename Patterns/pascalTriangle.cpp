/*PASCAL TRIANGLE 1*/
/*Given an integer N, print Pascal Triangle upto N rows. 

Input Format:
Single integer N.

Constraints:
N <= 10

Output Format
Print pascal triangle.

Sample Input
4
Sample Output
           1
         1   1
       1   2   1
     1   3   3   1
*/

#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = n; i >= 1; i--)
        fact *= i;
    return fact;
}

int nCr(int n, int r){
    int nCr = fact(n)/(fact(n-r)*fact(r));
    return nCr;
}

int printPascal(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPascal(n);
	return 0;
}
