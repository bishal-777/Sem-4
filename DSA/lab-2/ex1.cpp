#include<iostream>

#define MAXSIZE 5

int stack[MAXSIZE];
int top = -1;

using namespace std;

void push(int);
void pop();
int isFull();
int isEmpty();
void peek();
void display();


int main(){
    int num, temp,op;

    do{
    cout<<"\n\n";
    cout<<"Press 1 if you want to push!"<<endl;
    cout<<"Press 2 if you want to pop!"<<endl;
    cout<<"Press 3 if you know if your stack is full!"<<endl;
    cout<<"Press 4 if you know if your stack is empty!"<<endl;
    cout<<"Press 5 if you want to peek at your stack!"<<endl;
    cout<<"Press 6 if you want to display your stack!"<<endl;
    cout<<"Press 7 if you want to exit program!"<<endl;
    cin>>op;

    switch(op){

        case 1:
            cout<<"Enter the number you want to push in your stack: ";
            cin>>num;
            push(num);
            break;

        case 2:    
            pop();
            break;
        
        case 3:
           temp = isFull();
            if (temp == 1)
                cout<<"Stack is full"<<endl; 
            else
                cout<<"Stack is not full"<<endl;
            break; 

        case 4:
           temp = isEmpty();
            if (temp == 1)
                cout<<"Stack is empty"<<endl; 
            else
                cout<<"Stack is not empty"<<endl;
            break;
        
        case 5:
            peek();    
            break;

        case 6:   
            display();
            break;

        case 7:   
            cout<<"Extiting the program!";
            break;        

        default:
            cout<<"Invalid option!";

    }

    }while(op != 7);
        
    return 0;
}

int isEmpty(){
    if (top == - 1) 
        return 1;
    else
        return 0;
}

int isFull(){
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

void push(int a){
    if (top == MAXSIZE -1)
        cout<<"Can't push "<<a<<".Stack Overflow!"<<endl;
    else{
        top++;
        stack[top] = a;
        cout<<"Sucessfully pushed "<<a<<" into stack"<<endl;
    }
}

void pop(){
    if (top == -1)
        cout<<"Can't pop, Stack Underflow!"<<endl;
    else{
        int temp = stack[top];
        top--;
        //stack[top] = NULL;
        cout<<"Sucessfully popped "<<temp<<" from stack"<<endl;
    }
}

void peek(){
    if (top == -1)
        cout<<"Can't peek, Stack Underflow!"<<endl;
    else
        cout<<"The top element is "<<stack[top]<<endl;
}

void display(){
    if(top == -1)
        cout<<"Can't display, Stack Underflow!"<<endl;
    else{
        cout<<"The elements of your stack are as follows:"<<endl;
        for (int i = top;i >= 0;i--)
            cout<<stack[i]<<endl;
    }


}