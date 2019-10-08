/*CHECK PRIME*/
/*Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format:
Constraints:
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime*/

#include<iostream>
using namespace std;
int main() {
    int n,i,flag = 0;
    cin>>n;
    if(n==1)
        cout<<"Not Prime";
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                cout<<"Not Prime";
                flag++;
                break;
            }
        }
        i--;
        if(flag==0){
            cout<<"Prime";
        }
    }
	return 0;
}
