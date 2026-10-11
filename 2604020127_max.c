#include <stdio.h>

// 1. 提前声明 max 函数（告诉编译器有一个 max 函数）
int max(int a, int b);

int main()
{
    int a, b, c;
    
    // 获取第一个整数
    printf("请输入第一个整数: ");
    scanf("%d", &a); // 读取用户输入的数字
    
    // 获取第二个整数
    printf("请输入第二个整数: ");
    scanf("%d", &b); // 读取用户输入的数字
    
    // 调用 max 函数计算最大值并赋值给 c
    c = max(a, b);
    
    // 打印结果
    printf("最大的整数是: %d\n", c);
    
    return 0;
}

// 2. 在这里写 max 函数的具体实现逻辑
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}