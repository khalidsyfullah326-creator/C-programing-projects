#include<stdio.h>
float add(float a,float b){
    return a + b;
}
float substract(float a,float b){
    return a - b;
}
float multiply(float a,float b){
    return a * b;
}
float devide(float a,float b){
    return a / b;
}
int main(){
    float a, b;
    printf("Enter the value of a,b : ");
    scanf("%f%f",&a,&b);
    float add_result = add(a,b);
    float substract_result = substract(a,b);
    float multiply_result = multiply(a,b);
    float devide_result = devide(a,b);
    printf("Add :%f,\nSubstract :%f,\nMultiply :%f,\nDevide :%f\n",add_result,substract_result,multiply_result,devide_result);
    return 0;
}
