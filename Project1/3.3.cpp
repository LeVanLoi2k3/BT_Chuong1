//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//    char hoTen[50];
//    int ngay, thang, nam;
//    char gioiTinh[10];
//} NhanVien;
//
//void nhapThongTin(NhanVien* nv) {
//    printf("Nhap ho ten: ");
//    fgets(nv->hoTen, sizeof(nv->hoTen), stdin);
//    nv->hoTen[strcspn(nv->hoTen, "\n")] = '\0'; // Xóa ký tự newline
//
//    printf("Nhap ngay sinh (dd/mm/yyyy): ");
//    scanf_s("%d/%d/%d", &nv->ngay, &nv->thang, &nv->nam);
//    // Làm sạch bộ đệm đầu vào để loại bỏ ký tự newline còn lại
//    while (getchar() != '\n');
//
//    printf("Nhap gioi tinh (Nam/Nu): ");
//    scanf_s("%9s", nv->gioiTinh, (unsigned)sizeof(nv->gioiTinh));
//}
//
//void tinhNgayNghiHuu(NhanVien nv) {
//    int tuoiNghiHuu;
//    if (strcmp(nv.gioiTinh, "Nu") == 0) {
//        tuoiNghiHuu = 60;
//    }
//    else if (strcmp(nv.gioiTinh, "Nam") == 0) {
//        tuoiNghiHuu = 62;
//    }
//    else {
//        printf("Gioi tinh khong hop le\n");
//        return;
//    }
//
//    int namNghiHuu = nv.nam + tuoiNghiHuu;
//    printf("Nhan vien %s se nghi huu vao thang %d nam %d\n", nv.hoTen, nv.thang, namNghiHuu);
//}
//
//int main() {
//    NhanVien nv;
//    nhapThongTin(&nv);
//    tinhNgayNghiHuu(nv);
//    return 0;
//}
