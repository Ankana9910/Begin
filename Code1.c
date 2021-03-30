#include <stdio.h>


typedef struct complex {

float real;

float imag;

} complex;

complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
complex mul(complex n1, complex n2);
complex divi(complex n1, complex n2);

complex add(complex n1, complex n2){
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex sub(complex n1, complex n2){
    complex temp;
        temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
    }
    
    complex mul(complex n1, complex n2){
    complex temp;
    temp.real = n1.real * n2.real;
    temp.imag = n1.imag * n2.imag;
    return (temp);}
    
    complex divi(complex n1, complex n2){
    complex temp;
    temp.real = n1.real / n2.real;
    temp.imag = n1.imag / n2.imag;
    return (temp);
    }
    
int main()
{
    complex n1, n2, result,result1,result2,result3;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);
     result1 = sub(n1, n2);
      result2 = divi(n1, n2);
       result3 = mul(n1, n2);
    
    
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    printf("Diff = %.1f + %.1fi", result1.real, result1.imag);
    printf("Division = %.1f + %.1fi", result2.real, result2.imag);
    printf("Multiply = %.1f + %.1fi", result3.real, result3.imag);
    return 0;
}
