/*HOLLOW RHOMBUS PATTERN*/
/*Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format:
Single integer N.

Constraints:
N <= 20

Output Format
Print pattern.

Sample Input
5

Sample Output
    *****
   *   *
  *   *
 *   *
*****

*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++)
            cout<<" ";
        if(i == 1 or i == n){
            for(int j = 1; j <= n; j++){
                cout<<"*";
            }
            cout<<endl;
            continue;
        }
        cout<<"*";
        for(int j = 1; j < n-1; j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

	return 0;
}
