/*PRINT SERIES*/
/*Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

Input Format:
Constraints:
0 < N1 < 100 0 < N2 < 100

Output Format
Sample Input
10 
4

Sample Output
5 
11 
14 
17 
23 
26 
29 
35 
38 
41
*/

#include<iostream>
#define n (3*i + 2)
using namespace std;

int main() {
	int N1, N2;
    cin>>N1>>N2;
    for(int i = 1, j = 1 ; j <= N1 ; i++){
        if(n%N2==0){
            continue;
        }
        cout<<n<<endl;
        j++;
    }
    return 0;
}
