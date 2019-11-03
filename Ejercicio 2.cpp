#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int matriz[5][9],carnet[8], Cinvertido[8], cont=0;
	
	cout<<"Ingrese su carnet: "<<endl;	
	for(int i=0;i<8;i++){
		cin>>carnet[i];
	}
	//mostrando carnets
	cout<<"Carnet normal"<<endl;
	for(int i=0;i<8;i++){
		cout<<carnet[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Carnet invertido"<<endl;
	for(int i=7;i>=0;i--){
		cout<<carnet[i]<<" ";
	}
	cout<<endl;
	
	Cinvertido[0]=carnet[7];
	Cinvertido[1]=carnet[6];
	Cinvertido[2]=carnet[5];
	Cinvertido[3]=carnet[4];
	Cinvertido[4]=carnet[3];
	Cinvertido[5]=carnet[2];
	Cinvertido[6]=carnet[1];
	Cinvertido[7]=carnet[0];		
	
	//pasando arreglo a matriz
	
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			if(i%2==0){
				matriz[i][j]=carnet[j];
			}
			else{
				matriz[i][j]=Cinvertido[j];
			}
		
			}
		}
	
	
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			matriz[4][j]=cont;
			cont++;
		}
		matriz[i][8]=cont;
		cont++;
	}
	
	cout<<"Matriz con Carnet normal e invertido"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			
				cout<<setw(2)<<matriz[i][j]<<"  ";
						
		}
		cout<<endl;
	}
	
	
	return 0;
}
