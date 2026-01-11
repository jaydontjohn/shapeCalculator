#include<stdio.h>
#include<math.h>
#define PI 3.14159

void Calc2D(char shape);
void Calc3D(char shape, int calc);
int main(){

    char option;
    char shape;
    int whichCalc;
    printf("\nWelcome to shape calulator, please type in \"2\" for 2D shape and \"3\" for 3D shape calculation: ");
    scanf("%c",&option);
    getchar(); // to consume the newline character left by scanf

    if(option == '2'){
        printf("\nNow choose what 2D shape you want to calculate the area for");
        printf("\n T for Triangle   C for Circle    S for Square    R for Rectangle");
        scanf("%c", &shape);
        //getchar();
        Calc2D(shape);
        //scanf("%c",whichCalc);
    }
    //3d shape
    if(option == '3'){
        printf("\nNow choose what 3D shape you want to calculate the area for");
        printf("\n C for Cube   S for Sphere    P for Pyramid    R for Rectangular Prism");
        scanf("%c", &shape);
        getchar(); // to consume the newline character left by scanf
        printf("\nType in \"1\" for surface area and \"2\" for volume: ");
        scanf("%d",&whichCalc);
        Calc3D(shape,whichCalc);
        return 0;
    }
 
    }//end of main
    

    void Calc2D(char shape){
       if(shape == 'T'){
        float base;
        float height;
        float area;
            printf("\nWhat is the base: ");
            scanf("%f",&base);
            printf("\nWhat is the height: ");
            scanf("%f",&height);
            area = base * height/2;
            printf("\nArea of the triangle = %0.2f",area);
            
        }
        else if(shape == 'C'){
            float radius;
            float area;
            printf("\nWhat is the radius: ");
            scanf("%f",&radius);
            area = PI * radius * radius;
            printf("\nArea of the circle = %0.2f",area);
        }
        else if(shape == 'S'){
            float side;
            float area;
            printf("\nWhat is the side length: ");
            scanf("%f",&side);
            area = side * side;
            printf("\nArea of the square = %0.2f",area);
        }

        else if(shape == 'R'){
            float length;
            float width;
            float area;
            printf("\nWhat is the length: ");
            scanf("%f",&length);
            printf("\nWhat is the width: ");
            scanf("%f",&width);
            area = length * width;
            printf("\nArea of the rectangle = %0.2f",area);      
        }

        else{
        printf("\nInvalid shape option!\n");
        }   
    }

    void Calc3D(char shape, int calc){
        if(shape == 'C'){
            float side;
            float surfaceArea;
            float volume;
            printf("\nWhat is the side length: ");
            scanf("%f",&side);
            if(calc == 1){
                surfaceArea = 6 * side * side;
                printf("\nSurface Area of the cube = %0.2f",surfaceArea);
            }
            else if(calc == 2){
                volume = side * side * side;
                printf("\nVolume of the cube = %0.2f",volume);
            }
        }
        else if(shape == 'S'){
            float radius;
            float surfaceArea;
            float volume;
            printf("\nWhat is the radius: ");
            scanf("%f",&radius);
            if(calc == 1){
                surfaceArea = 4 * PI * radius * radius;
                printf("\nSurface Area of the sphere = %0.2f",surfaceArea);
            }
            else if(calc == 2){
                volume = (4.0/3.0) * PI * radius * radius * radius;
                printf("\nVolume of the sphere = %0.2f",volume);
            }
        }
        else if(shape == 'P'){
            float baseLength;
            float baseWidth;
            float height;
            float surfaceArea;
            float volume;
            printf("\nWhat is the base length: ");
            scanf("%f",&baseLength);
            printf("\nWhat is the base width: ");
            scanf("%f",&baseWidth);
            printf("\nWhat is the height: ");
            scanf("%f",&height);
            if(calc == 1){
                surfaceArea = baseLength * baseWidth + baseLength * sqrt((baseWidth/2)*(baseWidth/2) + height*height) + baseWidth * sqrt((baseLength/2)*(baseLength/2) + height*height);
                printf("\nSurface Area of the pyramid = %0.2f",surfaceArea);
            }
            else if(calc == 2){
                volume = (1.0/3.0) * baseLength * baseWidth * height;
                printf("\nVolume of the pyramid = %0.2f",volume);
            }
        }
        else if(shape == 'R'){
            float length;
            float width;
            float height;
            float surfaceArea;
            float volume;
            printf("\nWhat is the length: ");
            scanf("%f",&length);
            printf("\nWhat is the width: ");
            scanf("%f",&width);
            printf("\nWhat is the height: ");
            scanf("%f",&height);
            if(calc == 1){
                surfaceArea = 2 * (length * width + width * height + height * length);
                printf("\nSurface Area of the rectangular prism = %0.2f",surfaceArea);
            }
            else if(calc == 2){
                volume = length * width * height;
                printf("\nVolume of the rectangular prism = %0.2f",volume);
            }
        }
        else{
            printf("\nInvalid shape option!\n");
        }
    }
