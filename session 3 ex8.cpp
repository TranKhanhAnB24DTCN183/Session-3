#include <stdio.h>

int main() {
    int number,reversed;
    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    if (number >= 1000 && number <= 9999) {
        int reversed = 0;
        
       while (number != 0) {
            reversed = reversed * 10 + number % 10;  
            number /= 10;  
        }

        printf("So nghich dao la: %d\n", reversed);
    }
	else {
        printf("Vui long nhap mot so nguyen co dung 4 chu so!\n");
    }

    return 0;
}

