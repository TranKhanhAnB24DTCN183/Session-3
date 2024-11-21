#include <stdio.h>

int main() {
    int number;
    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    if (number >= 1000 && number <= 9999) {
        int sum = 0;
        
        while (number > 0) {
            sum += number % 10;  
            number /= 10;      
        }


        printf("Tong cac chu so trong so la: %d\n", sum);
    } 
	else {
        printf("Vui long nhap mot so nguyen co dung 4 chu so!\n");
    }

    return 0;
}

