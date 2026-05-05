// Given a sequence of N integers, write a program that finds
// the K-th largest element in the sequence.
#include <stdio.h>


int main()
{
    int n, k;

    printf("Enter number of elements (N):");
    scanf("%d", &n);

     int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the rank(positon) of the number (K): ");
    scanf("%d",&k);

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if ( a[j]<a[j+1]){
                    int temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]= temp;
            }
        }
    }
    printf("The %d largest element in the sequence is:",a[k-1]);

    return 0;
}
