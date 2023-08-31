#include <stdio.h>

int main() {
    int levels;
    
    printf("请输入金字塔的层数：");
    scanf("%d", &levels);
    
    printf("金字塔形状：\n");
    for (int i = 1; i <= levels; i++) {
        // 打印每一行的空格
        for (int j = 1; j <= levels - i; j++) {
            printf(" ");
        }
        
        // 打印每一行的星号
        for (int k = 1; k <= (i - 1) * 2 + 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
