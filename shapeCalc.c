#include<stdio.h>
void Calc2D(char shape);
int main(){

    char option;
    //char whichCalc;
    printf("\nWelcome to shape calulator, please type in \"2\" for 2D shape and \"3\" for 3D shape calculation: ");
    scanf("%c",&option);
    getchar(); // to consume the newline character left by scanf

    if(option == '2'){
        printf("\nNow choose what 2D shape you want to calculate the area for");
        printf("\n T for Triangle   C for Circle    S for Square    R for Rectangle");
        scanf("%c", &option);
        //getchar();
        Calc2D(option);
        //printf("Enter P for Perimeter or A for Area");
        //scanf("%c",whichCalc);


    }
    //3d shape
    else{
        printf("\nSorry this isn't set up yet :/");
    }

        return 0;
    }
    //end of main


     int CalculateShape(char shape, char calc){
        
    }//end of calc function

    void Calc2D(char shape){
       if(shape == 't'){
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
           
        }
        else if(shape == 'S'){
           
        }

        else if(shape == 'R'){
            
        }
        
    }
