#include <stdio.h>

int main() {
    int a[100];
    int n = 0;
    int choice;
    int pos, val;

    do {
        printf("\nMENU\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. Thêm một phần từ vào vị trí chỉ định\n");
        printf("4. Sửa một phần từ ở vị trí chỉ định\n");
        printf("5. Xóa một phần từ ở vị trí chỉ định\n");
        printf("6. Sắp xếp các phần tử\n");
        printf("7. Giảm dần\n");
        printf("8. Tăng dần\n");
        printf("9. Tìm kiếm phần tử nhập vào\n");
        printf("10. Thoát\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số phần tử cần nhập: ");
                scanf("%d", &n);
                for(int i=0; i<n; i++) {
                    printf("Nhập phần tử thứ %d: ", i+1);
                    scanf("%d", &a[i]);
                }
                break;
            case 2:
                printf("Các phần tử đang quản lý: ");
                for(int i=0; i<n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            case 3:

                printf("Nhập vị trí muốn thêm: ");
                scanf("%d", &pos);
                printf("Nhập giá trị muốn thêm: ");
                scanf("%d", &val);
                for(int i=n; i>pos; i--) {
                    a[i] = a[i-1];
                }
                a[pos] = val;
                n++;
                break;
            case 4:
                printf("Nhập vị trí muốn sửa: ");
                scanf("%d", &pos);
                printf("Nhập giá trị mới: ");
                scanf("%d", &val);
                a[pos] = val;
                break;
            case 5:
                printf("Nhập vị trí muốn xóa: ");
                scanf("%d", &pos);
                for(int i=pos; i<n-1; i++) {
                    a[i] = a[i+1];
                }
                n--;
                break;
            case 6:
                printf("6. Sắp xếp các phần tử\n");
                printf("7. Giảm dần\n");
                printf("8. Tăng dần\n");
                printf("Nhập lựa chọn của bạn: ");
                scanf("%d", &choice);
                if(choice == 7) {
                    for(int i=0; i<n-1; i++) {
                        for(int j=i+1; j<n; j++) {
                            if(a[i] < a[j]) {
                                int temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                            }
                        }
                    }
                } else if(choice == 8) {
                    // Tăng dần
                    for(int i=0; i<n-1; i++) {
                        for(int j=i+1; j<n; j++) {
                            if(a[i] > a[j]) {
                                int temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                            }
                        }
                    }
                } else {
                    printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
                }
                break;
            case 9:
                int key;
                printf("Nhập phần tử muốn tìm: ");
                scanf("%d", &key);
                int found = 0;
                for(int i=0; i<n; i++) {
                    if(a[i] == key) {
                        printf("Phần tử %d tìm thấy ở vị trí %d\n", key, i);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Phần tử %d không tìm thấy trong mảng\n", key);
                }
                break;
            case 10:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
        }
    } while (choice != 10);

    return 0;
}