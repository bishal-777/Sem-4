//WAP to create a structure student having marks,roll no,name.Use pointer to print details of the student having highest marks

#include<iostream>

using namespace std;

struct Student{
    char name[50];
    int roll;
    float marks;
};


int main(){
    Student students[3];
    struct Student *str;
    str=&students[0];
	for(int i=0;i<3;i++)
	{
        cout<<"Enter name:"<<endl;
		cin>>students[i].name;
        cout<<"Enter marks:"<<endl;
		cin>>students[i].marks;
        cout<<"Enter roll number:"<<endl;
		cin>>students[i].roll;
	}

     cout<<"Student list:"<<endl;
	 for(int i=0;i<3;i++)
	 {
	 	cout<<students[i].name<<"\t";
	 	cout<<students[i].marks<<"\t";
	 	cout<<students[i].roll<<endl;
	 }

    for (int i=0;i<3; i++){
        if(students[i].marks<students[i+1].marks){
            str=&students[i+1];
        }
    }
    cout<<"Highest mark student:"<<endl;
    cout<<str->name<<endl;
    return 0;
}