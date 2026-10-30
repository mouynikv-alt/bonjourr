#include<iostream>
using namespace std;
//global Varaible
int id[10];
string name[10];
string gender[10];
float salary[10];
string position[10];

void Input(int n){
	
	cout<<"\n";
	cout<<"<============Input Data=========>\n";
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<==========Employee["<<i+1<<"]==========>\n";
		cout<<"Enter ID			: ";cin>>id[i];
		cout<<"Enter Name		: ";cin>>name[i];
		cout<<"Enter Gender		: ";cin>>gender[i];
		cout<<"Enter Salary		: ";cin>>salary[i];
		cout<<"Enter Position	: ";cin>>position[i];
	}
	cout<<"\n";
	cout<<"Create Employee Successfully!\n";
}
void Output(int n){
	cout<<"\n";
	cout<<"<===========Employee["<<i+1<<"]============>\n";
	
	cout<<"ID      		: "<<id[i]<<endl;
	cout<<"Name      	: "<<name[i]<<endl;
	cout<<"Gender      	: "<<gender[i]<<endl;
	cout<<"Salary     	: "<<salary[i]<<endl;
	cout<<"Position     : "<<position[i]<<endl;
	}
}
	
int main(){
	
	int op;
	int n;
	
	do{
		cout<<"\n";
		cout<<"<==================>\n";
		cout<<"1. Input Data        \n";
		cout<<"2. Output Data       \n"
	}
	
	return 0;
	
}
