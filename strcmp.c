#include <stdio.h>

int main() {
    char str1[10]; // Now empty, waiting for user
    char str2[10];

    printf("Enter first string: ");
    scanf("%[^\n]s", str1); // scanf is better here because it ignores the 'Enter' key
    
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    char* x = str1;
    char* y = str2;
    int sum = 0;

    // --- YOUR EXACT LOGIC STARTS HERE ---
    while (*x != '\0' || *y != '\0') {
        if (*x == *y) {
            sum = 0;
            x++; y++; 
        } 
        else if (*x > *y) {
            sum = 1;
            break; 
        } 
        else {
            sum = -1;
            break; 
        }
    }
    // --- YOUR EXACT LOGIC ENDS HERE ---

    if(sum ==0){
        printf("both are equal.");

    }
    else if(sum ==1){
        printf("%s comes before %s.\n",str2,str1);
    }
    else{
        printf("%s comes before %s.\n",str1,str2);
    }
    return 0;
}