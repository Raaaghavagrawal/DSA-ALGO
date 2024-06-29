#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    float marks;
    char school_name[100];
};

int main()
{
    struct Student raghav, aman, khusboo;
    raghav.id = 001;
    aman.id = 002;
    khusboo.id = 003;
    raghav.marks = 91.8;
    aman.marks = 60.0;
    khusboo.marks = 76.5;

    // Raghav's details
    printf("Raghav's ID is %d \nRaghav got %.2f marks in 12th standard\n", raghav.id, raghav.marks);
    strcpy(raghav.school_name, "VrindavanPublicSchool");
    printf("Raghav's school name is %s\n", raghav.school_name);

    // Aman's details
    printf("Aman's ID is %d \nAman got %.2f marks in 12th standard\n", aman.id, aman.marks);
    strcpy(aman.school_name, "VrindavanPublicSchool");
    printf("Aman's school name is %s\n", aman.school_name);

    // Khusboo's details
    printf("Khusboo's ID is %d \nKhusboo got %.2f marks in 12th standard\n", khusboo.id, khusboo.marks);
    strcpy(khusboo.school_name, "SamvidGurukulamSchool");
    printf("Khusboo's school name is %s\n", khusboo.school_name);

    return 0;
}
