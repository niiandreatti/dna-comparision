/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char DnaH [13];
    char DnaE [13];
    int a;
    int i;
    int j;
    int k=0;
    int n=0;
    
    scanf("%d", &a);
    for(;a>0;a--){
        n=0;
        scanf("%s",DnaH);
        scanf("%s",DnaE);
    
   for(j=11;j>0;j--){
       for(i=0;i<j;i++){
           if(DnaH[i]>DnaH[i+1]){
               k=DnaH[i];
               DnaH[i]=DnaH[i+1];
               DnaH[i+1]=k;
           }
       }
   }
    for(j=11;j>0;j--){
        for(i=0;i<j;i++){
            if(DnaE[i]>DnaE[i+1]){
                k=DnaE[i];
                DnaE[i]=DnaE[i+1];
                DnaE[i+1]=k;
            }
        }
    }   
   for(i=0;i<12;i++){
       if(DnaH[i]!=DnaE[i]){
           n=2;
           break;
       }
   }  
if(n==2){
    printf("Caracteristicas Diferentes\n");
}
else{
    printf("Caracteristicas Iguais\n");
}
    }     
   
return 0;
}
