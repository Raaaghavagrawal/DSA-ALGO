#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You have entered %d as your age !!\n", age);
    if (age >= 18 ) {
        printf("you are eligible to vote !!\n");      
    }
    else if(age >= 15){
        printf("Sorry ! you need more time to vote\n");
    }

    else{
        printf("Sorry you can't Vote !!\n");
    }
    return 0;
}
