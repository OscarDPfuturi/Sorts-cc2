#include <iostream>

using namespace std;

void bubbleSort(int num[],int tam){
    int aux;
    for (int i=0; i<tam; i++){
        for (int j=1; j<tam;j++){
            if (num[j]<num[j-1]){
                aux = num[j];
                num[j] = num[j-1];
                num[j-1] = aux;
            }
        }
    }
}
void mostrar(int num[],int tam){
    for (int i=0; i<tam; i++){
        cout<<num[i]<<" ";
    }
}
int main()
{
    int numeros[] = {5,1,4,9,8,6,3,7,2};
    int tamanio = 9;
    bubbleSort(numeros,tamanio);
    mostrar(numeros,tamanio);
    return 0;
}
