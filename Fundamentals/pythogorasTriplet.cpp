/*PYTHAGORAS TRIPLET*/
/*Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".

Input Format:
A single integer N

Constraints:
N <= 10^9

Output Format
Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.

Sample Input
3
Sample Output
4 5*/

#include<iostream>
using namespace std;

int main() {
    long long int N;
    cin>>N;
    if(N==0||N==1){
        cout<<"-1";
    }
    else if(N%2==0){
        long long int m,n;
        m=N/2;
        n=1;
        long long int a,b,c;
        a=(m*m)-(n*n);
        b=2*m*n;
        c=(m*m)+(n*n);
        if((a*a)+(b*b)==(c*c)){
            cout<<a<<" "<<c;
        }
        else    
            cout<<"-1";
    }
    else{
        long long int m,n;
        m=(N+1)/2;
        n=(N-1)/2;
        long long int a,b,c;
        a=(m*m)-(n*n);
        b=2*m*n;
        c=(m*m)+(n*n);
        if((a*a)+(b*b)==(c*c)){
            cout<<b<<" "<<c;
        }
        else
            cout<<"-1";
    }
	return 0;
}
