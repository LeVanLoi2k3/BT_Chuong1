//#include <stdio.h>
//#include <stdlib.h>
//
//// Hàm xóa phần tử tại vị trí k
//void deleteAt(int a[], int* n, int k) {
//    if (k < 0 || k >= *n) {
//        printf("Vị trí không hợp lệ\n");
//        return;
//    }
//    for (int i = k; i < *n - 1; i++) {
//        a[i] = a[i + 1];
//    }
//    (*n)--;
//}
//
//// Hàm thêm phần tử x tại vị trí k
//void insertAt(int a[], int* n, int x, int k) {
//    if (k < 0 || k > *n) {
//        printf("Vị trí không hợp lệ\n");
//        return;
//    }
//    for (int i = *n; i > k; i--) {
//        a[i] = a[i - 1];
//    }
//    a[k] = x;
//    (*n)++;
//}
//
//// Hàm nhập mảng từ người dùng
//void inputArray(int a[], int* n) {
//    printf("Nhap so luong phan tu: ");
//    scanf_s("%d", n);
//    if (*n <= 0) {
//        printf("So luong phan tu phai lon hon 0.\n");
//        exit(1);
//    }
//    printf("Nhap %d phan tu: \n", *n);
//    for (int i = 0; i < *n; i++) {
//        scanf_s("%d", &a[i]);
//    }
//}
//
//// Hàm xuất mảng ra màn hình
//void printArray(int a[], int n) {
//    printf("Mang: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int a[100]; // Mảng có kích thước tối đa là 100
//    int n;
//
//    inputArray(a, &n);
//
//    // Xóa phần tử tại vị trí k
//    int k;
//    printf("Nhap vi tri de xoa phan tu: ");
//    scanf_s("%d", &k);
//    deleteAt(a, &n, k);
//    printArray(a, n);
//
//    // Thêm phần tử x tại vị trí k
//    int x;
//    printf("Nhap gia tri phan tu can them: ");
//    scanf_s("%d", &x);
//    printf("Nhap vi tri de them phan tu: ");
//    scanf_s("%d", &k);
//    insertAt(a, &n, x, k);
//    printArray(a, n);
//
//    return 0;
//}
