#include <stdio.h>

char sibs[5][20] = {"franco", "ashton", "gage", "melian", "leo"};
int i;
int main (){
    while(i<5){
        if (sibs == "franco"){
            printf("%s", sibs[i]);
            printf(" the oldest one. \n");
        }else if (sibs == "ashton"){
            printf("%s", sibs[i]);
            printf(" the funny one. \n");
        }else if (sibs == "gage"){
            printf("%s", sibs[i]);
            printf(" the annoying but not super annoying one. \n");
        }else if (sibs == "melian"){
            printf("$s", sibs[i]);
            printf(" the REALLY annoying one, he's lucky he's only 4. \n");
        }else{
            printf("%s", sibs[i]);
            printf(" the also REALLY annoying one, but a lot cuter so he passes. \n");
        }
        i+=1;
    }
return 0;
}