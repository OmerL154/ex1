/******************
Name: Omer Levi
ID: 217552116
Assignment: Exercise 1/homework1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{
    
    // Ascii
    printf("Ascii:\n");
    char user_num; 
    printf("Please enter a character\n");
    scanf("%s", &user_num);
    printf("Its numerical value is: %d\n", user_num);
    printf("0 for even, 1 for odd: %d\n", user_num&1);
    



    // 2's complement and other representations
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    
    printf("\n2's Complement to Other Representations:\n");
    int negative_user_num;
    printf("Please enter a negative integer\n");
    scanf("%d", &negative_user_num);
    printf("1's complement: %d\n", ~(~negative_user_num - 1));
    printf("unsigned: %u\n", 4294967295 - ~negative_user_num);
    


    

    // Shifting right and left
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
    
    printf("\nShifting right and left:\n");
    int user_num1;
    int user_num2;
    int user_num3;

    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &user_num1, &user_num2, &user_num3);
    printf("After shifting right and left: %d\n", (user_num1>>user_num2)<<user_num3);
    




    // Even - Odd
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    
    printf("\nEven - Odd:\n");
    int num1;
    int num2;
    int num3;
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", ((num1|num2)&(num1|num3)&(num2|num3))&1);
    




    // Different Bases
    
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
    printf("\nDifferent Bases:\n");

    int octal;
    int hex;

    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o %x", &octal, &hex);

    printf("LSBs: %d %d\n", octal&1 , hex&1);
    printf("MSBs: %d %d\n", (octal>>31)&1, (hex>>31)&1);


    printf("Bye!\n");

    return 0;
}
