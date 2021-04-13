/*
    Problem statement : accept name from user and print that name.
*/
 
/*
    Algorithm
 
    START
 
        Create an array to store a string
        accept string from user
        store it into the array
		display the string

   STOP

 */
 
 #include <stdio.h>							//includes files


int main()
{
    char Name[30];
    printf("Please enter full name: ");
    scanf("%s",Name);
    printf("Your Name is : %s ",Name);
    return 0;
}


