#include<iostream>
using namespace std;
int main(){
    int n, mayor, A[20];
    do{
        cout<<"Ingrese la cantidad de elementos (maximo 20): ";
        cin>>n;
        if(cin.fail()){  //se valida si el valor ingresado es numerico
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Ingresa un valor numerico valido"<<endl;
            n=0;
        }else if(n<=0 || n>20) {
            cout << "Número invalido de elementos. Intente nuevamente" << endl;
        }
    } while(n<=0 || n>20);
    cout<<"Ingrese " <<n<< " numeros: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    mayor=A[0];
    for(int i=1; i<n; i++){
        if(A[i]>mayor){
            mayor=A[i];
        }
    }
    cout<<"El numero mayor es: "<<mayor<<endl;
    return 0;
}