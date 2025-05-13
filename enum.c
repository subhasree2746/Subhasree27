# include <stdio.h>
enum days{ sunday, monday, tuesday, wednesday, thursday, friday ,saturday};
int main() {
    enum days today = friday;
    if (today == friday) {
        printf("today is friday!\n");
    }
    return 0;
}