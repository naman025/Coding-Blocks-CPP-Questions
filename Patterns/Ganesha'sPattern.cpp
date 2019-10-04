/*卐 GANESHA'S PATTERN*/
/*Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Input Format:
Enter value of N ( >=5 )

Constraints:
N >= 5

Output Format
Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

*/

#include<iostream>
using namespace std;

int main() {
	
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i <= n/2){
            cout<<"*";
            for(int j = 1; j < n/2; j++)
                cout<<" ";
            if(i == 1){
                for(int j = 1; j <= (n/2+1); j++)
                    cout<<"*";
            }
            else
                cout<<"*";
            cout<<endl;
            continue;
        }
        else if(i == n/2+1){
            for(int j = 1; j <= n; j++)
                cout<<"*";
            cout<<endl;
            continue;
        }
        else if(i <= n){
            if(i == n){
                for(int j = 1; j <= n/2; j++)
                    cout<<"*";
            }
            for(int j = 1; j <= n/2 and i != n; j++)
                cout<<" ";
            cout<<"*";
            for(int j = 1; j < n/2; j++)
                cout<<" ";
            cout<<"*";
            cout<<endl;
        }

    }
    
    return 0;
}
