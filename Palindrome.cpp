

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int rev=0,temp=n;
    while(temp>0){
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
