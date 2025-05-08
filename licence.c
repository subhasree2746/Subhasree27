#include <stdio.h>

int main()
{
    int age = 50;
    int hasLicence = 1;
    if (age >= 18) {
        if (hasLicence) {
            printf("you can drive");
            if (age >= 40) {
                printf("please, renew the Licence");
            }
        }else {
            printf("you need a licence to drive");
        }
    }else {
        printf("you are too young to drive");
    }
    return 0;
    }