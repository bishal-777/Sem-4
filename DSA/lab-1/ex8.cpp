/*
swap two numbers using:
a)pass by value
*/

#include<iostream>

void swap(int,int);

using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter any two numbers:"<<endl;
    cin>>num1>>num2;
    swap(num1,num2);
    return 0;
}

void swap(int n1 ,int n2){
    int temp=0;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"Swapped two numbers:"<<n1<<"\t"<<n2<<endl;
}