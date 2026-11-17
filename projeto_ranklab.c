#include <stdio.h>

void exibirCabecalho(void);
void lerPontuacoes(int v[], int n);
void copiarVetor(int origem[], int destino[], int n);
void exibirVetor(int v[], int n);
int bubbleSort(int v[], int n);
int selectionSort(int v[], int n);
int insertionSort(int v[], int n);
int vetoresiguais(int a[], int b[], int n);

int main(void) {
    int original[10], bubble[10], selection[10], insertion[10];
    int compB, compS, compI, iguais;

    exibirCabecalho();
    lerPontuacoes(original, 10);

    printf("\nOriginal:  ");
    exibirVetor(original, 10);

    copiarVetor(original, bubble, 10);
    copiarVetor(original, selection, 10);
    copiarVetor(original, insertion, 10);

    compB = bubbleSort(bubble, 10);
    compS = selectionSort(selection, 10);
    compI = insertionSort(insertion, 10);

    printf("Bubble:    ");
    exibirVetor(bubble, 10);
    printf("Selection: ");
    exibirVetor(selection, 10);
    printf("Insertion: ");
    exibirVetor(insertion, 10);

    iguais = vetoresiguais(bubble, selection, 10) && vetoresiguais(bubble, insertion, 10);
    
    if (iguais) {
        printf("Resultados equivalentes: SIM\n");
    } else {
        printf("Resultados equivalentes: NAO\n");
    }

    printf("Menor: %d | Maior: %d | Mediana: %.2f\n", bubble[0], bubble[9], (bubble[4] + bubble[5]) / 2.0);
    printf("Comparacoes: Bubble %d | Selection %d | Insertion %d\n", compB, compS, compI);

    return 0;
}

void exibirCabecalho(void) {
    printf("========================================\n");
    printf("                RANKLAB                 \n");
    printf("========================================\n");
}

void lerPontuacoes(int v[], int n) {
    printf("Digite 10 pontuacoes entre 0 e 100:\n");
    for (int i = 0; i < n; i++) {
        do {
            scanf("%d", &v[i]);
            if (v[i] < 0 || v[i] > 100) {
                printf("Invalido! Digite novamente:\n");
            }
        } while (v[i] < 0 || v[i] > 100);
    }
}

void copiarVetor(int origem[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

void exibirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int bubbleSort(int v[], int n) {
    int comp = 0, aux;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comp++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return comp;
}

int selectionSort(int v[], int n) {
    int comp = 0, min, aux;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            comp++;
            if (v[j] < v[min]) {
                min = j;
            }
        }
        if (min != i) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
    return comp;
}

int insertionSort(int v[], int n) {
    int comp = 0, chave, j;
    for (int i = 1; i < n; i++) {
        chave = v[i];
        j = i - 1;
        while (j >= 0) {
            comp++;
            if (v[j] > chave) {
                v[j + 1] = v[j];
                j--;
            } else {
                break;
            }
        }
        v[j + 1] = chave;
    }
    return comp;
}

int vetoresiguais(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}