/*
funcion que convierta de grados celcius a farenheit
faren = grados*(9/5)+32
*/
#include<stdio.h>

double Farenheit(float);

int main(){
    float tempini;
    float tempfin;

    printf("bienvenido, por favor ingresa una temperatura en grados: ");
    scanf("%f", &tempini);

    tempfin = Farenheit(tempini);
    printf("\n la temperatura es %.2f farenheit" , tempfin);

    return 0;
}

double Farenheit(float grad){

    return ((grad*1.8)+32);
}