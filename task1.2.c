#include <stdio.h>

int main (){

    char arr [64];
    
    long int *arr1 = (long int*)arr;
    
    int temp = 1939;
    for(int i = 0; i < sizeof(arr1);i ++ ){
        
        temp += 1;
        arr1[i] = temp;
    }
    
    for (int i = 0; i <= sizeof(arr1); i++) {
        printf("%ld\n", arr1[i]);
    }
        

    return 0;
}