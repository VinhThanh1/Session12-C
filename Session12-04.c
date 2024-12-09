#include <stdio.h>

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){ 
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={3, 7, 1, 9, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = findMax(arr, size);
    printf("So lon nhat trong mang la: %d", max);
    return 0;
}
