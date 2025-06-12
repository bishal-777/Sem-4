#include<iostream>

#define MAXSIZE 5

int cqueue[MAXSIZE];
int front = -1;
int rear = -1;

int num;

using namespace std;

void enqueue(int);
void dequeue();

void display();

bool isFull();
bool isEmpty();

int main(){
    int op;

    do{
    cout<<"\n\n";
    cout<<"Press 1 if you want to enqueue!"<<endl;
    cout<<"Press 2 if you want to dequeue!"<<endl;
    cout<<"Press 3 if you want to display your queue!"<<endl;
    cout<<"Press 4 if you want to know the status of your circular queue!"<<endl;
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


bool isFull() {
    return ((rear + 1) % MAXSIZE) == front;
}

bool isEmpty() {
    return front == -1;
}

void enqueue(int data) {
    if (isFull()) {
        cout << "Queue Overflow! Cannot insert " << data << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear = (rear + 1) % MAXSIZE;
    cqueue[rear] = data;
    cout << data << " pushed to queue." << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow! Queue is empty." << endl;
        return;
    }
    cout << cqueue[front] << " popped from queue." << endl;
    if (front == rear) {
        // Queue has only one element, reset after dequeue
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAXSIZE;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty. Nothing to display." << endl;
        return;
    }
    cout << "Elements in queue: ";
    int i = front;
    while (true) {
        cout << cqueue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAXSIZE;
    }
    cout << endl;
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is empty. No element to peek." << endl;
    } else {
        cout << "Front element is: " << cqueue[front] << endl;
    }
}