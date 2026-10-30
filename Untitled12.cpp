#include<iostream>
using namespace std;

int main(){
	
	int n;
	int sum = 10;
	
	cout << "Enter value of n: ";
	cin >> n;
	
	cout << "10";
	for (int i = 9; i >= n; i--){
		cout << "-" << i;
		sum -= i;
		
	}
	cout << " = " << sum << endl;
	
	return 0;
}