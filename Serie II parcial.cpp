#include <iostream>
#include <conio.h>


//Declaramos el espacio de nombres
using namespace std;


//Declaramos la función principal
int main(){
	
	int mat[2][2];
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			
			cout<<"Ingresar cuatro numeros enteros en su respectivo orden: ["<<i<<"]["<<j<<"]";
			cin>>mat[i][j];
			
		}
	}
	
	//Mostramos la matriz en pantalla
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			
			cout<<mat[i][j];
		}
		cout<<"\n";
	}
	
	//Suma de la matriz
	 int suma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            suma += mat[i][j];
        }
    }

// Mostrar la suma de los elementos de la matriz
    cout << "La suma de los elementos de la matriz es: " << suma << endl;

    // Verificación si la suma es par o impar
    if (suma % 2 == 0) {
        cout << "La suma de los elementos de la matriz es par." << endl;
    } else {
        cout << "La suma de los elementos de la matriz es impar." << endl;
    }
	
	
	return 0;
}