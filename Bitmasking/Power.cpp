/*POWER(O(LOGN))*/
/*Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn). NOTE: Try both recursive and bitmasking approach.

Input Format:
Enter the number N and its power P

Constraints:
None

Output Format
Display N^P

Sample Input
2
3
Sample Output
8*/

#include <iostream>
using namespace std;

int power(int n, int p){
    int pow = 1;
    while(p){
        if(p&1){
            pow = pow * n;
        }
        n = n*n;
        p = p>>1;
    }
    return pow;
}

int main(int argc, char const *argv[])
{
    int n, p;
    cin>>n>>p;
    cout<<power(n, p);
    return 0;
}
