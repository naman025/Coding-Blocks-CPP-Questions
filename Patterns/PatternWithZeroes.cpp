/*PATTERN WITH ZEROS*/
/*Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Input Format:
Constraints:
0 < N < 100

Output Format
Sample Input
5
Sample Output
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5*/

#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cout<<i<<" ";
        int j=1;
        while(j<i-1){
            cout<<"0 ";
            j++;
        }
        if(i>1)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
