#include<iostream>
using namespace std;

int main(){
	
	int op;
	float num1, num2;
	
	do{
		cout<<"\n";
	cout<<"<=========================>\n";
	cout<<"1. option +                \n";
	cout<<"2. option -    			  \n";
	cout<<"3. option x				  \n";
	cout<<"4. option /				  \n";
	cout<<"<=========================>\n";
	cout<<"Please choose Option : ";cin>>op;
	
	switch(op){
		case 1: {
			cout<<"\n";
			cout<<"Enter num1 = ";cin>>num1;
			cout<<"Enter num1 = ";cin>>num2;
			cout<<"\n";	
			cout<<"num1 + num2 = "<<num1 + num2<<endl;	
			break;
		}
		default :{
			cout<<"\n";
			cout<<"Option not found\n";
			break;
		}
	}
	
}while(op != 0);
	return 0;
}