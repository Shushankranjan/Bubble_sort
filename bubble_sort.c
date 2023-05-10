#include <stdio.h>
#define max 10
void Bsort(int[], int);

int main()
{
    int A[max], i, n;
    printf("Enter elements you want\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        
    }
    Bsort(A, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

void Bsort(int A[], int N)
{
    int i, j, t = 0;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            t = A[j];
            if (A[j] > A[j + 1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        
        }
    }
    
}