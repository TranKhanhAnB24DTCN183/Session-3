#include <stdio.h>

int main() {
    float toan, van, anh, tong, trung_binh;

    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    fflush(stdin);
    printf("Nhap diem mon Van: ");
    scanf("%f", &van);
   fflush(stdin);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &anh);
  fflush(stdin);
    
    tong = toan + van + anh;
    trung_binh = tong / 3;

    printf("Tong diem la: %.2f\n", tong);
    printf("Diem trung binh las: %.2f\n", trung_binh);

    return 0;
}

