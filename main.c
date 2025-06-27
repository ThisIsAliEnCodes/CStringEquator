#include <string.h>
#include <stdio.h>

// This is the function thats check the equation between two strings
int stringEquation(char * str1 , char * str2)
{
    if (strlen(str1) == strlen(str2)){for (int i = 0; i < strlen(str1); i++){if (str1[i] == str2[i]){continue;}else{return 0;}}return 1;}return 0;
}


int main()
{
    char text[] = "hello worl";

    // Sample of using the function
    
    if (stringEquation(text , "hello worl"))
    {
        printf("correct!");
    }
    else
    {
        printf("incorrect!");
    }
    

    return 0;
}



