/*FIBONACCI PATTERN (PATTERN 4)*/
/*Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format:
Constraints:
0 < N < 100

Output Format
Sample Input
4

Sample Output
0 
1    1 
2    3     5 
8   13    21    34*/

#include<iostream>
using namespace std;

int main() {

    int n, i = 0;
    cin>>n;
    int a[100];

    a[0] = 0;
    a[1] = 1;

    for(i = 2; i <= n*(n+1)/2; i++){
        a[i] = a[i-1] + a[i-2];
    } 

    i = 0;
    
    for(int j = 1; j <= n; j++){
        for(int k = 1; k <=j; k++){
            cout<<a[i]<<" ";
            i++;
        }
        cout<<endl;
    }

	return 0;
}
