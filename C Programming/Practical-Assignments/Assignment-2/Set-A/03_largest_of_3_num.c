#include <stdio.h>

int main(){
    // Find largest of 3 Numbers.
    int A, B, C;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Enter the value of C: ");
    scanf("%d", &C);

    if(A >= B && A >= C){
        printf("%d is the Largest number\n", A);
    }
    else if(B >= A && B >= C){
        printf("%d is the Largest number\n", B);
    }
    else{
        printf("%d is the Largest number\n", C);
        
    }
    return 0;
}
