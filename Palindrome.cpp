// Program to check a number is palindrome or not.

#include <iostream>
using namespace std;
// Main or root of the code
int main() {
    int n;
    cin>>n;// taking input
    
    int rev=0,temp=n; 
    while(temp>0){
        // If input is not 0 then
        rev = (rev*10)+(temp%10);
        temp=temp/10;
    }
    if(n==rev){
        cout<<n<<" is Palindrome";
    }else{
        cout<<n<<" is Not Palindrome";
    }
    return 0;
}
