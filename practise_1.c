#include <stdio.h>

// Define a structure with 3 members
struct myStruct {
    int a;
    float b;
    char c;
};

// Define a union with 3 members
union myUnion {
    int a;
    float b;
    char c;
};

int main() {
    // Create instances of the structure and union
    struct myStruct s;
    union myUnion u;

    // Print the size of the structure and union
    printf("Size of struct: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));

    return 0;
}
