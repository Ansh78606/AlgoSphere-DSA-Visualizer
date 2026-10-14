/*
 * AlgoSphere: reference C implementations for learning.
 * Compile: gcc -std=c11 -Wall -Wextra algorithms.c -o algorithms
 */
#include <stdio.h>

static void swap(int *a, int *b) { int t = *a; *a = *b; *b = t; }

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int changed = 0;
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) { swap(&a[j], &a[j + 1]); changed = 1; }
        }
        if (!changed) break;
    }
}

void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[min_index]) min_index = j;
        if (min_index != i) swap(&a[i], &a[min_index]);
    }
}

void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) { a[j + 1] = a[j]; --j; }
        a[j + 1] = key;
    }
}

static int partition(int a[], int low, int high) {
    int pivot = a[high], i = low - 1;
    for (int j = low; j < high; ++j)
        if (a[j] <= pivot) swap(&a[++i], &a[j]);
    swap(&a[i + 1], &a[high]);
    return i + 1;
}

void quick_sort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quick_sort(a, low, p - 1);
        quick_sort(a, p + 1, high);
    }
}

int linear_search(const int a[], int n, int target) {
    for (int i = 0; i < n; ++i) if (a[i] == target) return i;
    return -1;
}

int binary_search(const int a[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

#ifdef DEMO_MAIN
int main(void) {
    int values[] = {42, 17, 8, 99, 23, 54, 11};
    int n = (int)(sizeof(values) / sizeof(values[0]));
    bubble_sort(values, n);
    printf("Sorted: ");
    for (int i = 0; i < n; ++i) printf("%d%s", values[i], i == n - 1 ? "\n" : " ");
    printf("Index of 23: %d\n", binary_search(values, n, 23));
    return 0;
}
#endif
