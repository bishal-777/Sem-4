#include<iostream>

#define MAXSIZE 5

int queue[MAXSIZE];
int front = 0;
int rear = -1;

int num;

using namespace std;

void enqueue(int);
void dequeue();

void display();

bool isFull();
bool isEmpty();

int main(){
    int num, temp,op;

    do{
    cout<<"\n\n";
    cout<<"Press 1 if you want to enqueue!"<<endl;
    cout<<"Press 2 if you want to dequeue!"<<endl;
    cout<<"Press 3 if you want to display your queue!"<<endl;
    cout<<"Press 4 if you want to know the status of your linear queue!"<<endl;
    cout<<"Press 5 if you want to exit program!"<<endl;
    cin>>op;

    switch(op){

        case 1:
            cout<<"Enter the number you want to enqueue in your queue: ";
            cin>>num;
            enqueue(num);
            break;

        case 2:    
            dequeue();
            break;
        
        case 3:
            display();
            break;

        case 4:   
            if (isFull() == 1)
                cout<<"Queue is full!"<<endl;
            else if (isEmpty() == -1)
                cout<<"Queue is empty!"<<endl;
            else
                cout<<"Stack is netiher empty nor full"<<endl;
            break;        

        case 5:   
            cout<<"Extiting the program!";
            break;

        default:
            cout<<"Invalid option!";

    }

    }while(op != 5);
        
    return 0;
}


void enqueue(int num){
    if (rear >= MAXSIZE-1)
        cout<<"Queue Overflow"<<endl;
    else{
        rear++;
        queue[rear] = num;
        cout<<"Successfully added "<<num<<" in queue"<<endl;
    }
}

void dequeue(){
    if (rear < front)
        cout<<"Queue is empty"<<endl;
    else{
        int temp = queue[front];
        cout<<"Successfully removed "<<temp<<" from your queue"<<endl;
        front ++;
    }
}


void display(){
    if(rear < front)
        cout<<"Can't display, Queue is empty!"<<endl;
    else{
        cout<<"The elements of your queue are as follows:"<<endl;
        for (int i = front; i <= rear;i++)
            cout<<queue[i]<<"\t";
    }
}

bool isFull() {
    return ((rear + 1) % MAXSIZE) == front;
}

bool isEmpty() {
    return front == -1;
}