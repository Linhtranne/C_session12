#include <stdio.h>
int main() {
    int n, m;
    printf("Nhap hang (n): ");
    scanf("%d", &n);
    printf("Nhap cot (m): ");
    scanf("%d", &m);

    int a[n][m];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri phan tu cua mang\n");
        printf("2. in gia tri phan tu theo ma tran\n");
        printf("3. In cac phan tu cua goc theo ma tran\n");
        printf("4. in ra cac phan tu doc duong bien tren ma tran \n");
        printf("5. In ra cac phan tu tren duonng cheo chinh va duong cheo phu tren ma tran \n");
        printf("6. In ra cac phan tu la so nguyen to tren ma tran\n");
        printf("7. Thoát\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for(int i=0; i<n; i++) {
                    for(int j=0; j<m; j++) {
                        printf("Nhap phan tu  a[%d][%d]: ", i, j);
                        scanf("%d", &a[i][j]);
                    }
                }
                break;
            case 2:
                for(int i=0; i<n; i++) {
                    for(int j=0; j<m; j++) {
                        printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("%d %d\n", a[0][0], a[0][m-1]);
                printf("%d %d\n", a[n-1][0], a[n-1][m-1]);
                break;
            case 4:
                for(int i=0; i<n; i++) {
                    for(int j=0; j<m; j++) {
                        if(i==0 || j==0 || i==n-1 || j==m-1) {
                            printf("%d ", a[i][j]);
                        }
                    }
                    printf("\n");
                }
                break;
            case 5:
                if(n == m) {
                    for(int i=0; i<n; i++) {
                        printf("%d ", a[i][i]);
                    }
                    printf("\n");
                    for(int i=0; i<n; i++) {
                        printf("%d ", a[i][n-i-1]);
                    }
                    printf("\n");
                } else {
                    printf("Khong the in ra ma tran cheo vi do la ma tran vuong.\n");
                }
                break;
            case 6:
                for(int i=0; i<n; i++) {
                    for(int j=0; j<m; j++) {
                        int flag = 1;
                        if (a[i][j] < 2) {
                            flag = 0;
                        } else {
                            for(int k=2; k<=sqrt(a[i][j]); k++) {
                                if(a[i][j] % k == 0) {
                                    flag = 0;
                                    break;
                                }
                            }
                        }
                        if(flag == 1) {
                            printf("%d ", a[i][j]);
                        }
                    }
                    printf("\n");
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Chon sai r.\n");
        }
    } while (choice != 7);

    return 0;
}