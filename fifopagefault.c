#include<stdio.h>
int main () {
    int incom[] = {1,2,1,1,1};
    int fault = 0;
    int frames = 3;
    int m,n,s,pages;

    pages = sizeof(incom)/sizeof(incom[0]);
    printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3 ");
    int temp[frames];

    for (m=0;m<frames;m++) {
        temp[m] = -1;
        }
        
        for(n=0;n<frames;n++) {
            if(incom[m] == temp[n]) {
                s++;
                fault--;

            }
        }
        fault++;

        if((fault<= frames) && (s==0)) {
            temp[m] = incom[m];

        }
        else if(s==0) {
            temp[(fault - 1) % frames] = incom[m];

        }
        printf("\n");

        printf("%d \t\t\t",temp[n]);

        for(n=0;n<frames;n++) {
            if(temp[n]!=-1) {
                 printf("%d\t\t\t");
                
            }
            else {
                printf(" - \t\t\t");

            }
           

        }

        printf("\n Total page fault :\t %d \n",fault);
        return 0;
        

}
