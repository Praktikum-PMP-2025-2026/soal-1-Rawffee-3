#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct penjaga{
    char nama[100];
    int id;
    char shift[10];
    int skor;
};

int comparescore(const void* a, const void* b)
{
    return ((struct penjaga*)a)->skor;
           - ((struct penjaga*)b)->skor;
}

int main(){
    int kapasitas = 2; 
    int N = 0;
    penjaga *daftar = (penjaga *)malloc(kapasitas * sizeof(penjaga));
    char bufferNama[100];
    char shift[10];
   if (N == kapasitas) {
                kapasitas *= 2;
                daftar = (penjaga *)realloc(daftar, kapasitas * sizeof(penjaga));
            }

            printf("Nama Lengkap: ");
            getchar(); 
            fgets(bufferNama, sizeof(bufferNama), stdin);
            bufferNama[strcspn(bufferNama, "\n")] = '\0'; 

            daftar[N].nama = (char *)malloc((strlen(bufferNama) + 1) * sizeof(char));
            strcpy(daftar[N].nama, bufferNama);

            printf("ID: ");
            scanf("%d", &daftar[N].id);

            printf("SHIFT: ");
            getchar(); 
            fgets(shift, sizeof(shift), stdin);
            shift[strcspn(shift, "\n")] = '\0'; 

            daftar[N].nama = (char *)malloc((strlen(shift) + 1) * sizeof(char));
            strcpy(daftar[N].nama, shift);

            printf("Skor: ");
            scanf("%d", &daftar[N].skor);
            
            N++;
    int n = sizeof(daftar) / sizeof(org[0]);

    qsort(daftar, n, sizeof(struct penjaga), comparescore);

    for (int i = 0; i < n; i++) {
        printf("%s, %d, %s, %d", daftar[i].nama,
               daftar[i].id, daftar[i].shift, daftar[i].skor);
    }

    return 0;
}
