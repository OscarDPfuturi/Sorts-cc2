void Merge(int* A,int p,int q,int r) {
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];

    for(int i=0; i<n1; i++){L[i]=A[p+i];}
    for(int j=0; j<n2; j++){R[j]=A[q+1+j];}

    int i=0, j=0, n=0;
    while(i!=n1 && j!=n2) {
        if(L[i]>R[j]) {
            A[p+n]=R[j];
            j++;
        } else {
            A[p+n]=L[i];
            i++;
        }
        n++;
    }
    while(j!=n2) {
        A[p+n]=R[j];
        j++;
        n++;
    }
    while(i!=n1) {
        A[p+n]=L[i];
        i++;
        n++;
    }
}
void MergeSort(int* A,int p,int r) {
    if(r>p) {
        int q;
        q=(p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}
