/*REVISING QUADRATIC EQUATIONS*/
/*Given coefficients of a quadratic equation , you need to print the nature of the roots (real and distinct , real and equal , imaginary).

Input Format:
First contains three coefficients a,b,c from the equation ax^2 + bx + c = 0.

Constraints:
-100 <= a, b, c <= 100

Output Format
Output contains one/two lines.First line contains nature of the roots .The next line contains roots separated by a space if they exist. If roots are imaginary do not print the roots.

Sample Input
1 -11 28
Sample Output
Real and Distinct
4 7
*/

#include<iostream>
#include<math.h>
#define r1 (-b - discriminant)/(2*a)
#define r2 (-b + discriminant)/(2*a)
using namespace std;
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    float discriminant;
    discriminant = sqrt(pow(b,2)-(4*a*c));
	if(discriminant==0){
        cout<<"Real and Equal"<<endl;
        cout<<r1<<" "<<r2;
    }else if(discriminant > 0){
        cout<<"Real and Distinct"<<endl;
        cout<<r1<<" "<<r2;
    }else{
        cout<<"Imaginary"<<endl;
    }
    return 0;
}
