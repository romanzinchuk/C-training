#include <stdio.h>
#include <stdlib.h>

int kal(char *arr, int inputNumber, char *arrCopy){  
    int size = 0;
    int j = 0;
    for(int i = 0; i < 10; i++){
        
        if(inputNumber < arr[i]){
            
            arrCopy = realloc(arrCopy, size + 1);
            arrCopy[size++] = arr[i];
            
        }
    };
    return size;
};

int main(){

    char arr[10] = {11,2,41,2,34,5,33,4,52,111};

    int inputNumber;
    scanf("%d", &inputNumber);
    
    int size;
    
    char *arrCopy = malloc(sizeof(char));
    size = kal(arr,inputNumber,arrCopy);
    
    
    
    for(int i = 0; i < size ;i++){
        printf("\n%d", arrCopy[i]);
    }
    free(arrCopy);
    return 0;
}