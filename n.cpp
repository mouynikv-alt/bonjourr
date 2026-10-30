#include<iostream>
using namespace std;

int main(){
	int array[40];
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"1. Input Value			\n";
		cout<<"2. Outpput Value			\n";
		cout<<"3. Find value by index	\n";
		cout<<"4. Update Value			\n";
		cout<<"5. Delete Value			\n";
		cout<<"6. Sport Value			\n";
		cout<<"7. Exit..................\n";
		cout<<"\n";
		cout<<"Please choose options : ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<============Input Value============>\n";
				cout<<"\n";
				cout<<"Enter number of array = ";cin>>n;
				
				for(int i=0; i<n; i++){
				cout<<"Enter value["<<i<<"] = ";cin>>array[i];
			}
			cout<<"\n";
			cout<<"Create value successful\n";
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"<===============Output Value=================>";
				cout<<"\n";
				
				for(int i=0; i<n; i++){
					cout<<"array["<<i<<"] = "<<array[i]<<endl;
				}
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"<================Search Value by Index===============>";
				
				int index;
				bool check = false;
				
				cout<<"Enter index of array = ";cin>>index;
				
				for(int i=0; i<n; i++){
					if(index == i){
						cout<<"value of array["<<i<<"] = "<<array[i]<<endl;
						check = true;
						cout<<"\n";
						cout<<"value has found\n";
						
					}
				}
				if(!check){
					cout<<"Index not found\n";
					
				}
				break;
			}
			case 4:{
				cout<<"\n";
				cout<<"<================Update Value===============>";
				
				int index;
				bool check = false;
				
				cout<<"Enter index of array = ";cin>>index;
				
				for(int i=0; i<n; i++){
					if(index == i){
						cout<<"current value of array["<<i<<"] = "<<array[i]<<endl;
						cout<<"Enter new value = "; cin >> array[i];
						check = true;
						cout<<"\nUpadte value success\n";
						
					}
				}
				if(!check){
					cout<<"Index not found\n";
				}
				break;
			}
		}
	
	}while(op != 7);
	return 0;
}