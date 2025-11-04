#include<stdio.h>

int main(){

    char option;
    char whichCalc;
    printf("\nWelcome to shape calulator, please type in \"2\" for 2D shape and \"3\" for 3D shape calculation: ");
    scanf("%c",&option);

    if(option == '2'){
        printf("\nNow choose what 2D shape you want");
        printf("\n T for Triangle   C for Circle    S for Square    R for Rectangle");
        scanf("%c", &option);
        printf("Enter P for Perimeter or A for Area");
        scanf("%c",whichCalc);


    }
    else{
        printf("\nSorry this isn't set up yet :/");
    }

        return 0;
    }//end of main


     int CalculateShape(char shape, char calc){
        if(shape == 'T'){
            if (calc == 'P'){

            }
            if(calc == 'A'){

            }
        }
        else if(shape == 'C'){
            if (calc == 'P'){

            }
            if(calc == 'A'){
                
            }
        }
        else if(shape == 'S'){
            if (calc == 'P'){

            }
            if(calc == 'A'){
                
            }
        }

        else if(shape == 'R'){
            if (calc == 'P'){

            }
            if(calc == 'A'){
                
            }
        }
        return 0;
    }//end of calc function
