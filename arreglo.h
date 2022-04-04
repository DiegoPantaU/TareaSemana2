#include<iostream>
using namespace std;

    void cadena(int q, int n[]){
        int x;
        cout << "  ---\n" ;

        for(x = 0; x < q; x++){
            cout << "Ingresa el numero "<< x + 1 << ": ";
            cin >> n[x];
        }
    }


    void mostrarCadena(int q, int n[]){
        int i;
        cout << " ---\n";
        cout << "El arreglo de la cadena es:\n" << endl;
        cout << "| ";
        for(i = 0; i < q; i++){
            cout << n[i];
            cout << " | ";
        }
        cout << "\n ";
    }
