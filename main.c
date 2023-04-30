#include <stdio.h>
#include <stdlib.h>
//recursive
void moveZeroesToEnd(int arr[], int n) {
    if(n == 0) {
        return;
    }
    moveZeroesToEnd(arr+1, n-1);
    if(arr[0] == 0) {
        for(int i = 1; i < n; i++) {
            arr[i-1] = arr[i];
        }
        arr[n-1] = 0;
    }
}
//non-recursive
void moveZeroesToEndNon(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }
    for(int i = count; i < n; i++) {
        arr[i] = 0;
    }
}
int main()
{
    printf("--Move all zeroes to end of array--\n");
//    int n = 8;
    int size ;
    printf("Enter Size Of Array : ");
    scanf("%d" , &size);
    int arr[size];
//    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter Elements Of Array : ");

    for (int i= 0  ; i < size ;i++ ){
        scanf("%d" , &arr[i]);
    }

    moveZeroesToEnd(arr , size);
//    moveZeroesToEndNon(arr , size);
    printf("Modified Array is :\narr =   " );

    for (int i =0 ; i <size ; i++){
        printf("%d , " , arr[i]);
    }

    return 0;
}
