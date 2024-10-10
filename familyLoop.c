#include <stdio.h>

char sibs[5][30] = {"franco", "ashton", "gage", "melian", "leo"};
int i;
int main (){
    for(i==0;i<=5;i++){
        if (strcmp(sibs[i] , "leo")==0){
            printf("%s", sibs[i]);
            printf(" the also REALLY annoying one, but a lot cuter so he passes. \n. \n");

        }else if (strcmp(sibs[i] , "melian")==0){
            printf("%s", sibs[i]);
            printf(" the REALLY annoying one, he's lucky he's only 4. \n");

        }else if (strcmp(sibs[i] , "gage")==0){
            printf("%s", sibs[i]);
            printf(" the annoying but not super annoying one. \n");

        }else if (strcmp(sibs[i] , "ashton")==0){
            printf("%s", sibs[i]);
            printf(" the funny one. \n");

        }else if (strcmp(sibs[i] , "leo")){
            printf("%s", sibs[i]);
            printf(" the oldest one. \n");
        }else{
            return 0;
        }
    }
return 0;
}