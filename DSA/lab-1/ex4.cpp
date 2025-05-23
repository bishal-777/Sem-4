#include<iostream>

int fibo(int);

using namespace std;

int main(){
    int n,fibobo;
    cout<<"Enter the nth number:"<<endl;
    cin>>n;

    fibobo=fibo(n);
    cout<<"The"<<n<<"th fibonacci number is:"<<fibobo<<endl;
    return 0;
}

int fibo(int n){
    int a=0,b=1,c;
    
    for(int i=1;i<n;i++){
    c=a+b;
    a=b;
    b=c;        
    }
    
    return a;
}