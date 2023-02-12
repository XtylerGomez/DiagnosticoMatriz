#include <iostream>
#include <windows.h>

//Link de donde saque esto : https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c

using namespace std;

int main(){
    cout<<"Test de Colores en Consola"<<endl;
    
    int arr[5]={0,1,2,3,4};
    int f=1;
    int color=0;
    //Inicializar hConsole
    HANDLE hConsole;
    //1= Azul 7= Blanco 
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    do{
        cout<<"Ingrese un numero(0-4), ese numero sera de color azul (5 exit)"<<endl;
        cin>>color;
        if(color==5){f=0;}else{
        for(int i=0;i<5;i++){
                if(i==color){
                    SetConsoleTextAttribute(hConsole, 1);
                }
                cout<<arr[i]<<" ";
                SetConsoleTextAttribute(hConsole, 7);
            }
            cout<<endl;
        }
    }while(f!=0);
    
    /*SetConsoleTextAttribute(hConsole, 1);
    cout<<"Prueba";
    SetConsoleTextAttribute(hConsole, 7);
    cout<<"Prueba 2";*/


    return 0;
}