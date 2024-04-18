#include <stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
// Function to find all permutations of arr[] using backtracking
void findPermutations(int arr[], int n) 
{
    if (n == 1) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        swap(&arr[i], &arr[n - 1]);
        findPermutations(arr, n - 1);
        swap(&arr[i], &arr[n - 1]);
    }
}
// Driver code
int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findPermutations(arr, n);
    return 0;
}