#include <iostream>

//declaramos que usaremos std durante todo el codigo
using namespace std;

int main(){
	//n ser� el n�mero que ingresa el usuario
	int n = 0;
	
	cout<<"ingrese el numero: ";
	cin>>n;
	
	//comprobamos el m�dulo de n entre 2 para saber si es par o no
	if(n%2 == 0){
		//por verdadero
		cout<<n<<" es par"<<flush<<endl;
	}
	else{
		//por falso
		cout<<n<<" es impar"<<flush<<endl;
	}
	
	return 0;
}
