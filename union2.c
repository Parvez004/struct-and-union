#include <stdio.h>

union color {
    int i;
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
    } rgb;
};

int main() {
    union color c;
    c.rgb.r = 255;
    c.rgb.g = 0;
    c.rgb.b = 0;
    printf("c.i = %d\n", c.i);
    return 0;
}
