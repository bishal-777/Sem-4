/*
swap two numbers using:
b)pass by reference
*/

#include<iostream>

void swap(int *n1,int *n2);

using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter any two numbers:"<<endl;
    cin>>num1>>num2;
    swap(&num1,&num2);
    cout<<"Swapped two numbers:"<<num1<<"\t"<<num2<<endl;
    return 0;
}

void swap(int *n1 ,int *n2){
    int temp=0;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}