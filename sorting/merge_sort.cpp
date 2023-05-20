void mergeSort(vi& arr, int l, int r){
    if(l >= r) return;
    int m = l + (r-l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arrr, m + 1, r);
    merge(arr, l, m, r);
}

void merge(vi& arr, int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    vi L(n1), R(n2);
    fore(i,0,n1) L[i] = arr[l+i];
    fore(i,0,n2) R[i] = arr[m+1+i];
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++; k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++; k++;
    }
}
