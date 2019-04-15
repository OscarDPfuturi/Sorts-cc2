int divide(int arr[], int ini, int fin) {
    int izq, der, pivot;
    int aux;

    pivot = arr[ini];
    izq = ini;
    der = fin;

    while (izq < der) {
        while (arr[der] > pivot) {
            der--;
        }
        while ((izq < der) && (arr[izq] <= pivot)) {
            izq++;
        }
        if (izq < der) {
            aux = arr[izq];
            arr[izq] = arr[der];
            arr[der] = aux;
        }
    }

    aux = arr[der];
    arr[der] = arr[ini];
    arr[ini] = aux;

    return der;
}
void quicksort(int arr[], int ini, int fin){
    int pivot;

    if (ini < fin) {
        pivot = divide(arr, ini, fin);

        quicksort(arr, ini, pivot - 1);// Ordena la lista de los menores

        quicksort(arr, pivot + 1, fin);// Ordena la lista de los mayores
    }
}

