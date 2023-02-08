#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void decimalToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}
void decimalToOctal(int n)
{
    int octalNum[100];
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
    printf("\n");
}
void decimalToHexadecimal(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while(n!=0)
    {
        int temp  = 0;
        temp = n % 16;
        if(temp < 10)
           hexaDeciNum[i] = temp + 48;
        else
           hexaDeciNum[i] = temp + 55;
        i++;
        n = n/16;
    }
    printf("Hexadecimal: ");
    for(int j=i-1; j>=0; j--)
        printf("%c", hexaDeciNum[j]);
    printf("\n");
}
int binaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
void binaryToOctal(int binary)
{
    int decimal = binaryToDecimal(binary);
    decimalToOctal(decimal);
}
void binaryToHexadecimal(int binary)
{
    int decimal = binaryToDecimal(binary);
    decimalToHexadecimal(decimal);
}
int main()
{
    int choice=1, n,binary;
    printf("\n\tENTER DECIMAL NO. :");
    scanf("%d",&n);
    printf("\n\tENTER BINARY NO. :");
    scanf("%d",&binary);
    while(choice!=0)
    {
        printf("1. Decimal to Binary        4. Binary to Decimal\n");
        printf("2. Decimal to Octal         5. Binary to Octal\n");
        printf("3. Decimal to Hexadecimal   6. Binary to Hexadecimal\n");
        printf("\n\tENTER HERE :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {   decimalToBinary(n);
                break; }
            case 2:
            {   decimalToOctal(n);
                break; }
            case 3:
            {   decimalToHexadecimal(n);
                break; }
            case 4:
            {   printf("Decimal: %d\n",binaryToDecimal(binary));
                break; }
            case 5:
            {   binaryToOctal(binary);
                break; }
            case 6:
            {   binaryToHexadecimal(binary);
                break; }
        }
    }
}
