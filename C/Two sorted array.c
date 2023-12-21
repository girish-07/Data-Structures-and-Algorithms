#include <stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int i = low;
    int tmp[high-low+1];
    int k = 0;
    int j = mid+1;
    while(i<=mid && j<=high) {
        if(arr[i]<arr[j]) {
            tmp[k] = arr[i];
            i++;
        }
        else {
            tmp[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid) {
        tmp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=high) {
        tmp[k] = arr[j];
        j++;
        k++;
    }
    for(int i=low; i<=high; i++) {
        arr[i] = tmp[i-low];
    }
}

void mergeSort(int arr[], int low, int high) {
    if(low<high) {
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int brr[m];
    for(int i=0; i<m; i++) {
        scanf("%d", &brr[i]);
    }
    int crr[m+n];
    for(int i=0; i<n; i++) {
        crr[i] = arr[i];
    }
    for(int i=0; i<m; i++) {
        crr[n+i] = brr[i];
    }
    mergeSort(crr, 0, m+n-1);
    for(int i=0; i<n; i++) {
        arr[i] = crr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0; i<m; i++) {
        brr[i] = crr[n+i];
        printf("%d ", brr[i]);
    }
    printf("\n");
}
