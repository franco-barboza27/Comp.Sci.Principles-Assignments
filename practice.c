#include <stdio.h>

char sibs[5][20] = {"franco", "ashton", "gage", "melian", "leo"};
int i;
int main (){
    while(i<5){
        printf("%s\n", sibs[i]);
        i++;
    }
return 0;
}