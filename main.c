// This is c_in_one_vedio by code with harry
// 1.basic structure
// 2.Data Type
// 3.Variable
// 4.Operator

#include <stdio.h>

int main()
{
    printf("hello world!!\n");

    // data type : int, float, char
    printf("\n\n******DATA TYPE IN C ******\n\n");
    int integer = 24; // 2-4 byte
    printf("printing integer variable %d\n", integer);

    unsigned short integer1 = 8;
    long integer2 = 16;
    short interger3 = 2;

    float float1 = 23.362; // 4 byte
    printf("printing float variable actual value %f\n", float1);
    printf("printing float variable 1 desimal  value %.1f\n", float1);
    printf("printing float variable 2 desimal  value %.2f\n", float1);
    char char1 = 'i'; // 1byte
    printf("printing character variable: %c\n", char1);

    double myfloat = 36.369;       // 15 desimal place
    long double myfloat1 = 36.369; // 19 desimal placers

    // size of function
    printf("\n\n******SIZE OF FUNCTION IN C ******\n\n");
    printf("the size taken by int is :%d\n", sizeof(int));
    printf("the size taken by unsigned int is :%d\n", sizeof(unsigned int));
    printf("the size taken by long int is :%d\n", sizeof(long int));
    printf("the size taken by short int is :%d\n", sizeof(short int));
    printf("the size taken by unsigned short int is :%d\n", sizeof(unsigned short int));

    printf("\n");
    printf("The size taken by float :%d\n", sizeof(float));
    printf("The size taken by double :%d\n", sizeof(double));
    printf("The size taken by long double :%d\n", sizeof(long double));

    printf("\n");

    printf("the size of char :%d\n", sizeof(char));
    printf("the size of unsigned char :%d\n", sizeof(unsigned char));

    // rule for creating varible
    printf("\n\n*************RULE FOR CREATING VARIBLE IN C**********\n\n");
    // int 6rimpa ;// cant starrt with number
    int _rimpa;        // can start with underscore
    int rimpaDey;      // this is vaible decleartion
    rimpaDey = 23;     // this is varible initialization
    rimpaDey = 25;     // can change the value
    int rimpaAge = 23; // varible declearation and initialization
    char five = '5';

    const int value = 2; // the value constat cant be change after initialization
    // two =5;

    // operator in c
    printf("\n\n*************TYPE OF OPERATOR IN C**********\n\n");
    // 1.ARITHEMETIC OPERATOR
    // 2.RELATIONAL OPERATOR
    // 3.LOGICAL OPERATOR
    // 4.BITWISE OPERATOR
    // 5.ASSIGNMENT OPERATOR
    // MISLENIOUS

    printf("1.ARITHMETIC OPERATOR :\n");
    int a = 2, b = 7, c = 8;
    printf("the sum of a + b = %d\n", a + b);
    printf("the difference  of a c-a = %d\n", c - a);
    printf("the multiplication of a * b = %d\n", a * b);
    float result = (float)b / a; /// this is typecasting
    printf("the division of b / a = %f\n", result);
    printf("the division of c / a = %d\n", c / a);
    printf("the modulo of ab and a = %d\n", b % a); // modulo operator
    printf("now the value of a is : %d\n", a++);    // this will print the value then increment ;-> increment operator
    printf("now the value of a after a++ is : %d\n", a);
    printf("now the value of a after ++a is : %d\n", ++a);
    printf("now the value of a after --a is : %d\n", --a); // decrement operator

    printf("\nRELATIONAL OPERATOR :\n");
    // this return 0 if falsh & 1 for true
    int rinku = 21, sumana = 19, champa = 21;
    printf("is rinku==sumana : %d\n", rinku == sumana);
    printf("is rinku==champa : %d\n", rinku == champa);
    printf("is rinku!=sumana : %d\n", rinku != sumana);
    printf("is rinku>sumana : %d\n", rinku > sumana);
    printf("is rinku<sumana : %d\n", rinku < sumana); // there also have <= and >= operator

    printf("\nLOGICAL OPERATOR :\n");
    int a1 = 1, a2 = 0, a3 = 1, a4 = 0;
    ;
    printf("the logical and operator of a1 && a2 return %d\n", a1 && a2);
    printf("the logical and operator of a1 && a3 return %d\n", a1 && a3);
    printf("the logical or operator of a2 || a4 return %d\n", a2 || a4);
    printf("the logical or operator of a1 || a2 return %d\n", a1 || a2);
    printf("the logical nor operator of !a1 return %d\n", !a1);

    printf("\nBITWISE OPERATOR :\n");
    int a5 = 1, a6 = 0;
    printf("the bitwise operator of a5 & a6 returns %d\n", a5 & a6);
    printf("the bitwise operator of a5 | a6 returns %d\n", a5 | a6);
    printf("the bitwise operator of a5 ^ a6 returns %d\n", a5 ^ a6);
    printf("the bitwise operator of ~ a6 returns %d\n", ~a5); // compliment operator for one operend

    printf("\nASSIGNMENT OPERATOR :\n");
    //==,+=,-=,*=,%=
    int a7 = 4;
    printf("the value of variable s : %d\n", a7);
    a7 *= 5;
    printf("the value of variable s : %d\n", a7);
    a7 -= 1;
    printf("the value of variable s : %d\n", a7);

    // mislanious operator
    // ?: ,*

    return 0;
}