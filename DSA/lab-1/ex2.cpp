//WAP to check whether yhe input number is prime or not

#include <iostream>

using namespace std;

int main(){
    int num;
    bool is_prime=true;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    for (int i=2;i<num;i++){
        if (num%i==0){
            is_prime=false;
            break;
        }

    }
        if (is_prime==true){
            cout<<"Prime number!"<<endl;
        }
        else{
            cout<<"Not prime number!"<<endl;
        }

    return 0;
}