// 1.Scanf function
// 2.type casting
// 3.if-else and switch case statement
//4.do while,while and for loop
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    // scanf function
    printf("**********TAKING INPUT FROM USER *********\n\n");
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    float marks;
    printf("enter your percentage marks ");
    scanf("%f", &marks);

    char sec;
    printf("Enter your section ");
    scanf(" %c", &sec);

    printf("hello !! your age is %d ,marks is %f and section is %c ", age, marks, sec);
*/

    // type casting
    printf("\n************TYPE CASTING*********\n\n");
    int a = 12, b = 23;
    int result = b / a;
    printf("result is %d\n", result);
    float result1 = (float)b / a;
    printf("result is %f\n", result1);

    // float c=22.36;
    // printf("the value of c is %d\n",c);// this can't done : we  can type ypecast the small size data type into big size data type

    // Decission making
    printf("\n************DECISION MAKING*********\n\n");

    // 1.if-else statement
    // 2.switch case

    int age;
    printf("enter your age :");
    scanf("%d", &age);

    // if else if ladder
    if (age >= 18)
    {
        if (age > 80)
        {
            printf("You are giving vote for past %d year ..... thank you, and ", age - 18);
        }
        printf("You are elegible to give vote ");
    }
    else if (age > 17 && age < 18)
    {
        printf("You are not elebible for voting ..you should apply for voter card");
    }

    else
    {
        printf("You are not elegible for voting");
    }
    int four = age > 3 ? 4 : 0; // short hand if else
    // switch statement
    int day;
    printf("\nEnter the day of the week :");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is Wednessay");
        break;
    case 4:
        printf("Today is Thirsday");
        break;
    case 5:
        printf("Today is Friday");
        break;
    case 6:
        printf("Today is Saturday");
        break;
    case 7:
        printf("Today is Sunday");
        break;
    default:
        printf("You enter an ivalid input");
        break;
    }

    printf("\n************LOOPS IN C *********\n\n");
    // while loop
    int index = 0;
    while (index < 10)
    {
        printf("\n our index is %d", index);
        index++;
    }
    // for loop
    printf("\nThe result for the for loops is ");
    for (int i = 0; i <= 100; i++)
    {
        printf("%d  ", i);
    }
    // do_while loop
    int i=0;
    printf("\n\nStarting Do While Loop\n");
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<10);


    return 0;
}
