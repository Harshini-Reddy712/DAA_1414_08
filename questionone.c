#include <stdio.h>
void sortAscending(int arr[], int n);
void sortDescending(int arr[], int n);
void printArray(int arr[], int n);
int main() {
    int n,i,times[n];
    printf("number of destinations: ");
    scanf("%d", &n);
    printf("Enter time to reach destination:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }
    sortAscending(times, n);
    printf("ascending order:\n");
    printArray(times, n);
    sortDescending(times, n);
    printf("descending order\n");
    printArray(times, n);
    return 0;
}
void sortAscending(int arr[], int n) {
	int i,j;
    for (i = 0; i < n-1; i++) {
        for ( j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void sortDescending(int arr[], int n) {
	int i,j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");
}

