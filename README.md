# C
School assignment for the C programming class 

# Školský projekt "Šifrovanie" v jazyku C
### Autor projektu - *Samuel Kováč*
### Zadanie projektu :
Napíšte program, ktorý bude pracovať s textovou správou, zapísanou v súbore sifra.txt. Tento súbor obsahuje ľubovoľné znaky a predpokladajte, že má dĺžku najviac 1000 znakov. Pre potreby frekvenčnej analýzy a šifrovania je potrebné správu uchovávať v 2 poliach – ako pôvodný text a upravený text.
Program bude vykonávať príkazy načítané zo štandardného vstupu. Každý príkaz bude predstavovať malé písmeno nasledované koncom riadku a to:

**n** – na načítanie šifrovanej správy do poľa. Správa sa načíta zo súboru sifra.txt do poľa pre pôvodný text. Ak je správa dlhšia, načíta sa len prvých 1000 znakov. Ak sa správu nepodarí načítať, vypíše sa správa Spravu sa nepodarilo nacitat.

**v** – výpis pôvodnej zašifrovanej správy (pôvodný text). Ak v poli je načítaná pôvodná správa, tá sa vypíše na štandardný výstup tak, ako je uložená v poli. Za správou sa vypíše navyše znak konca riadku. Ak pole s pôvodným textom neobsahuje žiadnu načítanú správu, program vypíše správu Sprava nie je nacitana.

**u** – na úpravu textu. Načítaný pôvodný text sa upraví a uloží do poľa obsahujúceho upravený text, pričom pole s pôvodným textom sa nebude meniť. Úprava spočíva vo vynechaní všetkých nepísmenkových znakov a prevedenie písmen na veľké písmená. Ak pole s pôvodným textom neobsahuje žiadnu načítanú správu, program vypíše správu Sprava nie je nacitana.

**s** – výpis upravenej správy. Ak do poľa s upraveným textom bola zapísaná upravená správa, program ju vypíše na štandardný výstup tak, ako je uložená v poli. Za správou sa vypíše navyše znak konca riadku. Ak pole s upraveným textom neobsahuje žiadnu upravenú správu, program vypíše správu Nie je k dispozicii upravena sprava.

**d** – výpis všetkých slov danej dĺžky. Príkaz d je v ďalšom riadku nasledovaný celým číslom k, 1 ≤ k ≤ 100. Každé slovo s dĺžkou k v pôvodnom texte sa vypíše do zvlášť riadku na štandardný výstup v poradí v akom sa v texte vyskytujú. Pod slovom rozumieme postupnosť po sebe idúcich ne-bielych znakov. Ak pole s pôvodným textom neobsahuje žiadnu načítanú správu, program vypíše správu Sprava nie je nacitana.

**h** – výpis histogramu písmen v upravenom texte. Histogram bude obsahovať 26 stĺpcov, každý pre jedno písmeno abecedy. Pod každým stĺpcom je označenie veľkého písmena, ku ktorému stĺpec prislúcha, pričom v riadku sú písmená usporiadané podľa abecedy. Stĺpce budú obsahovať niekoľko hviezdičiek podľa početnosti výskytu daného písmena v upravenom texte, zhora doplnené medzerami. Ak počet výskytov písmena je 0, v stĺpci nie je žiadna *. Ak je počet výskytov písmena viac ako 0% a do 10% vrátane, v stĺpci bude jedna *, ak do 20% vrátane, v stĺpci budú 2 hviezdičky a pod. Výška všetkých stĺpcov bude rovná počtu hviezdičiek prislúchajúcich k najfrekventovanejšiemu písmenu. Teda výstup nebude obsahovať riadky obsahujúce len medzery. Ak pole s upraveným textom neobsahuje žiadnu upravenú správu, program vypíše správu Nie je k dispozicii upravena sprava.

**c** – na rošifrovanie upravenej správy Césarovou šifrou. Príkaz c je nasledovaný celým číslom n, 1 ≤ n ≤ 25. Césarova šifra nahrádza písmeno pôvodnej správy písmenom, ktoré v abecede nasleduje n písmen za ním, teda pre n=3 sa písmeno A zašifruje na D. Ak narazíme na koniec abecedy, pokračujeme znovu od jej začiatku, písmeno X teda zašifrujeme na A, písmeno Y na B a pod. Upravený text teda rozšifrujeme posunom v abecede o n písmen dozadu, t.j. pri n=3, písmeno D rozšifrujeme na A, písmeno A rozšifrujeme na X. Výstupom bude rozšifrovaná správa pre načítané n, nasledovaná znakom konca riadku, ktorá sa vypíše na štandardný výstup. Ak pole s upraveným textom neobsahuje žiadnu upravenú správu, program vypíše správu Nie je k dispozicii upravena sprava.

**k** – na ukončenie programu.

### Verzia projektu : 
1.25

### Posledná úprava projektu :
15.12.2019

### Kontakt :
*samuel.kovac24@gmail.com*