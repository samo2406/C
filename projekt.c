#include <stdio.h>

int nacitanie(FILE *f, char nazov_suboru[], char text[]) {
  char c;
  int i = 0;
  if ((f = fopen(nazov_suboru, "r")) == NULL) {
    printf("Spravu sa nepodarilo nacitat\n");
    return 0;
  } else {
    while ((c = getc(f)) != EOF) {
      text[i] = c;
      i++;
    }
    text[i]='\n';    //Ukončenie pola textu
    return i;
  }
}

void vypis_povodny(char text[], int pocet_znakov) {
int i;
  if (pocet_znakov > 0) {
    for (i = 0; i < pocet_znakov; i++)
      printf("%c", text[i]);
    printf("\n");
  } else
      printf("Sprava nie je nacitana\n");
}

int uprava(char text[], char upraveny_text[], int pocet_znakov) {
  int i, j = 0;
  if (pocet_znakov > 0) {
    for (i = 0; i <= pocet_znakov; i++) {
      if (text[i] >= 'A' && text[i] <= 'Z') {
        upraveny_text[j] = text[i];
        j++;
      } else if (text[i] >= 'a' && text[i] <= 'z') {
          upraveny_text[j] = text[i] - ('Z'-'A');
          j++;
      }
    }
    return j;
  } else {
      printf("Sprava nie je nacitana\n");
	  return 0;
  }
}

void vypis_upraveny(char text[], int pocet_znakov) {
  int i;
  if (pocet_znakov > 0) {
    for (i = 0; i < pocet_znakov; i++) {
      printf("%c", text[i]);
    }
    printf("\n");
  } else
	  printf("Nie je k dispozicii upravena sprava\n");
}

void vypis_dlzky(char text[], int pocet_znakov, int dlzka_slova) {
  int i, j, pocitadlo = 0;
  if (pocet_znakov > 0) 
    for (i = 0; i < pocet_znakov; i++) {
      if (isspace(text[i]) == 0) {
        pocitadlo++;
        if ((pocitadlo == dlzka_slova) && (isspace(text[i + 1]) != 0)) {
          for (j = i - dlzka_slova + 1; j <= i; j++)
            printf("%c", text[j]);
          printf("\n");
        }
      } else 
          pocitadlo = 0;
    }
  else 
	printf("Sprava nie je nacitana\n");     
}

int zisti_vyskyt(char text[], int pocet_znakov, int pocet_vyskytov[]) {
  int i,najvacsi_vyskyt = 0;    

  for (i = 0; i <= 25; i++)
    pocet_vyskytov[i] = 0;
  for (i = 0; i < pocet_znakov; i++)
    pocet_vyskytov[text[i] - 'A']++;
  for (i = 0; i <= 25; i++)
    najvacsi_vyskyt = (pocet_vyskytov[i] > najvacsi_vyskyt) ? pocet_vyskytov[i] : najvacsi_vyskyt;

  return najvacsi_vyskyt;
}

void vypis_histogramu(int najvacsi_vyskyt, int pocet_znakov, int pocet_vyskytov[]) {
	int i,j;
	
  for (i = (10.0f*najvacsi_vyskyt/pocet_znakov); i >= 0; i=i-1) {
	for (j = 0; j <= 25; j++) {
      if (((10.0f*pocet_vyskytov[j]/pocet_znakov) > i))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  for (i = 0; i <= 25; i++)
    printf("%c", i + 'A');
  printf("\n");
}


void sifra(char text[], int pocet_znakov, int n) {
  int i;
  if (pocet_znakov > 0) {
    for (i = 0; i < pocet_znakov; i++) {
      printf("%c", (n > (text[i]-'A')) ? 'Z' - (n - (text[i]-'A')) : text[i] - n);
    }
    printf("\n");
  } else
    printf("Nie je k dispozicii upravena sprava\n");
}

int main() {
FILE *f = 0;
char prikaz;
char povodny_text[1000], upraveny_text[1000];
int k = 0, n = 0, pocet_znakov = 0, pocet_znakov2 = 0, najvacsi_vyskyt = 0;
int pocet_vyskytov[26];
  do {
    prikaz = 0;
    scanf(" %c", &prikaz);
    switch (prikaz) {
    case 'n':
      pocet_znakov = nacitanie(f, "sifra.txt", povodny_text);
      break;
    case 'v':
      vypis_povodny(povodny_text, pocet_znakov);
      break;
    case 'u':
      pocet_znakov2 = uprava(povodny_text, upraveny_text, pocet_znakov);
      break;
    case 's':
      vypis_upraveny(upraveny_text, pocet_znakov2);
      break;
    case 'd':
	  scanf("%d",&k);
      vypis_dlzky(povodny_text, pocet_znakov, k);
      break;
    case 'h':
	  vypis_histogramu(zisti_vyskyt(upraveny_text, pocet_znakov2, pocet_vyskytov), pocet_znakov2, pocet_vyskytov);
      break;
    case 'c':
	  scanf("%d",&n);
      sifra(upraveny_text, pocet_znakov2, n);
      break;
    }
  } while (prikaz != 'k'); //Ukončenie programu
  return 0;
}
