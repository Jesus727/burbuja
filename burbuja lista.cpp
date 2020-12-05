#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

 

using namespace std;

 

void menu()
{
    int i, k, der, izq, aux, N, A[30];
    
    cout<<"Metodo de ordenamiento de la sacudida wiii"<<endl;
    cout<<"Ingrese el tamaño del arreglo que desea ordenar: "<<endl;
    cout<<" 1. Eliminar dato                  "<<endl;
    cout<<" 2. Elimitar todos los datos del metodo                  "<<endl;
    cin>>N;
    k=N;
    izq=2;
    der=N;
    
    for(i=1; i<=N; i++){
        cout<<"\t A["<<i<<"] : ";
        cin>>A[i];
    }
    
    do{
        
        for(i=der; i>=izq; i--){
            if(A[i-1]>A[1]){
                aux=A[i,1];
                A[i-1]=A[i];
                A[i]=aux;
                k=i;
            }
        }
        
        izq; k=1; }
        for ("i=izq; i<=der; i++ " ){
            if(A[i-1]>A[i]){
                aux=A[i-1];
                A[i-1]=A[i];
                A[i]=aux;
                k=i;
            }
        }
        
        der=k-1;
    }while(izq<der);
    
    cout<<"\n el arreglo ordenado es el siguiente: "<<end1;
    
    for(i = 1; i = N; i++){
        cout<<"\t"<<A[i]<<"\n"<<end1;
        
    }
    
    return 0;
    getch();
}
