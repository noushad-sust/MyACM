#include<stdio.h>


int main() {

    int n;
    scanf("%d\n",&n);
        for(int i=0;i<n;i++) {

            int m,f;
            scanf("%d %d",&m,&f);
           // printf("m=%d f=%d", m,f);
            for(int cycle=0;cycle<f;cycle++) {
                for(int j=1;j<=m;j++) {
                    for(int k=0;k<j;k++) {
                        printf("%d",j);
                    }
                    printf("\n");
                }
                //peak
                //now down.
                for(int j=m-1;j>=1;j--) {
                    for(int k=0;k<j;k++) {
                        printf("%d",j);
                    }
                    printf("\n");
                }

                if(cycle<f-1) {
                    //done.
                    printf("\n");
                }

            }
            if(i<n-1)
                printf("\n");

        }


    return 0;
}
