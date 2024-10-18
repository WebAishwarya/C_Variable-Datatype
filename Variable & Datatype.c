/*
    Variable & Datatype :
    
    1. Variable - 
        VARI (changes) + ABLE (availabel)
        RAM - Random Access Memory (Temporary)
        
        * VARIABLE is the name of the memory location which is temporary.
        * STORAGE CONTAINER which stores value or data which is temporary.
        
        ~ Rules for declaring a variable :
            1. Variable name can only start with an alphabet or underscore (_).
            2. Variable name cannot have whitespaces.
            3. Only underscore(_) & dollar($) are allowed in between variable name.
            4. C programming is a case sensitive language.
        
    2. Datatype -
        * DATATYPE is a types of the data which a variable will hold.
*/

#include<stdio.h>
int main()
{
    int n;  //  Variable Declaration
    n = 20; //  Variable Initialization or Variable Assignment
    //  int n = 20; //  Variable Declaration with Initialization
    
    int a = 10;
    int b = 20;
    printf("%d\n", a);  //  %d - Format Specifier or Format String
    printf("Value %d of a is : %d\n",a,b);
    printf("Value of a is : %d\n",a);
    
    //  Variable Declaration
    
    //  Way 1
    int n1;
    int n2;
    int result;
    
    //  Way 2
    //  int n1, n2, result; //  This statement can save statements of code but it will allocates seprate memory position
    
    n1 = 20;
    n2 = 20;
    result = n1 + n2;
    
    printf("Addition of n1 & n2 is : %d\n", result);
    printf("Addition of 20 & 20 is : %d\n", result); // Wrong way because values may varry changes so it will becomes hard to update statements every time
    printf("Addition of %d & %d is : %d\n", n1,n2,result);
    
    // Variable Declaration Rules
    
    //  Correct Ways :
    int abc1;
    int abc;
    int _abc;
    int abc_xyz;
    int abc$xyz;
    
    //  Wrong Ways :
    // int 123;    //  We cannot declare a variable by giving numeric value because numeric value already has binary representation and it will create problamatic for compiler to understand.
    // int @abc;
    // int abc#;
    //int pqr stu;
    
    int aishwarya;  //  lower case
    // int aishwarya;
    int Aishwarya;  //  Capitalize case
    int AISHWARYA;  //  UPPER CASE
    int AiShWaRyA;  // SnAkE cAsE
    int aishwaryaJadhav; //  camelCase
    
    return 0;
}
