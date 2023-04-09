#include <stdio.h>

struct student {
   char name[50];
   int age;
   float marks;
};

int main() {
   struct student s1;
   printf("Enter name: ");
   scanf("%s", s1.name);
   printf("Enter age: ");
   scanf("%d", &s1.age);
   printf("Enter marks: ");
   scanf("%f", &s1.marks);

   printf("\nStudent Details\n");
   printf("Name: %s\n", s1.name);
   printf("Age: %d\n", s1.age);
   printf("Marks: %.2f\n", s1.marks);

   return 0;
}
