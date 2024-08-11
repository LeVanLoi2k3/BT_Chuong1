//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//    int maSoSinhVien;
//    char hoTen[50];
//    float diemTrungBinh;
//} SinhVien;
//
//// Hàm ghi mảng sinh viên ra tệp tin nhị phân
//void ghiMangRaTepTin(const char* fileName, SinhVien* arr, int n) {
//    FILE* file = NULL;
//    if (fopen_s(&file, fileName, "wb") != 0) {
//        printf("Khong mo duoc tep tin de ghi.\n");
//        return;
//    }
//
//    // Ghi số lượng phần tử vào tệp
//    fwrite(&n, sizeof(int), 1, file);
//
//    // Ghi từng phần tử của mảng vào tệp
//    for (int i = 0; i < n; i++) {
//        fwrite(&arr[i], sizeof(SinhVien), 1, file);
//    }
//
//    fclose(file);
//}
//
//// Hàm đọc dữ liệu từ tệp tin nhị phân vào mảng sinh viên
//void docMangTuTepTin(const char* fileName, SinhVien** arr, int* n) {
//    FILE* file = NULL;
//    if (fopen_s(&file, fileName, "rb") != 0) {
//        printf("Khong mo duoc tep tin de doc.\n");
//        return;
//    }
//
//    // Đọc số lượng phần tử từ tệp
//    fread(n, sizeof(int), 1, file);
//
//    // Cấp phát bộ nhớ cho mảng
//    *arr = (SinhVien*)malloc(*n * sizeof(SinhVien));
//    if (*arr == NULL) {
//        printf("Khong cap phat duoc bo nho.\n");
//        fclose(file);
//        return;
//    }
//
//    // Đọc từng phần tử của mảng từ tệp
//    fread(*arr, sizeof(SinhVien), *n, file);
//
//    fclose(file);
//}
//
//int main() {
//    // Tạo mảng sinh viên
//    SinhVien arr[] = {
//        {1, "Nguyen Van Khanh", 7.5},
//        {2, "Tran Thi Lan Huong", 8.0},
//        {3, "Le Van Loi", 9.5}
//    };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // Ghi mảng ra tệp tin nhị phân
//    ghiMangRaTepTin("sinhvien.text", arr, n);
//
//    // Đọc mảng từ tệp tin nhị phân
//    SinhVien* arrDoc = NULL;
//    int nDoc;
//    docMangTuTepTin("sinhvien.text", &arrDoc, &nDoc);
//
//    // In ra mảng đã đọc từ tệp
//    printf("Danh sach sinh vien da doc tu tep tin:\n");
//    for (int i = 0; i < nDoc; i++) {
//        printf("Ma so sinh vien: %d, Ho ten: %s, Diem trung binh: %.2f\n", arrDoc[i].maSoSinhVien, arrDoc[i].hoTen, arrDoc[i].diemTrungBinh);
//    }
//
//    // Giải phóng bộ nhớ đã cấp phát
//    free(arrDoc);
//
//    return 0;
//}
