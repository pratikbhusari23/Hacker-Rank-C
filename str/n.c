/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main(){


    char str[200];

    printf("Enter your string :"
    

    int i=0;
    char ch;
    while((ch=getchar())!='\n'){
        str[i] = ch;
        i++;
    }
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] !=' '){
            printf("%c",str[i]);
        }else{
            printf("\n");
        }
    }
        

        
    
}
