#include <stdio.h>
	int arr[100],i , n;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        else return true;
}

int main() {
    int arrayOne[] = {1, 2, 3, 2, 1};
    int n1 = sizeof(arrayOne) / sizeof(arrayOne[0]);

    if (is_symmetric(arrayOne, n1)) {
        printf("arrayOne la mang doi xung .\n");
    } else {
        printf("arrayOne khong la mang doi xung.\n");
    }

    int arrayTwo[] = {'a', 'n', 'n', 'a', 'a'};
    int n2 = sizeof(arrayTwo) / sizeof(arrayTwo[0]);

    if (is_symmetric(arrayTwo, n2)) {
        printf("arrayTwo la mang doi xung\n");
    } else {
        printf("arrayTwo khong la mang doi xung \n");
    }

    return 0;
}