#include <iostream>
using namespace std;

int main(){
	
	char op;
	float x,y;
	
	cout<<"sila pilih operasi  + - * /"<<endl;
	
	cin>>op;
	
	cout << "sila masukkan nilai: "<<endl;
	cout<<"x = "<<endl;
    cin >> x;
    cout<<"y = "<<endl;
    cin >> y;
	
	switch(op){
		
		case '+':
			cout<<x+y;
			break;
		
		case '-':
			cout<<x-y;
			break;
		
		case '*':
			cout<<x*y;
			break;
			
		case '/':
			cout<<x/y;
			break;
			
		default:
			cout<<"error";
			break;
	}
}
