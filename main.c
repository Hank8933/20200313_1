#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int n)
{
    //printf("%d\n",n);
    if (n == 0) return;
    decimalToBinary(n/2);
    printf("%d",n%2);
}

int main()
{
    int input;
    printf("十進位數字: ");
    scanf("%d",&input);
    printf("二進位: ");
    decimalToBinary(input);
    printf("\n");
    system("pause");
    return 0;
}
