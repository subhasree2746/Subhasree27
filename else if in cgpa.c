#include <stdio.h>
int main(){
    float cgpa = 3;
    
    if (cgpa > 9.5) {
        printf("grade : O\n");
    }else if (cgpa >= 8.5 ) {
        printf("grade : A+\n");
    }else if(cgpa >= 7.5) {
        printf("grade : A\n");
    }else if(cgpa >= 7) {
        printf("grade : B+\n");
    }else if(cgpa >= 6.5) {
        printf("grade : B\n");
    }else {
        printf("grade : C\n");
    }
    return 0;
}