void insertion_sort(int num[],int tam){
    int aux,j;
    for (int i=0; i<tam; i++){
        aux = num[i];
        j = i;
        while (j>0 && (num[j-1]>aux)){
            num[j] = num[j-1];
            j--;
        }
        num[j] = aux;
    }
}
