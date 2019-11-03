#include<iostream>

using namespace std;

int main(){
	int carnet[8];
	
	cout<<"Ingrese su carnet: "<<endl;
	
	for(int i=0;i<8;i++){
		
			cin>>carnet[i];		
		
	}	
	cout<<"CARNET: "<<endl;
	for(int i=0;i<8;i++){
		cout<<carnet[i]<<"_";
		
	}
	cout<<endl;
	
	cout<<"CARNET INVERTIDO: "<<endl;
	for(int i=7;i>=0;i--){
		cout<<carnet[i]<<"_";
		
	}


	
	return 0;
}
