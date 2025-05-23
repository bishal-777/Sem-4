//WAP to print nth fibonacci number
#include<iostream>

using namespace std;

int main(){
    int n,a=0,b=1,c;

    cout<<"Enter the nth term:"<<endl;
    cin>>n;

    for (int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<a<<endl;
    return 0;
}