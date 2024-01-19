#include <stdio.h>
#include <math.h>
#define pi 3.14
float cuboid_volume(float a, float b, float c) {
    return(a*b*c);
}

float roller_volume(float r, float h){
    return(pi*(r*r)*h);
}

void cuboid_volume_service(){
    float a, b, c;

    printf("Podaj wartosc a:");
    scanf("%f", &a);

    printf("Podaj wartosc b:");
    scanf("%f", &b);

    printf("Podaj wartosc c:");
    scanf("%f", &c);

    printf("Pole prostopadloscianu: %f\n", cuboid_volume(a,b,c));

}

void roller_volume_sevice(){
    float r, h;

    printf("Podaj wartosc r:");
    scanf("%f", &r);

    printf("Podaj wartosc h:");
    scanf("%f", &h);

    printf("Objetosc walca: %f\n", roller_volume(r,h));

}


int main(){
    cuboid_volume_service();
    roller_volume_sevice();
    return 0;


}





