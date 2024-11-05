#include <stdio.h>

int main(void) {
    int ninsert,eta=17;
    int minorenni = 0;
    int maggiorenni = 0;
    printf("numero di studenti nella classe: \n");
    scanf("%d",&ninsert);
    for (int i=0; i<ninsert; i++) {
        printf("inserire eta' dello studente %d: \n ",i+1);
        scanf("%d",&eta);
        if(eta<18){
            minorenni++;
        } else {
            maggiorenni++;
        }

    } if(minorenni>1) {
        printf("\nci sono %d minorenni", minorenni);
    } else {
        printf("e' presente solo un minorenne nella classe..");
    }
    printf("\n con %d maggiorenni", maggiorenni);
}
