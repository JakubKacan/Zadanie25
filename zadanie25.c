#include <stdio.h>
#include <math.h>

float cuboid_field(float a, float b, float c) {
    return(a*b*c);
}

void cuboid_field_service(){
    float a, b, c;

    printf("Podaj wartosc a:");
    scanf("%f", &a);

    printf("Podaj wartosc b:");
    scanf("%f", &b);

    printf("Podaj wartosc c:");
    scanf("%f", &c);

    printf("Pole prostopadloscianu: %f\n", cuboid_field(a,b,c));

}

int main(){
    cuboid_field_service();

    return 0;


}





