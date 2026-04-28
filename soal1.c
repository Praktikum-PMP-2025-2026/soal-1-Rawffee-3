#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct penjaga{
    char nama[100];
    int id;
    char shift[50];
    int skor;
}penjaga;

int comparescore(const void* a, const void* b)
{
    return ((struct penjaga*)a)->skor
           - ((struct penjaga*)b)->skor;
}

int main() {
    int kapasitas = 2; 
    int input;
    int i;
    int N;
    penjaga *daftar = (penjaga *)malloc(kapasitas * sizeof(penjaga));
    scanf("%d", &input);
    char bufferNama[100];
    char shift[10];

    for(i=0; i<input; i++){
        getchar(); 
            fgets(bufferNama, sizeof(bufferNama), stdin);
            bufferNama[strcspn(bufferNama, "\n")] = '\0'; 

            daftar[N].nama = (char *)malloc((strlen(bufferNama) + 1) * sizeof(char));
            strcpy(daftar[N].nama, bufferNama);

        scanf("%d", &daftar[N].id);

        getchar(); 
            fgets(shift, sizeof(shift), stdin);
            shift[strcspn(shift, "\n")] = '\0'; 

            daftar[N].shift = (char *)malloc((strlen(shift) + 1) * sizeof(char));
            strcpy(daftar[N].nama, shift);

        scanf("%d", &daftar[N].skor);
    
    }
    int n = sizeof(daftar) / sizeof(daftar[0]);
    qsort(daftar, n, sizeof(struct penjaga), comparescore);
    for (int i = 0; i < n; i++) {
        printf("%s, %d, %s, %d\n", daftar[i].nama,
               daftar[i].id, daftar[i].shift, daftar[i].skor);
}
