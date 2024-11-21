#include <stdio.h>

int main() {
   
    float PI = 3.14159; 
    float radius, circumference, area; 
      printf("Nhap ban kinh hinh tron (r): ");
      scanf("%f", &radius);
      
	    circumference = 2 * PI * radius; 
        area = PI * radius * radius;  
    
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

       return 0;
}

