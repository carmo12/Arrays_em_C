#include <stdio.h> 

int exiberArrayInteiro(int numeros[], int length) {  

int i;  

for (i = 0; i < length; i++) {  

printf("%d \n", numeros[i]);  

}  

}  

int main() { 

    int A[10], B[10]; 

    int i; 

    printf("Digite 10 números inteiros:\n"); 

    for(i = 0; i < 10; i++) { 

        printf("A[%d]: ", i); 

        scanf("%d", &A[i]); 

    } 

    for(i = 0; i < 10; i++) { 

        if(i % 2 == 0) { 

            B[i] = A[i] * 5; 

        } else { 

            B[i] = A[i] + 5; 

        } 

    } 

    exiberArrayInteiro(B,10); 

    return 0; 

} 