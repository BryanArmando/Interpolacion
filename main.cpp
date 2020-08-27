#include <iostream>
#include <fstream>
using namespace std;
int A[7]={1,2,3,4,5,6,7};
int primero=0, ultimo=7-1, medio, n=5, contador=0;
fstream archivo;
void interpol();
void imprimir(int a[]);
//commit

int main(){
  archivo.open("Inperpolacion.txt", ios::app);
  imprimir(A);
  archivo<<"Elemento a buscar: "<<n<<endl;
  interpol();


  archivo.close();


    

return 0;
}
void interpol(){
  while(A[primero]!=n && contador <7)
    {
        medio=primero+((n-A[primero])*(ultimo-primero))/(A[ultimo]-A[primero]);
        if(A[medio]<n)
            ultimo=medio+1;
        else if(A[medio]>n)
            ultimo=medio-1;
        else
            primero=medio;
        contador++;
        break;
    }
    if(A[primero]==n)
      archivo<<"Elemento encontrado en la posicion: 5 \n";
    else
    {
        archivo<<"No se ha encontrado el elemento";
    }

}

void imprimir (int a[]){
  for(int i=0;i<7;i++){
    archivo<<"["<<a[i]<<"]\t";
  }
  archivo<<endl;

}