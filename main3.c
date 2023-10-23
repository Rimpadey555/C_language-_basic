// 1.Function in c: data_type function_name(parameter_type parameter-name){ return values_of_data_type;}
// 2.array
// 3.pointer
// 4.string
// 5.structure
#include <stdio.h>
#include <string.h>

int glo = 76; // this is global varible
void newPrint(char *char1)
{
    printf("%s\n", char1);
}

int sum(int a, int b)
{
    return a + b;
}

long int mul(int a, int b)
{
    return a * b;
}

float average(int a, int b)
{
    return (float)(a + b) / 2;
}

void printStr(char str[]) // function to prin an array of charecter
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}


struct Product{
    char code[50];
    char company[50];
    int price;
} product;

void printstruct(struct Product item){
    printf("Product code is %s ,",item.code);
    printf("Product company is %s ,",item.company);
    printf("Product cost is %d ",item.price);
    printf("\n");

}

int main(int argc, char const *argv[])
{ /*
  newPrint("Hello world \n");
  printf("Enter two number you want to calculate.\n");
  int num1,num2;
  scanf("%d",&num1);
  printf("&\n");
  scanf("%d",&num2);
  printf("sum is: %d\n",sum(num1,num2));
  printf("multiplication is: %d\n",mul(num1,num2));
  printf("avarage is: %f\n",average(num1,num2));

  printf("printing global varible glo %d\n",glo);
  int glo=55;
  printf("printing local varible glo  %d\n",glo);
  // local varible prefarence is hogjher than global with the same name
*/
    /*
        printf("\n**************ARRAY IN C***********\n\n");
        int arr[5] = {1, 2, 3, 4, 5}; // array declearation and initialization
        printf("%d\n", arr[1]);
        printf("The element of array are :\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d\n", arr[i]);
        }

        int arr2[10];

        for (int i = 1; i <= 10; i++)
        {
            printf("Enter the elemnt of array for index %d is: ", i);
            scanf("%d", &arr2[i]);
        }
        // printf("for the 2nd array ");
        // printf("The element of 2nd  array are :\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", arr2[i]);
        }

    // character array
    char arr3[] = "my name is rimpa dey";
    char arr4[9];
    puts(arr3);//printing character arrray
    printf("\n");
    printStr(arr3);
    char str[36];
    printf("\n");
    gets(str);// gets the elment of charcter array
    puts(str);

*/

    /*

        // pointer
        printf("\n**************POINTER IN C***********\n\n");
        int a = 45;
        printf("%d\n", a);
        int *ptr;
        ptr = &a;
        *ptr = a;
        printf("%d\n", a);
        printf("%d\n", &a);
        printf("%d\n", ptr);
        printf("%d\n", &ptr);
        *ptr = 988;
        printf("%d\n", a);
        printf("%d\n", *ptr);

        int *ptr1 = NULL;
        if (ptr1)
        {
            printf("pointer is not null");
        }
        if (!ptr1)
        {
            printf("pointer is  null");
        }

    */

    /*
        // STRING
        printf("\n**************STRINGS IN C***********\n\n");
        char name[3]={'m','y','\0'};//\0 is null character that indicate end of string
        char str1[65],str2[98],str3[32];
        strcpy(str1,name);
        printf("%s\n",name);
        printf("%s\n",str1);
        strcpy(str2,"rimpa");
        printf("%s\n",str2);

        strcat(str1,str2);
        printf("%s\n",str1);
        printf("%d",strcmp(str2,str1));

    */


//structure

printf("\n**************STRUCTURE IN C***********\n\n");

struct Product item1,item2;
strcpy(item1.code,"c001");
strcpy(item1.company,"itc");
item1.price=50;

strcpy(item2.code,"c002");
strcpy(item2.company,"tata");
item2.price=510;

printstruct(item1);
printstruct(item2);


    return 0;
}
