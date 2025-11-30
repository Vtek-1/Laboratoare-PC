#include <stdio.h>
#include <stdlib.h>

void program1(){
    void showNeg(int arr[], int n, int index){
         if (index == n) return;
        if (arr[index]<0){
            printf("%d ",arr[index]);
        }
        showNeg(arr, n, index + 1);
    }
    int n;
    printf("Introduceti numarul de elemnte: ");
    scanf("%d", &n);

    int arr[n];

    for (int i=0; i<n; i++){
        printf("Elementul[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("Elementele negative sunt: ");
    showNeg(arr,n,0);

}

void program2(){
int findMax(int arr[], int n, int index){
    if (index == n-1)
        return arr[index];
    int MAX = findMax(arr,n,index+1);
    if (arr[index] > MAX)
        return arr[index];
    else
        return MAX;
}
int findMin(int arr[], int n, int index){
    if (index == n-1)
        return arr[index];

    int MIN = findMin(arr, n, index + 1);
    if(arr[index]< MIN)
        return arr[index];
    else
        return MIN;
}

 int n;
    printf("Introduceti numarul de elemnte: ");
    scanf("%d", &n);

    int arr[n];

    for (int i=0; i<n; i++){
        printf("Elementul[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    int max= findMax(arr,n,0);
    int min= findMin(arr,n,0);

    printf("\nElementul maxim este: %d",max);
    printf("\nElementul minim este: %d",min);

}
void program3(){
void count(int arr[],int n,int index,int *pare, int *impare){
    if (index == n) return;
    
    if (arr[index] %2 == 0)
        (*pare)++;
    else
        (*impare)++;

    count(arr,n,index+1, pare, impare);
}
int n;
    printf("Introduceti numarul de elemnte: ");
    scanf("%d", &n);

    int arr[n];

    for (int i=0; i<n; i++){
        printf("Elementul[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int pare=0, impare=0;
    count(arr,n,0,&pare,&impare);

printf("\nSunt %d elemnte pare",pare);
printf("\nSunt %d elemnte impare",impare);
}

void program4(){
void copyArray(int src[], int dest[], int n, int index) {
    if (index == n) return; 
    
    dest[index] = src[index]; 
    copyArray(src, dest, n, index + 1); 
}

    int n;
    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    for (int i=0; i<n; i++){
        printf("Elementul[%d]= ",i);
        scanf("%d",&arr1[i]);
    }

    copyArray(arr1, arr2, n, 0);

    printf("\nTabloul original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nTabloul copiat:   ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");
}

void program5(){
    
    int n, pos;

    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nIntroduceti pozitia elementului de sters (0-%d): ", n-1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Pozitie invalida!\n");
    } else {
        
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 

        printf("\nTabloul dupa stergere: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        
    }

}
void program6(){
int esteUnic(int arr[], int n, int index) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[index]) {
            count++;
        }
    }
    return (count == 1);
}

    int n;
    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nElementele unice sunt: ");
    for (int i = 0; i < n; i++) {
        if (esteUnic(arr, n, i)) {
            printf("%d ", arr[i]);
        }
    }

}

void program7(){
    int n;
    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
            
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;    
                j--;    
            }
        }
    }

    printf("\nTabloul fara duplicate: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void program8(){

void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;

    // schimbăm elementele
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}
    int n;
    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 0, n - 1);

    printf("\nTabloul inversat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   
}

void program9(){
    
    int n, element, found = 0;

    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nIntroduceti elementul de cautat: ");
    scanf("%d", &element);

    printf("\nElementul %d se gaseste la pozitiile: ", element);
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Elementul nu a fost gasit in tablou.");
    }

}

void program10(){

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

    int n;
    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int even[n], odd[n];
    int eCount = 0, oCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[eCount++] = arr[i];
        } else {
            odd[oCount++] = arr[i];
        }
    }

    sortArray(even, eCount);
    sortArray(odd, oCount);
    printf("\nElementele pare sortate: ");
    for (int i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nElementele impare sortate: ");
    for (int i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }
}

int main() {
    int optiune;
    do {
        printf("\n\n\n--- MENIU PRINCIPAL ---\n");
        printf("1)2.Program ce imprima toate elementele negative dintr-un tablou\n");
        printf("2)4.Program ce găsește elementul maxim și minim prin recursie\n");
        printf("3)6.Program ce numără elemntele pare și impare\n");
        printf("4)8.Program ce crează un tablou și apoi o copie a acestuia\n");
        printf("5)10.Program ce șterge elementul ales dintr-un tablou\n");
        printf("6)12.Program ce imprimă toate elementele unice din tablou\n");
        printf("7)14.Program ce șterge toate dublicatele din tablou\n");
        printf("8)16.Program ce inversează ordinea cifrelor dintr-un tablou\n");
        printf("9)18.Program ce caută o cifră în tablou și afișează pozițiile unde a fost găsită\n");
        printf("10)20.Program ce găsește elementele pare și impare și mi le returnează separat\n");
        printf("0. Iesire\n");
        printf("Alegeti optiunea: ");
        scanf("%d", &optiune);

        switch(optiune) {
            case 1: program1(); break;
            case 2: program2(); break;
            case 3: program3(); break;
            case 4: program4(); break;
            case 5: program5(); break;
            case 6: program6(); break;
            case 7: program7(); break;
            case 8: program8(); break;
            case 9: program9(); break;
            case 10: program10(); break;
            case 0: printf("Iesire din program.\n"); break;
            default: printf("Optiune invalida!\n");
        }
    } while(optiune != 0);

    return 0;
}