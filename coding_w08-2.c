#include <stdio.h>

int main() {
    int start, stop;
    
    // รับค่าตัวเลขเริ่มต้นและสุดท้าย
    printf("Enter start number: ");
    scanf("%d", &start);
    
    printf("Enter stop number: ");
    scanf("%d", &stop);
    
    // แสดงข้อความเริ่มต้น
    printf("Start number is %d and stop number is %d.\n", start, stop);
    
    // แสดงลำดับตัวเลขจาก start ไป stop
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    
    // ขอบคุณ
    printf("\nThank you.\n");
    
    return 0;
}