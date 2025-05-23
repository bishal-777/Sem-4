/*
Print the pattern:
*******
 *****
  ***
   *
*/

#include<iostream>

using namespace std;

int main(){
    int n=0,i,j;
    for (i=0;i<4;i++){
        
        for(j=4-i;j<4;j++){
            cout<<" ";
        }

        for(j=7-i*2;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}