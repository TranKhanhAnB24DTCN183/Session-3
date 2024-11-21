#include <stdio.h>
#include <string.h>

int main() {
  
    char names[10][50];       
    int ages[10];              
    char phones[10][15];     
    char emails[10][50];    

   
    for (int i = 0; i < 10; i++) {
    	
         printf("Nhap ten sinh vien %d: ", i + 1);
        getchar();  
        fgets(names[i], sizeof(names[i]), stdin); 

        printf("Nhap tuoi sinh vien%d: ", i + 1);
        scanf("%d", &ages[i]);
        getchar();

        printf("Nhap so dien thoai sinh vien %d: ", i + 1);
        fgets(phones[i], sizeof(phones[i]), stdin);
    
        printf("Nhap email sinh vien %d: ", i + 1);
        fgets(emails[i], sizeof(emails[i]), stdin);
       
        printf("\n");
    }

   
    printf("\n%-5s%-20s%-10s%-15s%-30s\n", "STT", "Ten sinh vien", "Tuoi", "So dien thoai", "Email");
    printf("--------------------------------------------------------------\n");

   
    for (int i = 0; i < 10; i++) {
        printf("%-5d%-20s%-10d%-15s%-30s\n", i + 1, names[i], ages[i], phones[i], emails[i]);
    }

    return 0;
}

