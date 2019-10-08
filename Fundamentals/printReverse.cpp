/*PRINT REVERSE*/
/*Take N as input, Calculate it's reverse also Print the reverse.

Input Format:
Constraints:
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321
*/

#include<iostream>
using namespace std;
int main() {
    int n, reverse = 0;
    cin>>n;
    while(n!=0){
        reverse = (reverse*10) + n%10;
        n=n/10;
    }
    cout<<reverse;
	return 0;
}
