#include <stdio.h>
#include<math.h>

//this will work for majority of the quadratic equations


#define FALSE 6

float quadpos(int a,int b,int c){
    float x,y;

    if((float)(pow(b,2)-(4*a*c))<0){
        return FALSE;
    }

    x = (-b + (float)round(pow(pow(b,2)-(4*a*c),0.5)))/(2.0*a);
    
    return x ;
}
float quadneg(int a,int b,int c){
    float x,y;
    if(pow(pow(b,2)-(4*a*c),0.5)<0){
        return FALSE;
    }

    y = (-b - (float)round(pow(pow(b,2)-(4*a*c),0.5)))/(2.0*a);
    
    return y ;
}

int main() {
    int a,b,c;
    float pos,neg;
    printf("enter the coefficients of quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);

    pos = quadpos(a,b,c);
    neg = quadneg(a,b,c);


    if(pos == FALSE || neg == FALSE){
        printf("the roots are imaginary.");
    }
    else{
       

        printf("%f\t%f",pos,neg);
    }
    /*another way where imaginary roots are also calculated
    
        #include <stdio.h>
        #include <math.h>

        void solveQuadratic(int a, int b, int c) {
        float discriminant = (b * b) - (4 * a * c);
        float realPart = -b / (2.0 * a);

        if (discriminant > 0) {
        // Two distinct real roots
        float root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        float root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
        } 
        else if (discriminant == 0) {
        // One real root
        printf("Roots are real and same: %.2f\n", realPart);
        } 
        else {
        // Imaginary roots
        float imaginaryPart = sqrt(-discriminant) / (2.0 * a);
        printf("Roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n", 
            realPart, imaginaryPart, realPart, imaginaryPart);
        }
        }

        int main() {
        int a, b, c;
        printf("Enter coefficients a, b and c: ");
        if (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0).\n");
        } else {
        solveQuadratic(a, b, c);
        }
        }
        return 0;
        }
    
    
    
    */
    


    return 0;
}