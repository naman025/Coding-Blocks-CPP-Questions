/*BINARY TO DECIMAL*/
/*Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42*/

#include<iostream>
#include<math.h>
using namespace std;

int printDecimal(int N){
  int decimal = 0, i = 0;
  while(N!=0){
    decimal += pow(2,i)*(N%10);
    N/=10;
    i++;
  }
  cout<<decimal;
}

int main() {
    int N;
    cin>>N;
    printDecimal(N);
    return 0;
}
