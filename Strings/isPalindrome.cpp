/*IS PALINDROME?*/
/*Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format:
Enter a number N , add N more numbers

Constraints:
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true*/

#include <iostream>
using namespace std;

bool checkPallindrome(char str[], int size, int ptr){
    if(ptr == size / 2){
        return true;
    }
    bool rest_of_string = checkPallindrome(str, size, ptr + 1);
    if(rest_of_string and str[ptr] == str[size - ptr - 1]){
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    char str[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>str[i];
    }
    cout<<(checkPallindrome(str, size, 0) ? "true":"false");
    return 0;
}
