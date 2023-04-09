#include <stdio.h>

union data {
    int i;
    float f;
    char str[20];
};

int main() {
    union data d;
    d.i = 10;
    printf("d.i = %d\n", d.i);
    d.f = 2.5;
    printf("d.f = %f\n", d.f);
    strcpy(d.str, "hello");
    printf("d.str = %s\n", d.str);
    return 0;
}
