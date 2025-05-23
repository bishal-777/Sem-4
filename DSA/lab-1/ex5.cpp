#include<iostream>

using namespace std;

int main(){
    int num,num2=0,num3,rem;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    num3=num;
    while(num!=0){
        rem=num%10;
        num2=num2*10+rem;
        num/=10;        
    }
    if(num3==num2){
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<"Not Palindrome!"<<endl;
    }

    return 0;
}