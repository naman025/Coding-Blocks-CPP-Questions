/*HOLLOW DIAMOND PATTERN*/
/*Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format:
Constraints:
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
*	*	* * *		  
*	*	  * *
*       *
* *   * *
* *	* * *
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i == 1 or i == n){
            for(int j = 1; j <= n; j++){
                cout<<"* ";
            }
            cout<<endl;
            continue;
        }
        if(i <= n/2+1){
            for(int j = i; j <= n/2+1; j++)
                cout<<"* ";
            for(int j = 1; j <= 2*i-3; j++)
                cout<<"  ";
            for(int j = i; j <= n/2+1; j++)
                cout<<"* ";
        }
        else{
            for(int j = 1; j <= i-n/2; j++)
                cout<<"* ";
            for(int j = 1; j <= 2*(n-i)-1; j++)
                cout<<"  ";
            for(int j = 1; j <= i-n/2; j++)
                cout<<"* ";
        }
        cout<<endl;
    }


	return 0;
}
