#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct penjaga{
    char *nama;
    int id;
    char *shift;
    int skor;
}penjaga;


int main (){
    int N =0;
    int kapasitas;
    char bufferNama [100];
    char shift [10];

    penjaga *daftar = (penjaga *)malloc(kapasitas * sizeof(penjaga));

    if (N == kapasitas) {
                kapasitas *= 2;
                daftar = (penjaga *)realloc(daftar, kapasitas * sizeof(penjaga));
            }

            //nama
            getchar(); 
            fgets(bufferNama, sizeof(bufferNama), stdin);
            bufferNama[strcspn(bufferNama, "\n")] = '\0'; 

            daftar[N].nama = (char *)malloc((strlen(bufferNama) + 1) * sizeof(char));
            strcpy(daftar[N].nama, bufferNama);
            
            //id
            scanf("%d", &daftar[N].id);

            //shift
            getchar(); 
            fgets(shift, sizeof(shift), stdin);
            shift[strcspn(shift, "\n")] = '\0'; 

            daftar[N].nama = (char *)malloc((strlen(shift) + 1) * sizeof(char));
            strcpy(daftar[N].nama, shift);

            //skor
            scanf("%d", &daftar[N].skor);
            
            
            N++;
            printf("%s", &daftar->nama);

            free(daftar);
            return 0;

}
