#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void program1() {
char sir[100];

    printf("Introdu un sir de caractere: ");
    fgets(sir, sizeof(sir), stdin);  

    size_t len = strlen(sir);
    if (sir[len - 1] == '\n') {
        sir[len - 1] = '\0';
        len--;
    }

    printf("Lungimea sirului este: %zu\n", len);

}

void program2() {
    char sir[100];

    printf("Introdu un sir de litere: ");
    fgets(sir, sizeof(sir), stdin);

    size_t len = strlen(sir);
    if (sir[len - 1] == '\n') {
        sir[len - 1] = '\0';
        len--;
    }

    for (size_t i = 0; i < len; i++) {
        sir[i] = toupper((unsigned char)sir[i]);
    }

    printf("Sirul convertit este: %s\n", sir);
}

void program3() {

    char sir[200];
    int i, count = 0;

    printf("Introdu un sir de caractere: ");
    fgets(sir, sizeof(sir), stdin);

    
    for (i = 0; sir[i] != '\0'; i++) {
        char c = tolower(sir[i]);  
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    printf("Numărul total de vocale din șir este: %d\n", count);


    
}

void program4() {
char sir[200];
    int i, j;
    int este_palindrom = 1; 

    printf("Introdu un sir de caractere: ");
    fgets(sir, sizeof(sir), stdin);

    size_t len = strlen(sir);
    if (sir[len - 1] == '\n') {
        sir[len - 1] = '\0';
        len--;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {

        if (tolower(sir[i]) != tolower(sir[j])) {
            este_palindrom = 0;
            break;
        }
    }

    if (este_palindrom) {
        printf("Șirul ESTE palindrom.\n");
    } else {
        printf("Șirul NU este palindrom.\n");
    }
    
}

void program5() {
char sir[100];
    char caracter;
    int i, lungime;
    printf("Introduceți un șir: ");
    fgets(sir, sizeof(sir), stdin);

    sir[strcspn(sir, "\n")] = '\0';

    printf("Introduceți caracterul de căutat: ");
    scanf("%c", &caracter);

    lungime = strlen(sir);

    printf("Caracterul '%c' apare la pozițiile: ", caracter);
    int gasit = 0;
    for (i = 0; i < lungime; i++) {
        if (sir[i] == caracter) {
            printf("%d ", i);
            gasit = 1;
        }
    }

    if (!gasit) {
        printf("Nu există apariții.");
    }

    printf("\n");
    
}

void program6() {
char sir[200];
    int frecventa[256] = {0};
    int i;

    printf("Introdu un sir de caractere: ");
    fgets(sir, sizeof(sir), stdin);

    sir[strcspn(sir, "\n")] = '\0';

    for (i = 0; sir[i] != '\0'; i++) {
        unsigned char c = sir[i];
        frecventa[c]++;
    }

    printf("\nFrecvența fiecărui caracter:\n");
    for (i = 0; i < 256; i++) {
        if (frecventa[i] > 0) {
            printf("Caracter '%c' apare de %d ori\n", i, frecventa[i]);
        }
    }
    
}

void program7() {
    char sir[200];
    int frecventa[256] = {0};
    char rezultat[200];
    int i, j = 0;

    printf("Introdu un sir de caractere: ");
    fgets(sir, sizeof(sir), stdin);

    sir[strcspn(sir, "\n")] = '\0';

    for (i = 0; sir[i] != '\0'; i++) {
        unsigned char c = sir[i];
        if (frecventa[c] == 0) {  
            rezultat[j++] = c;   
            frecventa[c] = 1;    
        }
    }
    rezultat[j] = '\0';

    printf("Șirul fără caractere repetate este: %s\n", rezultat);
    
}

void program8() {
 char sir[200];
    char cuvant[50];
    char *pozitie;

    printf("Introdu un șir de caractere: ");
    fgets(sir, sizeof(sir), stdin);
    sir[strcspn(sir, "\n")] = '\0'; 

    printf("Introdu cuvântul de căutat: ");
    fgets(cuvant, sizeof(cuvant), stdin);
    cuvant[strcspn(cuvant, "\n")] = '\0';

    pozitie = strstr(sir, cuvant);

    if (pozitie != NULL) {
        int index = pozitie - sir;  
        printf("Prima apariție a cuvântului '%s' este la poziția: %d\n", cuvant, index);
    } else {
        printf("Cuvântul '%s' nu a fost găsit în șir.\n", cuvant);
    }
    
}

void program9() {
    char sir[200];
    char cuvant[50];
    char *pozitie;

    printf("Introdu un șir de caractere: ");
    fgets(sir, sizeof(sir), stdin);
    sir[strcspn(sir, "\n")] = '\0';

    printf("Introdu cuvântul de eliminat: ");
    fgets(cuvant, sizeof(cuvant), stdin);
    cuvant[strcspn(cuvant, "\n")] = '\0'; 

    pozitie = strstr(sir, cuvant);

    if (pozitie != NULL) {
        memmove(pozitie, pozitie + strlen(cuvant), strlen(pozitie + strlen(cuvant)) + 1);
        printf("Șirul după eliminarea primei apariții: %s\n", sir);
    } else {
        printf("Cuvântul '%s' nu a fost găsit în șir.\n", cuvant);
    }
    
}

void program10() {
    char sir[200];
    char cuvant[50];
    char *pozitie;

    printf("Introdu un șir de caractere: ");
    fgets(sir, sizeof(sir), stdin);
    sir[strcspn(sir, "\n")] = '\0'; 

    printf("Introdu cuvântul de eliminat: ");
    fgets(cuvant, sizeof(cuvant), stdin);
    cuvant[strcspn(cuvant, "\n")] = '\0';

    while ((pozitie = strstr(sir, cuvant)) != NULL) {
        memmove(pozitie, 
                pozitie + strlen(cuvant), 
                strlen(pozitie + strlen(cuvant)) + 1);
    }

    printf("Șirul după eliminarea tuturor aparițiilor: %s\n", sir);
}
int main() {
    int optiune;
    do {
        printf("\n--- MENIU PRINCIPAL ---\n");
        printf("1)1.  Program pentru a afla lungimea unui șir\n");
        printf("2)5.  Program pentru a converti dintr-un șir, literele minuscule în majuscule\n");
        printf("3)9.  Program ce număra numărul total de vocale dintr-un șir\n");
        printf("4)13. Program ce verifica dacă un șir este palindrom sau nu\n");
        printf("5)17. Program ce căuta toate aparițiile unui caracter dintr-un șir dat\n");
        printf("6)21. Program ce număra frecvența fiecărui caracter dintr-un șir\n");
        printf("7)25. Program ce a elimina toate caracterele ce se repetă dintr-un șir dat\n");
        printf("8)29. Program pentru a găsi prima apariție a unui cuvânt într-un șir dat\n");
        printf("9)33. Program ce elimina prima apariție a unui cuvânt din șir\n");
        printf("10)35.Program ce elimina toate aparițiile unui cuvânt din șirul dat\n");
        printf("0. Iesire\n");
        printf("Alegeti optiunea: ");
        scanf("%d", &optiune);
        getchar();
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
