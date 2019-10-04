/*MANMOHAN LOVES PATTERNS- II*/
/*Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

Input Format:
Single integer N denoting number of lines of the pattern.

Constraints:
N<=1000

Output Format
Pattern.

Sample Input
5
Sample Output
1
11
202
3003
40004*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        if(n == 1){
            cout<<"1"<<endl;
            break;
        }
        if(i==0){
            cout<<"1"<<endl;
            continue;
        }
        cout<<i;
        for(int j = 1; j < i; j++ ){
            cout<<"0";
        }
        cout<<i;
        cout<<endl;
    }

	return 0;
}
