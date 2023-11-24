#include <stdio.h>
	int n;
    if(n <= 1){
	 return false}
    if(n <= 3) {
    	return true
	}
    if(n % 2 == 0 || n % 3 == 0){
    	return false
	}
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0){
        	return false
		}
            
    	else return true
}
int int arr[], int n;
    int count = 0;
    for (int i = 0; i < n; i++)
        if (isPrime(arr[i])) count++;
    return count;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int count1 = countPrimes(arr1, n1);
    int count2 = countPrimes(arr2, n2);

    printf("Mang 1 co %d so nguyen to.\n", count1);
    printf("Mang 2 co %d so nguyen to.\n", count2);

    if (count1 > count2)
        printf("Mang 1 co nhieu so nguyen to hon.\n");
    else if (count2 > count1)
        printf("Mang 2 co nhieu so nguyen to hon.\n");
    else
        printf("Ca hai mang co so luong so nguyen to bang nhau.\n");

    return 0;
}