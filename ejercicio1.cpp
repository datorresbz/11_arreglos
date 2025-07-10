#include<iostream>
using namespace std;
int main(){
    int n, mayor, A[20];
    do{
        cout<<"Ingrese la cantidad de elementos (máximo 20): ";
        cin>>n;
        if(n<=0 || n>20) {
            cout << "Número invalido de elementos. Intente nuevamente" << endl;
        }
    } while(n<=0 || n>20);
    cout<<"Ingrese " <<n<< " números: ";
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