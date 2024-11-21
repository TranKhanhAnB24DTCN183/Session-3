#include <stdio.h>

int main() {
    float base, height, area;
    
    printf("Nhap vao do dai canh day cua tam giac: ");
    scanf("%f",&base);
    fflush(stdin);
    
    printf("Nhap vao chieu cao cua tam giac: ");
    scanf("%f",&height);
    fflush(stdin);
    
    area = 0.5 * base * height;
    
    printf("Dien tich cua tam giac la: %.2f\n", area);
    
    return 0;
}

