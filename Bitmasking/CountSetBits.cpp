/*COUNT SET BITS*/
/*Count number of 1s in binary representation of an integer

Input Format:
Input N = Number of Test Cases, followed by N numbers

Constraints:
Output Format
Number of Set Bits in each number each in a new line

Sample Input
3
5
4
15

Sample Output
2
1
4*/

#include <iostream>
using namespace std;

int countSetBits(int n){
    int count = 0;
    while(n){
        if(n & 1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        cout<<countSetBits(n)<<endl; 
        t--;
    }
    return 0;
}
