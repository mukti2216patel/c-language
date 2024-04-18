#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to find the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to find all permutations of arr[]
void findPermutations(int arr[], int n) {
    int fact = factorial(n);
    for (int i = 0; i < fact; i++) {
        int j = i;
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[j % n]);
            j = j / n + j % n;
        }
        printf("\n");
    }
}

// Driver code
int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findPermutations(arr, n);
    return 0;
}