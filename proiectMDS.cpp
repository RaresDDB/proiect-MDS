#include <iostream>
#include <string.h>
#include <queue>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

void titlu();
void bunvenit();
void prezentare();
void meniuprincipal();
void elembaza();
void tabuni();
void tabbi();
void sircarac();
void subprograme();
void grafneori();
void grafori();
void backtracking();
void greedy();
void progdin();
void meniugrafneori();
void DFS2();
void hamiltonianverificare();
void eulerianverificare();
void DFS1();
void conexverificare();
void DFS();
void definitii();
void gradul();
void metode();
void parcurgeri();
void conexitate();
void hamiltonian();
void eulerian();
void aplicatii();
void test();
void varfizolat();
void varfterminal();
void listaadiacenta();
void vectormuchii();
void matrice();
void caracteristici();
void aplicatiimatrice();
void aplicatia1();
void aplicatia2();
void aplicatia3();
void latime();
void adancime();
void varfizolatexemplu();
void varfterminalexemplu();
void latimeexemplu();
void adancimeexemplu();
void definitii2();
void gradul2();
void metode2();
void conexitate2();
void tareconexitate();
void aplicatii2();
void aplicatia4();
void aplicatia5();
void aplicatia6();
void test2();
void listaadiacenta2();
void vectorularcelor();
void matriceadiacenta();
void matriceaincidenta();
void matriceadrumurilor();
void succesorisipredecesori();
void arcxy();
void defsub();
void strucsub();
void transsub();
void tipsub();
void avansub();
void aplicsub();
void testsub();
void prob1();
void prob2();

void titlu(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                      INVATA INFORMATICA DE LICEU IN 10 PASI SIMPLI!"<<endl;
    system("PAUSE");
    system("cls");
}

void bunvenit(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                           BINE AI VENIT PE PLATFORMA NOASTRA!"<<endl;
    cout<<"                                      Speram sa iti fie de folos ceea ce vei invata"<<endl;
    system("PAUSE");
    system("cls");
}

void prezentare(){
    cout<<endl<<endl<<endl;
    cout<<"                                                         PREZENTARE"<<endl<<endl;
    cout<<"   Bun venit pe platforma noastra!Aici vei putea parcurge intreaga materie de liceu.Fiecare lectie va cuprinde atat informatii teoretice,cat si practice.La sfaristul acesteia vei avea de rezolvat 2 probleme de nivel mediu,iar dupa aceea un test grila pentru testarea cunostintelor."<<endl<<endl;
    cout<<"   Ceea ce noi ne propunem si ne diferentiaza de alte aplicatii este faptul ca noi ne propunem o invatare cat mai interactiva si practica a informatiilor,cat si faptul ca informatiile sunt pe intelesul tutror."<<endl<<endl;
    cout<<"   Trebuie sa tii cont de faptul ca nivelul de invatare si al testelor de la sfarsitul fiecarei lectii este unul mediu si trebuie sa acorzi importanta fiecarei informatii."<<endl<<endl;
    cout<<"   De asemenea,este important de stiut care este nivelul la care doresti sa ajungi in informatica.Daca doresti sa ajungi sa profesezi in acest domeniu trebuie sa stii ca aceste informatii sunt necesare,dar nu si suficiente pentru o cariera in IT.Daca scopul este strict pentru a invata pentru liceu,ai ajuns pe aplicatia perfecta!"<<endl<<endl;
    cout<<"   Mult succes pe parcursul lectiilor!"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"   In plus,aplicatia noastra va ofera posibilitatea ca pe parcursul parcurgerii lectiilor sa aveti parte de o muzica relaxanta in surdina";
    cout<<"   Daca doriti sa aveti parte de muzica apasati tasta 1,daca nu apasati tasta 2"<<endl;
    int b;
    cin>>b;
    if(b==1){
        PlaySound(TEXT("file_example_WAV_10MG.wav"),NULL,SND_SYNC);
        system("cls");
        meniuprincipal();
    }
    else{
        system("cls");
        meniuprincipal();
    }
}

void meniuprincipal(){
    int a;
    cout<<endl<<endl<<endl;
    cout<<"                                                         MENIU PRINCIPAL"<<endl<<endl;
    cout<<"   Mai jos va vom oferi lectiile pe care le puteti parcurge in aplicatia noastra"<<endl;
    cout<<"   Ordinea in care sunt mai jos asezate este ordinea in care va recomandam sa le studiati"<<endl<<endl;
    cout<<"                                     1.Elemente de baza.Algoritmi elementari."<<endl;
    cout<<"                                     Grad dificultate:incepator"<<endl<<endl;
    cout<<"                                     2.Tablouri unidimensionale"<<endl;
    cout<<"                                     Grad dificultate:incepator"<<endl<<endl;
    cout<<"                                     3.Tablouri bidimensionale"<<endl;
    cout<<"                                     Grad dificultate:incepator"<<endl<<endl;
    cout<<"                                     4.Siruri de caractere"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     5.Subprograme"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     6.Grafuri neorientate.Arbori"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     7.Grafuri orientate"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     8.Backtracking"<<endl;
    cout<<"                                     Grad dificultate:avansat"<<endl<<endl;
    cout<<"                                     9.Metoda Greedy"<<endl;
    cout<<"                                     Grad dificultate:avansat"<<endl<<endl;
    cout<<"                                     10.Programare dinamica"<<endl;
    cout<<"                                     Grad dificultate:avansat"<<endl<<endl;
    cout<<endl<<endl;
    cout<<"   Alegeti lectia pe care doriti sa o parcurgeti: ";cin>>a;
    if(a==1){
        system("cls");
        elembaza();
    }
    else if(a==2){
        system("cls");
        tabuni();
    }
    else if(a==3){
        system("cls");
        tabbi();
    }
    else if(a==4){
        system("cls");
        sircarac();
    }
    else if(a==5){
        system("cls");
        subprograme();
    }
     else if(a==6){
        system("cls");
        grafneori();
    }
     else if(a==7){
        system("cls");
        grafori();
    }
     else if(a==8){
        system("cls");
        backtracking();
    }
     else if(a==9){
        system("cls");
        greedy();
    }
     else if(a==10){
        system("cls");
        progdin();
    }
    else
        meniuprincipal();
}

void elembaza(){
    cout<<"...";
}

void tabuni(){
    cout<<"...";
}

void tabbi(){
    cout<<"...";
}

void sircarac(){
    cout<<"...";
}

void subprograme(){
    cout<<"                 1.Definitie"<<endl;
    cout<<"                 2.Structura unui subprogram"<<endl;
    cout<<"                 3.Transmiterea parametrilor"<<endl;
    cout<<"                 4.Tipurile subprogramelor"<<endl;
    cout<<"                 5.Avantajele utilitatii subprogramelor"<<endl;
    cout<<"                 6.Aplicatii"<<endl;
    cout<<"                 7.Test"<<endl;
    cout<<"                 8.Iesire"<<endl;
    char m;
    cin>>m;
    system("cls");
    if(m=='1')
        defsub();
    else if(m=='2')
        strucsub();
    else if(m=='3')
        transsub();
    else if(m=='4')
        tipsub();
    else if(m=='5')
        avansub();
    else if(m=='6')
        aplicsub();
    else if(m=='7')
        testsub();
    else if(m=='8')
        meniuprincipal();
    else
        subprograme();
}

void defsub(){
    cout<<"  Subprogramele reprezinta functii definite de catre utilizator. Ele sunt identificate prin nume si pot fi apelate in interoriul unui program."<<endl;
    cout<<"  Subprogramele se scriu inainte de functia int main()."<<endl;
    cout<<"  Acestea sunt unitati de program care au algortim propriu,pot fi proiectate,scrise,compilate independent si se pot executa numai in cadrul unui program"<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void strucsub(){
    cout<<"  Un subprogram(o functie)are structura urmatoare:"<<endl<<endl;
    cout<<"    tip_returnat nume_subprogram(parametri_formali) //acesta fiind si antetul programului "<<endl;
    cout<<"      //instructiunea sau instructiunile subprogramului"<<endl<<endl;
    cout<<"  tip_returnat = tipul rezultatului calculat si returnat de catre subprogram(int,char,float,void etc)"<<endl;
    cout<<"  nume_subprogram = numele dat subprogramului de catre cel care il defineste(etse folosit la apelare)"<<endl;
    cout<<"  parametri_formali = lista de declaratii de variabile separate prin virgula"<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void transsub(){
    cout<<"  Exista doua metode de transmitere a parametrilor:prin valoare si prin adresa"<<endl;
    cout<<"  In cazul transmiterii prin valoare,orice modificare sufera variabila nu este permanenta.Se transmite un parametru prin valoare atunci cand in antet intre tipul datei si numele unui parametru formal nu se afla nimic."<<endl;
    cout<<"  In cazul transmiterii prin valoare,orice modificare sufera variabila este permanenta si in fata variabilet se pune '&'."<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void tipsub(){
    cout<<"  Subprogramele pot fi de 2 tipuri:"<<endl;
    cout<<"  -de tip operand"<<endl;
    cout<<"  -de tip procedural"<<endl<<endl;
    cout<<"  Subprogramele de tip operand determina un rezultat de la o anumita data de intrare.Valoarea este returnata de functie,iar aceasta va fi apelata intr-o expresie(de ex:cout<<subprogram(n);)"<<endl;
    cout<<"  Subprogramele de tip procedural se folosesc in instructiuni de sine statatoare,nu in expresii.Au un efect,dar nu returneaza un rezultat."<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void avansub(){
    cout<<"  Subprogramele sunt foarte des folosite in industria IT deoarece acestea aduc anumite avantaje mari precum:"<<endl;
    cout<<"  -reutilizarea codului:subprogramul poate fi apelat ori de cate ori este nevoie"<<endl;
    cout<<"  -modularizarea programelor:subprogramele ne permit sa impartim problema in mai multe subprobleme mai simple"<<endl;
    cout<<"  -reducerea numarului de erori intr-un program"<<endl;
    cout<<"  -depistarea mai facila a erorilor:fiecare subprogram poate fi compilat pe rand"<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void aplicsub(){
    cout<<"  Mai jos veti avea de rezolvat 2 probleme din acest capitol"<<endl<<endl;
    cout<<"  1.Sa se scrie un subprogram care returneaza suma cifrelor unui numar."<<endl<<endl;
    cout<<"  2.Sa se scrie un subprogram care furnizeaza printr-un parametru de iesire oglinditul unui numar natural n."<<endl<<endl;
    cout<<"  Apasati tasta 1 pentru a vedea rezolvarea primei probleme,tasta 2 pentru rezolvarea celei de-a doua probleme sau tasta 3 pentru a reveni la meniul anterior: ";
    char n;
    cin>>n;
    system("cls");
    if(n=='1')
        prob1();
    else if(n=='2')
        prob2();
    else if(n=='3')
        subprograme();
    else
        aplicsub();
}
void prob1(){
    cout<<" int sumcif(int n) {"<<endl;
    cout<<"  int s = 0;"<<endl;
    cout<<"  while (n != 0) {"<<endl;
    cout<<"     s = s + (n % 10);"<<endl;
    cout<<"     n /= 10;"<<endl;;
    cout<<"  }"<<endl;
    cout<<"  return s;"<<endl;
    cout<<" }"<<endl;
    system("PAUSE");
    system("cls");
    aplicsub();
}

void prob2(){
    cout<<"  void oglindit(int n, int &inv) {"<<endl;
    cout<<"    int c;"<<endl;
    cout<<"    inv = 0;"<<endl;
    cout<<"    while (n != 0) {"<<endl;
    cout<<"      c = n % 10;"<<endl;
    cout<<"      inv = inv * 10 + c;"<<endl;
    cout<<"      n /= 10;"<<endl;;
    cout<<"      }"<<endl;
    cout<<"  }"<<endl;;
    system("PAUSE");
    system("cls");
    aplicsub();
}

void testsub(){
    int scor2=0;
    cout<<"   1.Care tip de subprogram returneaza un rezultat?"<<endl;
    cout<<"   a)operand b)procedural "<<endl;
    char x;
    cin>>x;
    if(x=='a'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   2.Care tip de subprogram furnizeaza rezultatul printr-un parametru?"<<endl;
    cout<<"   a)operand b)procedural "<<endl;
    char y;
    cin>>y;
    if(y=='b'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   3.Cum se transmit parametrii subprogramelor?"<<endl;
    cout<<"   a)valoare si adresa b)adresa c)valoare d)vector"<<endl;
    char z;
    cin>>z;
    if(z=='a'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   4.Unde se definesc prima oara subprogramele?"<<endl;
    cout<<"   a)in int main() b)dupa int main() c)unde dorim() d)inainte de int main()"<<endl;
    char t;
    cin>>t;
    if(t=='d'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   5.Subprogramele au ca beneficiu reducerea numarului de erori?"<<endl;
    cout<<"   a)fals b)adevarat"<<endl;
    char s;
    cin>>s;
    if(s=='b'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   6.Care parte a unui subprogram este folosita la apelarea acestuia?"<<endl;
    cout<<"   a)parametrii sai b)tipul sau c)numele sau"<<endl;
    char a;
    cin>>a;
    if(a=='c'){
        cout<<"   Raspuns corect!"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   7.Ce sunt subprogramele?"<<endl;
    cout<<"   a)functii definite de utilizator b)functii predefinite c)biblioteci C++ d)instrcutiuni"<<endl;
    char b;
    cin>>b;
    if(b=='a'){
        cout<<"   Raspuns corect!"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   Ai ajuns la final!Ai obtinut ";
    cout<<scor2;
    cout<<" puncte"<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void grafneori(){
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Definitii"<<endl;
    cout<<"                 2.Gradul unui varf"<<endl;
    cout<<"                 3.Metode de reprezentare"<<endl;
    cout<<"                 4.Parcurgeri"<<endl;
    cout<<"                 5.Conexitate"<<endl;
    cout<<"                 6.Graf hamiltonain"<<endl;
    cout<<"                 7.Graf eulerian"<<endl;
    cout<<"                 8.Aplicatii"<<endl;
    cout<<"                 9.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        definitii();
    else if(x=='2')
        gradul();
    else if(x=='3')
        metode();
    else if(x=='4')
        parcurgeri();
    else if(x=='5')
        conexitate();
    else if(x=='6')
        hamiltonian();
    else if(x=='7')
        eulerian();
    else if(x=='8')
        aplicatii();
    else if(x=='9')
        test();
    else if(x=='0')
        meniuprincipal();
    else
    {
        grafneori();
    }
}
void definitii()
{
    cout<<"   Se numeste graf neorientat G=(X,U) perechea ordonata de multimi X,U,unde X este omultimea finita nevida(multimea varfurilor),iar U este o multime formata din perechi neordonate de elemente distincte din X(multimea muchiilor)"<<endl;
    cout<<"   O muchie reprezinta o latua ce are ca extremitati 2 varfuri distincte din multimea X,care sunt unite printr-o linie"<<endl;
    cout<<"   2 varfuri sunt adiacente daca ele pot fi extremitatile unei muchii.Ambele varfuri sunti ncidente cu muchia respectiva."<<endl;
    cout<<"   Se numeste lant intr-un graf neorientat L=(x1,x2,...,xn)cu proprietatea ca oricare 2 varfuri consecutive sunt adiacente"<<endl;
    cout<<"   Se numeste ciclu intr-un graf neorientat C=(x1,x2,...,xn)cu proprietatea ca x1=xn si oricare 2 varfuri consecutive sunt adiacente"<<endl;
    cout<<"   Fie graful G = (X, U). Un graf partial al lui G, este un graf G1 = (X, V) cu V inclus in U. Altfel spus,un graf partial G1 al lui G, este chiar G, sau se obtine din G pastrand toate varfurile si eliminand niste muchii."<<endl;
    cout<<"   Fie graful G = (X, U). Un subgraf al lui G, este un graf G1 = (Y, V) unde Y inclus in X, iar V vacontine toate muchiile din U care au ambele extremitati in Y. Altfel spus, un subgraf al unui graf se obtine eliminand niste noduri si toate muchiile incidente acestor noduri."<<endl;
    cout<<"   Un graf complet este un graf neorientat în care fiecare pereche de noduri distincte este conectatã printr-o muchie unicã."<<endl;
    cout<<"   Un graf bipartit este un graf ale cãrui noduri pot fi împãr?ite în douã mul?imi U si V(neavand niciun nod comun,iar reunite formand multimea nodurilor), astfel încât fiecare muchie conecteazã un nod din U cu unul din V."<<endl;
    cout<<"   Un graf bipartit complet este un graf in care toate orice nod din multimea U este adiacent cu toate din multimea V"<<endl;
    system("PAUSE");
    system("cls");
    grafneori();
}
void gradul()
{
    cout<<"   Gradul unui varf reprezinta numarul de muchii incidente cu varful respectiv"<<endl;
    cout<<"   Un varf izolat este un varf cu gradul egal cu zero"<<endl;
    cout<<"   Un varf terminal este un varf cu gradul egal cu unu"<<endl;
    char x;
    cout<<"   Apasati tasta 1 pt a vedea algoritmul care verifica daca intr-un graf exista in varf izolat"<<endl;
    cout<<"   Apasati tasta 2 pt a vedea algoritmul care verifica daca intr-un graf exista in varfterminal"<<endl;
    cout<<"   Apasati tasta 3 pt a reveni la meniul anterior"<<endl;
    cin>>x;
    system("cls");
    if(x=='1')
    {
        varfizolat();
    }
    else if(x=='2')
    {
        varfterminal();
    }
    else if(x=='3')
    {
        grafneori();
    }
    else
        gradul();
}
void varfizolat()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n,m, x, y, i, j, s, OK = 0;"<<endl;
    cout<<"   cin >> n>>m;"<<endl;
    cout<<"   for(i=1;i<=m;i++) {"<<endl;
    cout<<"       cin>>x>>y;"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1; }"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"        s = 0;"<<endl;
    cout<<"        for (j = 1; j <= n; j++)"<<endl;
    cout<<"            s = s + A[i][j];"<<endl;
    cout<<"        if (s == 0)"<<endl;
    cout<<"           OK=1;  }"<<endl;
    cout<<"   if(OK==1)"<<endl;
    cout<<"      cout<<Exista minim un varf izolat in graf;"<<endl;
    cout<<"   else"<<endl;
    cout<<"      cout<<Nu exista;"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        gradul();
    else if(f=='2')
        varfizolatexemplu();
    else
        varfizolat();
}
void varfizolatexemplu()
{
    int n,m,x, y, i, j, s, contor = 0,A[100][100],OK=0;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti perechile de muchii:";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            A[i][j]=0;
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        s = 0;
        for (j = 1; j <= n; j++)
            s = s + A[i][j];
        if (s == 0)
            OK=1;
    }
    if(OK==1)
        cout<<"Exista minim un varf izolat in graf"<<endl;
    else
        cout<<"Nu exista niciun varf izolat in graf"<<endl;
    system("PAUSE");
    system("cls");
    gradul();
}
void varfterminal()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n,m, x, y, i, j, s, OK = 0;"<<endl;
    cout<<"   cin >> n>>m;"<<endl;
    cout<<"   for(i=1;i<=m;i++) {"<<endl;
    cout<<"       cin>>x>>y;"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1; }"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"        s = 0;"<<endl;
    cout<<"        for (j = 1; j <= n; j++)"<<endl;
    cout<<"            s = s + A[i][j];"<<endl;
    cout<<"        if (s == 1)"<<endl;
    cout<<"           OK=1;  }"<<endl;
    cout<<"   if(OK==1)"<<endl;
    cout<<"      cout<<Exista minim un varf terminal in graf;"<<endl;
    cout<<"   else"<<endl;
    cout<<"      cout<<Nu exista;"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        gradul();
    else if(f=='2')
        varfterminalexemplu();
    else
        varfterminal();
}
void varfterminalexemplu()
{
    int n,m,x, y, i, j, s, contor = 0,A[100][100],OK=0;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti perechile de muchii:";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            A[i][j]=0;
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        s = 0;
        for (j = 1; j <= n; j++)
            s = s + A[i][j];
        if (s == 1)
            OK=1;
    }
    if(OK==1)
        cout<<"Exista minim un varf terminal in graf"<<endl;
    else
        cout<<"Nu exista niciun varf terminal in graf"<<endl;
    system("PAUSE");
    system("cls");
    gradul();
}
void metode()
{
    cout<<"             1.Lista de adiacenta"<<endl;
    cout<<"             2.Vectorul muchiilor"<<endl;
    cout<<"             3.Matricea de adiacenta"<<endl;
    cout<<"             4.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        listaadiacenta();
    else if(x=='2')
        vectormuchii();
    else if(x=='3')
        matrice();
    else if(x=='4')
        grafneori();
    else
        metode();
}
void listaadiacenta()
{
    cout<<"   Intr-o lista de adiacenta(a vecinilor) se va scrie pentru fiecare nod toate varfurile adiacente cu acesta"<<endl;
    cout<<"   Ex:Se da graful neorientat cu varfurile numerotate de la 1 la 7 si muchiile (1,2),(1,3),(1,4),(5,4),(4,6),(5,6)"<<endl;
    cout<<"   Lista vecinilor va fi:"<<endl;
    cout<<"   Varf Vecini"<<endl;
    cout<<"   1    2,3,4"<<endl;
    cout<<"   2    1"<<endl;
    cout<<"   3    1"<<endl;
    cout<<"   4    1,5,6"<<endl;
    cout<<"   5    4,6"<<endl;
    cout<<"   6    4,5"<<endl;
    cout<<"   7    -"<<endl;
    system("PAUSE");
    system("cls");
    metode();
}
void vectormuchii()
{
    cout<<"   Vectorul muchiilor este reprezentat printr-o structura care va contine varfurile adiacente"<<endl;
    cout<<"   struct muchie {"<<endl;
    cout<<"     unsigned x,y;"<<endl;
    cout<<"   }a[20];"<<endl;
    system("PAUSE");
    system("cls");
    metode();
}
void matrice()
{
    cout<<"             1.Caracteristici"<<endl;
    cout<<"             2.Aplicatii"<<endl;
    cout<<"             3.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        caracteristici();
    else if(x=='2')
        aplicatiimatrice();
    else if(x=='3')
        metode();
    else
        matrice();
}
void caracteristici()
{
    cout<<"   Matricea de adiacenta are urmatoarele proprietati:"<<endl;
    cout<<"   -este patratica(nr linii=nr coloane)"<<endl;
    cout<<"   -este binara(contine doar 0 si 1;1 daca varfurile i si j sunt adiacente,iar 0 in caz contrar)"<<endl;
    cout<<"   -este simetrica fata de diagonala principala"<<endl;
    cout<<"   -elementele de pe diagonala principala sunt egale cu 0"<<endl;
    system("PAUSE");
    system("cls");
    matrice();
}
void aplicatiimatrice()
{
    cout<<"                 1.Aplicatia 1"<<endl;
    cout<<"                 2.Aplicatia 2"<<endl;
    cout<<"                 3.Aplicatia 3"<<endl;
    cout<<"                 4.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        aplicatia1();
    else if(x=='2')
        aplicatia2();
    else if(x=='3')
        aplicatia3();
    else if(x=='4')
        matrice();
    else
        aplicatiimatrice();
}
void aplicatia1()
{
    cout<<"   Se citeste de la tastatura o matrice cu n linii si n coloane.Sa se verifice daca poate fi matrice de adiacenta"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"          cin >> A[i][j];"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (A[i][j] != A[j][i])"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (i == j)"<<endl;
    cout<<"             if (A[i][j] != 0)"<<endl;
    cout<<"                OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"     cout << Matricea este de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"     cout << NU poate fi de adiacenta;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatiimatrice();
}
void aplicatia2()
{
    cout<<"   Se citeste de la tastatura un numar n(n>2) reprezentand numarul de linii si de coloane al matricei de adiacenta al unui graf neorientat si matricea de adiacenta a grafului.Sa se determine gradul varfului 2."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   int n,i,j,d=0,A[50][50]"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"      for(j=1;j<=n;j++)"<<endl;
    cout<<"         cin>>A[i][j]"<<endl;
    cout<<"   for(j=1;j<=n;j++)"<<endl;
    cout<<"       if(A[2][j]==1)"<<endl;
    cout<<"          d++;"<<endl;
    cout<<"   cout<<d;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatiimatrice();
}
void aplicatia3()
{
    cout<<"   Se citeste de la tastatura un numar n(n>2) reprezentand numarul de linii si de coloane al matricei de adiacenta al unui graf neorientat si matricea de adiacenta a grafului.Sa se modifice matricea de adiacenta astfel incat sa nu mai poata fi de adiacenta si sa se afiseze dupa modificare"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   int n,i,j,d=0,A[50][50]"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"      for(j=1;j<=n;j++)"<<endl;
    cout<<"         cin>>A[i][j]"<<endl;
    cout<<"   A[1][1]=1;"<<endl;
    cout<<"   for(i=1;i<=n;i++) { "<<endl;
    cout<<"      for(j=1;j<=n;j++)"<<endl;
    cout<<"         cout<<A[i][j]<<' '"<<endl;
    cout<<"      cout<<endl; }"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatiimatrice();
}
void parcurgeri()
{
    cout<<" 1.In latime"<<endl;
    cout<<" 2.In adancime"<<endl;
    cout<<" 3.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if (x=='1')
        latime();
    else if(x=='2')
        adancime();
    else if(x=='3')
        grafneori();
    else
    {
        system("cls");
        parcurgeri();
    }
}
void latime()
{
    cout<<"   Pentru parcurgerea in latime se vor scrie toti vecinii nevizitati ai nodului respectiv"<<endl;
    cout<<"   Ex:Se da graful neorientat cu varfurile numerotate de la 1 la 7 si muchiile (1,2),(1,3),(1,4),(5,4),(4,6),(5,6).Sa se parcurga in latime plecand din varful 3."<<endl;
    cout<<"   Lista vecinilor va fi:"<<endl;
    cout<<"   Varf      Vecini"<<endl;
    cout<<"   1         2,3,4"<<endl;
    cout<<"   2         1"<<endl;
    cout<<"   3         1"<<endl;
    cout<<"   4         1,5,6"<<endl;
    cout<<"   5         4,6"<<endl;
    cout<<"   6         4,5"<<endl;
    cout<<"   7         -"<<endl;
    cout<<"   Parcurgerea va fi:3,1,2,4,5,6"<<endl;
    cout<<"   Algoritmul de parucrgere in latime este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   #include<queue>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], v[101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, m, X, i, j, x, y, c;"<<endl;
    cout<<"   queue<int> q;"<<endl;
    cout<<"   cin >> n >> m >> X;"<<endl;
    cout<<"   for (i = 1; i <= m; i++) {"<<endl;
    cout<<"      cin >> x >> y;"<<endl;
    cout<<"      A[x][y] = 1;"<<endl;
    cout<<"      A[y][x] = 1; }"<<endl;
    cout<<"   q.push(X);"<<endl;
    cout<<"   cout<< X << " ";"<<endl;
    cout<<"   v[X]++;"<<endl;
    cout<<"   while (!q.empty()) {"<<endl;
    cout<<"     c= q.front();"<<endl;
    cout<<"     for(j=1;j<=n;j++)"<<endl;
    cout<<"       if (A[c][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"          cout << j << " ";"<<endl;
    cout<<"          q.push(j);"<<endl;
    cout<<"          v[j]++; }"<<endl;
    cout<<"    q.pop();}"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char g;
    cin>>g;
    system("cls");
    if(g=='1')
        parcurgeri();
    else if(g=='2')
        latimeexemplu();
    else
        latime();
}
void latimeexemplu()
{
    int n, m, X, i, j, x, y, c,v[101],A[101][101];
    queue<int> q;
    for(i=1; i<=100; i++)
        v[i]=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            A[i][j]=0;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti varful de unde sa se parcurga in latime";
    cin>>X;
    cout<<"Introduceti muchiile:";
    for (i = 1; i <= m; i++)
    {
        cin >> x >> y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    q.push(X);
    cout << X << " ";
    v[X]++;
    while (!q.empty())
    {
        c = q.front();
        for(j=1; j<=n; j++)
            if (A[c][j] == 1 && v[j] == 0)
            {
                cout << j << " ";
                q.push(j);
                v[j]++;
            }
        q.pop();
    }
    system("PAUSE");
    system("cls");
    parcurgeri();
}
void adancime()
{
    cout<<"   Pentru parcurgerea in adancime se va scrie primul vecin nevizitat al nodului.Daca acesta nu mai are,ne vom intoarce la nodul anterior"<<endl;
    cout<<"   Ex:Se da graful neorientat cu varfurile numerotate de la 1 la 7 si muchiile (1,2),(1,3),(1,4),(5,4),(4,6),(5,6).Sa se parcurga in adancime plecand din varful 5."<<endl;
    cout<<"   Lista vecinilor va fi:"<<endl;
    cout<<"   Varf      Vecini"<<endl;
    cout<<"   1         2,3,4"<<endl;
    cout<<"   2         1"<<endl;
    cout<<"   3         1"<<endl;
    cout<<"   4         1,5,6"<<endl;
    cout<<"   5         4,6"<<endl;
    cout<<"   6         4,5"<<endl;
    cout<<"   7         -"<<endl;
    cout<<"   Parcurgerea va fi:5,4,1,2,3,6"<<endl;
    cout<<"   Algoritmul de parcurgere in adancime este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], v[101], n, m, X, x, y;"<<endl;
    cout<<"   void DFS(int X) {"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"        if (A[X][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"           cout << j << " ";"<<endl;
    cout<<"           v[j]++;"<<endl;
    cout<<"           DFS(j); }"<<endl;
    cout<<"    }"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   cin >> n >> m >> X;"<<endl;
    cout<<"   for (int i = 1; i <= m; i++) {"<<endl;
    cout<<"       cin >> x >> y;"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1; }"<<endl;
    cout<<"   cout << X << " ";"<<endl;
    cout<<"   v[X]++;"<<endl;
    cout<<"   DFS(X);"<<endl;
    cout<<"   return 0; }"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char g;
    cin>>g;
    system("cls");
    if(g=='1')
        parcurgeri();
    else if(g=='2')
        adancimeexemplu();
    else
        adancime();
}
void DFS(int X,int v[101],int A[][101],int n)
{
    for(int j=1; j<=n; j++)
        if (A[X][j] == 1 && v[j] == 0)
        {
            cout << j << " ";
            v[j]++;
            DFS(j,v,A,n);
        }
}
void adancimeexemplu()
{
    int n,m,X,A[101][101],v[101]= {0},x,y;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            A[i][j]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti varful de unde sa se parcurga in adancime:";
    cin>>X;
    cout<<"Introduceti muchiile:";
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    cout << X << " ";
    v[X]++;
    DFS(X,v,A,n);
    system("PAUSE");
    system("cls");
    parcurgeri();
}
void conexitate()
{
    cout<<"   Un graf este conex daca oricare 2 noduri ale sale pot fi extremitatile unui lant.Un graf conex nu contine niciun varf izolat si are o singura componenta conexa"<<endl;
    cout<<"   Se numeste componenta conexa a grafului G=(X,U), un subgraf C=(X1,U1) conex al lui G care are proprietatea ca nu exista nici un lant in G care sa lege un varf din multimea X1 cu un vârf din multimea X-X1."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], v[101], n,m;"<<endl;
    cout<<"   void DFS(int X) {"<<endl;
    cout<<"   for (int j = 1; j <= n; j++)"<<endl;
    cout<<"     if (A[X][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"         v[j]=1;"<<endl;
    cout<<"         DFS(j); }"<<endl;
    cout<<"   }"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int OK = 1, x, y;"<<endl;
    cout<<"   cin >> n>>m;"<<endl;
    cout<<"   for(int i=1;i<=m;i++){"<<endl;
    cout<<"      cin >> x >> y) {"<<endl;
    cout<<"      A[x][y] = 1;"<<endl;
    cout<<"      A[y][x] = 1; }"<<endl;
    cout<<"   v[1]=1;"<<endl;
    cout<<"   DFS(1);"<<endl;
    cout<<"   for (int i = 1; i <= n; i++) "<<endl;
    cout<<"       if (v[i] == 0) {"<<endl;
    cout<<"           cout << NU;"<<endl;
    cout<<"           return 0;)"<<endl;
    cout<<"   cout<< DA;"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char h;
    cin>>h;
    system("cls");
    if(h=='1')
        grafneori();
    else if(h=='2')
        conexverificare();
    else
        conexitate();
}
void DFS1(int X,int v[101],int A[][101],int n)
{
    for(int j=1; j<=n; j++)
        if (A[X][j] == 1 && v[j] == 0)
        {
            v[j]++;
            DFS1(j,v,A,n);
        }
}
void conexverificare()
{
    int A[101][101], v[101]= {0}, n, x, y,m,OK=1;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            A[i][j]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti muchiile:";
    for(int i=1; i<=m; i++)
    {
        cin>>x>>y;
        A[x][y]=1;
        A[y][x]=1;
    }
    v[1]=1;
    DFS1(1,v,A,n);
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            OK=0;
        }
    }
    if(OK==1)
        cout << "DA,este conex";
    else
        cout<<"NU,nu este conex";
    system("PAUSE");
    system("cls");
    grafneori();
}
void hamiltonian()
{
    cout<<"   Intr-un graf neorientat, se numeete lant hamiltonian un lant elementar care contine toate varfurile grafului."<<endl;
    cout<<"   Intr-un graf neorientat, se numeste ciclu hamiltonian un ciclu elementar care contine toate vârfurile grafului."<<endl;
    cout<<"   Un graf neorientat se numeete graf hamiltonian dacã contine un ciclu hamiltonian."<<endl;
    cout<<"   Algoritmul de verificare daca un graf este hamiltonain este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   struct muchii {"<<endl;
    cout<<"     int x,y;"<<endl;
    cout<<"   };"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   muchii v[30];"<<endl;
    cout<<"   unsigned n,m,i,j,l,c=0,ok=1,g=0;"<<endl;
    cout<<"   Introduceti numarul de varfuri:";
    cout<<"   cin>>n;"<<endl;
    cout<<"   Introduceti numarul de muchii:";
    cout<<"   cin>>m;"<<endl;
    cout<<"   int a[n][n];"<<endl;
    cout<<"   for(j=1;j<=n;j++)"<<endl;
    cout<<"      for(l=1;l<=n;l++)"<<endl;
    cout<<"          a[j][l]=0;"<<endl;
    cout<<"   for(i=1;i<=m;i++) {"<<endl;
    cout<<"      cin>>v[i].x;"<<endl;
    cout<<"      cin>>v[i].y;"<<endl;
    cout<<"      a[v[i].x][v[i].y]=a[v[i].y][v[i].x]=1; }"<<endl;
    cout<<"    for(j=1;j<=n;j++) {"<<endl;
    cout<<"        for(l=1;l<=n;l++) {"<<endl;
    cout<<"           g=g+a[j][l]; }"<<endl;
    cout<<"        if(g<n/2)"<<endl;
    cout<<"           ok=0;"<<endl;
    cout<<"        g=0;"<<endl;
    cout<<"         }"<<endl;
    cout<<"        if(ok==1)"<<endl;
    cout<<"            cout<<Graful este hamiltonian;"<<endl;
    cout<<"        else"<<endl;
    cout<<"            cout<<Graful nu este hamiltonian;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        grafneori();
    else if(f=='2')
        hamiltonianverificare();
    else
        hamiltonian();
}
void hamiltonianverificare()
{
    unsigned n,m,i,j,l,c=0,ok=1,g=0,a[101][101],x,y;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(j=1; j<=n; j++)
        for(l=1; l<=n; l++)
            a[j][l]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti muchiile:";
    for (i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(j=1; j<=n; j++)
    {

        for(l=1; l<=n; l++)
        {
            g=g+a[j][l];
        }
        if(g<n/2)
            ok=0;
        g=0;
    }
    if(ok==1)
        cout<<"Graful este hamiltonian";
    else
        cout<<"Graful nu este hamiltonian";
    system("PAUSE");
    system("cls");
    grafneori();
}
void eulerian()
{
    cout<<"   Într-un graf neorientat, se numeste lant eulerian un lant simplu in care apare fiecare muchie (fiind lant simplu, fiecare muchie apare o singurã datã)."<<endl;
    cout<<"   Într-un graf neorientat, se numeete ciclu eulerian un ciclu în care apare fiecare muchie."<<endl;
    cout<<"   Un graf neorientat se numeste graf eulerian dacã contine un ciclu eulerian."<<endl;
    cout<<"   Algoritmul de verificare daca un graf este eulerian este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], ap[101], n,m;"<<endl;
    cout<<"   void DFS(int X) {"<<endl;
    cout<<"   for (int j = 1; j <= n; j++)"<<endl;
    cout<<"     if (A[X][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"         v[j]=1;"<<endl;
    cout<<"         DFS(j); }"<<endl;
    cout<<"   }"<<endl;
    cout<<"   struct muchii"<<endl;
    cout<<"   {"<<endl;
    cout<<"   int x,y;"<<endl;
    cout<<"   };"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   muchii v[30];"<<endl;
    cout<<"   unsigned i,j,l,c=0,ok=1,g=0;"<<endl;
    cout<<"   cout<<n= ;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   cout<<m= ;"<<endl;
    cout<<"   cin>>m;"<<endl;
    cout<<"   int a[n][n];"<<endl;
    cout<<"   for(i=1;i<=m;i++)"<<endl;
    cout<<"   {"<<endl;
    cout<<"   cin>>v[i].x;"<<endl;
    cout<<"   cin>>v[i].y;"<<endl;
    cout<<"   a[v[i].x][v[i].y]=a[v[i].y][v[i].x]=1;"<<endl;
    cout<<"   }"<<endl;
    cout<<"    for(j=1;j<=n;j++)"<<endl;
    cout<<"    {"<<endl;
    cout<<"       for(l=1;l<=n;l++)"<<endl;
    cout<<"       {"<<endl;
    cout<<"         g=g+a[j][l];"<<endl;
    cout<<"       }"<<endl;
    cout<<"       if(g<2)"<<endl;
    cout<<"          ok=0;"<<endl;
    cout<<"       if(g%2==1)"<<endl;
    cout<<"          ok=0;"<<endl;
    cout<<"       g=0;"<<endl;
    cout<<"     }"<<endl;
    cout<<"   v[1]=1;"<<endl;
    cout<<"   DFS(1);"<<endl;
    cout<<"   for (int i = 1; i <= n; i++) "<<endl;
    cout<<"       if (v[i] == 0) "<<endl;
    cout<<"           ok=0;"<<endl;
    cout<<"    if(ok==1)"<<endl;
    cout<<"       cout<<Graful este eulerian;"<<endl;
    cout<<"    else"<<endl;
    cout<<"       cout<<Graful nu este eulerian; }"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        grafneori();
    else if(f=='2')
        eulerianverificare();
    else
        eulerian();
}
void DFS2(int X,int v[101],int a[][101],int n)
{
    for(int j=1; j<=n; j++)
        if (a[X][j] == 1 && v[j] == 0)
        {
            v[j]++;
            DFS2(j,v,a,n);
        }
}
void eulerianverificare()
{
    int  n,m,i,j,l,c=0,ok=1,g=0,a[101][101],x,y,v[101]= {0};
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(j=1; j<=n; j++)
        for(l=1; l<=n; l++)
            a[j][l]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti muchiile:";
    for (i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(j=1; j<=n; j++)
    {

        for(l=1; l<=n; l++)
        {
            g=g+a[j][l];
        }
        if(g%2==1)
            ok=0;
        g=0;
    }
    v[1]=1;
    DFS2(1,v,a,n);
    for(i=1; i<=n; i++)
        if(v[i]==0)
            ok=0;
    if(ok==1)
        cout<<"Graful este eulerian";
    else
        cout<<"Graful nu este eulerian";
    system("PAUSE");
    system("cls");
    grafneori();
}
void test()
{
    int scor1=0;
    cout<<"   1.care este gradul unui varf izolat?"<<endl;
    cout<<"   a)0 b)1 c)3 d)10"<<endl;
    char x;
    cin>>x;
    if(x=='a'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   2.Care este gradul unui varf terminal?"<<endl;
    cout<<"   a)2 b)3 c)1 d)120"<<endl;
    char y;
    cin>>y;
    if(y=='c'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   3.Graful hamiltonian contine un varf izolat?"<<endl;
    cout<<"   a)adevarat b)fals"<<endl;
    char z;
    cin>>z;
    if(z=='b'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   4.Matricea de adiacenta este:"<<endl;
    cout<<"   a)patratica b)asimetrica fata de diagonala principala c)contine doar 1 si 2"<<endl;
    char t;
    cin>>t;
    if(t=='a'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   5.Graful eulerian are gradul oricarui varf:"<<endl;
    cout<<"   a)numar impar b)numar par"<<endl;
    char s;
    cin>>s;
    if(s=='b'){
        cout<<"   Raspuns corect!!!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   6.Intr-un graf complet exista minim un varf izolat?"<<endl;
    cout<<"   a)adevarat b)fals"<<endl;
    char a;
    cin>>a;
    if(a=='b'){
        cout<<"   Raspuns corect!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   7.Multimea varfurilor intr-un graf bipartit este compusa din:"<<endl;
    cout<<"   a)o submultime b)3 submultimi c)2 submultimi"<<endl;
    char b;
    cin>>b;
    if(b=='c'){
        cout<<"   Raspuns corect!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   8.La parcurgerea in latime:"<<endl;
    cout<<"   a)se scrie pt fiecare varf toti vecinii nevizitati b)se scrie pt fiecare varf primul varf nevizitat"<<endl;
    char c;
    cin>>c;
    if(c=='a'){
        cout<<"   Raspuns corect!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   9.La parcurgerea in adancime:"<<endl;
    cout<<"   a)se scrie pt fiecare varf toti vecinii nevizitati b)se scrie pt fiecare varf primul varf nevizitat"<<endl;
    char d;
    cin>>d;
    if(d=='b'){
        cout<<"   Raspuns corect!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   10.Intr-un graf neorientat conteaza ordinea in care scriem extremiatiile unei muchii"<<endl;
    cout<<"   a)fals b)adevarat"<<endl;
    char e;
    cin>>e;
    if(e=='a'){
        cout<<"   Raspuns corect!"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   Ai ajuns la final!Ai obtinut ";
    cout<<scor1;
    cout<<" puncte"<<endl;
    system("PAUSE");
    system("cls");
    grafneori();
}
void aplicatii()
{
    cout<<"   1.Se citeste de la tastatura o matrice cu n linii si n coloane.Sa se verifice daca poate fi matrice de adiacenta"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"         cin >> A[i][j];"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"     for (j = 1; j <= n; j++)"<<endl;
    cout<<"         if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (A[i][j] != A[j][i])"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"        for (j = 1; j <= n; j++)"<<endl;
    cout<<"           if (i == j)"<<endl;
    cout<<"              if (A[i][j] != 0)"<<endl;
    cout<<"                 OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"       cout << Matricea este de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"       cout << NU;"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"   2.Se dă lista muchiilor unui graf neorientat. Să se afișeze vârfurile de grad maxim."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, x, y, i, j, s, smax = -1, contor = 0;"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   while (cin >> x >> y) {"<<endl;
    cout<<"      A[x][y] = 1;"<<endl;
    cout<<"      A[y][x] = 1;}"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"      s = 0;"<<endl;
    cout<<"     for (j = 1; j <= n; j++)"<<endl;
    cout<<"        s = s + A[i][j];"<<endl;
    cout<<"     if (s > smax)"<<endl;
    cout<<"         smax = s;  }"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"       s = 0;"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          s = s + A[i][j];"<<endl;
    cout<<"       if (s == smax)"<<endl;
    cout<<"          cout << i <<  ;"<<endl;
    cout<<"   return 0;"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"   3.Se dă lista muchiilor unui graf neorientat cu n vârfuri, etichetate de la 1 la n. Din acest graf se elimină toate muchiile cu proprietatea că ambele extremități au aceeași paritate. Să se determine câte muchii va avea graful parțial obținut."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, x, y, i, j, div, OK1, OK2, c = 0;"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   while (cin >> x >> y)"<<endl;
    cout<<"   {"<<endl;
    cout<<"     if (x % 2 != y%2)"<<endl;
    cout<<"     {"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1;"<<endl;
    cout<<"     }"<<endl;
    cout<<"   }"<<endl;
    cout<<"   for (i = 2; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j < i; j++)"<<endl;
    cout<<"         c = c + A[i][j];"<<endl;
    cout<<"   cout << c;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    grafneori();
}

void grafori(){
    cout<<"                 1.Definitii"<<endl;
    cout<<"                 2.Gradul unui varf"<<endl;
    cout<<"                 3.Metode de reprezentare"<<endl;
    cout<<"                 4.Conexitate"<<endl;
    cout<<"                 5.Tare conexitate"<<endl;
    cout<<"                 6.Aplicatii"<<endl;
    cout<<"                 7.Test"<<endl;
    cout<<"                 8.Iesire"<<endl;
    int n;
    cin>>n;
    system("cls");
    if(n==1)
        definitii2();
    else if(n==2)
        gradul2();
    else if(n==3)
        metode2();
    else if(n==4)
        conexitate2();
    else if(n==5)
        tareconexitate();
    else if(n==6)
        aplicatii2();
    else if(n==7)
        test2();
    else if(n==8)
        meniuprincipal();
    else
        meniuprincipal();
}
void definitii2()
{
    cout<<"   Se numeste GARF ORIENTAT sau digraf o pereche ordonata de multimi notata G=(V, U), unde:V este o multime finita si nevida ale carei elemente se numesc noduri sau varfuri,iar U este o multime de perechi ordonate de elemente distincte din V ale carei elemente se numesc arce."<<endl;
    cout<<"   Un ARC este o muchie intre 2 varfuri care are asociata un sens.Prima extremitate a arcului este initiala,iar a doua finala."<<endl;
    cout<<"   Se numeste LANT o succesiune de arce u 1 , u 2 ... u k , cu proprietatea ca oricare doua arce de pe pozitii consecutive au un nod comun."<<endl;
    cout<<"   Se numeste DRUM o succesiune de noduri x 1 , x 2 ... x k cu proprietatea ca (x i ,x i+1 ) este arc."<<endl;
    cout<<"   Se numeste CIRCUIT intr-un graf un drum x 1 ,x 2 ... x k cu prop ca x 1 = x k si arcele (x i ,x i+1 ) sa fie distincte doua cate doua."<<endl;
    cout<<"   Fie G=(V, U) un graf orientat. Se numeste GRAF PARTIAL al grafului G, graful orientat G1=(V, U1), unde U1 este inclusa in U.Se elimina un arc sau mai multe sau niciunul"<<endl;
    cout<<"   Fie G=(V, U) un graf orientat. Se numeste SUBGRAF al grafului G graful orientat G1=(V1,U1) unde V1 inlcus in V iar U1 contine toate arcele din U care au extremitatile in V1."<<endl;
    system("PAUSE");
    system("cls");
    grafori();
}
void gradul2()
{
    cout<<"   Se numeste grad exterior al nodului x, numarul arcelor de forma (x,y) (adica numarul arcelor care ies din x), notat  d+(x)."<<endl;
    cout<<"   Se numeste grad interior al nodului x, numarul arcelor de forma (y,x) (adica numarul arcelor care intra in x), notat d-(x)."<<endl;
    cout<<"   Se da un graf orientat cu 4 varfuri si arcele (1,2),(1,3),(2,3),(3,4),(4,1)."<<endl;
    cout<<"   d+(1)=2      d-(1)=1"<<endl;
    cout<<"   d+(2)=1      d-(2)=1"<<endl;
    cout<<"   d+(3)=1      d-(3)=2"<<endl;
    cout<<"   d+(4)=1      d-(4)=1"<<endl;
    cout<<"   Se numeste varf izolat un varf care are gradul exterior si gradul interior egal cu 0"<<endl;
    cout<<"   Pentru a determina daca un varf este izolat,vom face suma elementelor de pe linia si coloana respectiva"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101],V[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,k,s1=0,s2=0,X"<<endl;
    cout<<"   cin>>n>>X;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(int i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || V[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;"<<endl;
    cout<<"   V[x][y]=1;}"<<endl;
    cout<<"   for(int i=1;i<=n;i++)"<<endl;
    cout<<"       s1=s1+A[i][X];"<<endl;
    cout<<"   for(int j=1;j<=n;j++)"<<endl;
    cout<<"       s2=s2+A[X][j];"<<endl;
    cout<<"   if(s1==0 && s2==0) cout<<X este varf izolat"<<endl;
    cout<<"   else cout<<X nu este varf izolat"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    grafori();
}
void metode2()
{
    cout<<"             1.Lista de adiacenta"<<endl;
    cout<<"             2.Vectorul arcelor"<<endl;
    cout<<"             3.Matricea de adiacenta"<<endl;
    cout<<"             4.Matricea de incidenta"<<endl;
    cout<<"             5.Matricea drumurilor"<<endl;
    cout<<"             6.Multimea succesorilor si predecesorilor"<<endl;
    cout<<"             7.Multimea arcelor(x,y) si (y,x)"<<endl;
    cout<<"             8.Revenire"<<endl;
    int m;
    cin>>m;
    system("cls");
    if(m==1)
        listaadiacenta();
    else if(m==2)
        vectorularcelor();
    else if(m==3)
        matriceadiacenta();
    else if(m==4)
        matriceaincidenta();
    else if(m==5)
        matriceadrumurilor();
    else if(m==6)
        succesorisipredecesori();
    else if(m==7)
        arcxy();
    else if(m==8)
        grafori();
    else
        metode2();
}
void listaadiacenta2()
{
    cout<<"   Lista de adiacenta memoreaza vecinii exteriori si vecinii interiori pentru fiecare nod"<<endl;
    cout<<"   Se da graful orientat G cu 4 noduri si arcele (1,2),(2,3),(3,4),(4,1),(1,3)."<<endl;
    cout<<"   NOD     L+(x)       L-(x)"<<endl;
    cout<<"   1       2,3         4"<<endl;
    cout<<"   2       3           1"<<endl;
    cout<<"   3       4           1,2"<<endl;
    cout<<"   4       1           3"<<endl;
    cout<<"   Algoritmul pentru implementarea listei este:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m,x,y,i,j,X=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(int i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1; }"<<endl;
    cout<<"   while(X<=n){"<<endl;
    cout<<"      cout<<X<<'    ';"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"          if(A[X][j]==1)"<<endl;
    cout<<"              cout<<j<<' ';"<<endl;
    cout<<"      cout<<'    ';"<<endl;
    cout<<"      for(int i=1;i<=n;i++)"<<endl;
    cout<<"           if(A[i][X]==1)"<<endl;
    cout<<"               cout<<i<<' ';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      X++;}"<<endl;
    cout<<"   return 0;}"<<endl;
    unsigned n,m,x,y,i,j,X=1,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;}
    while(X<=n){
        cout<<X<<"     ";
        for(j=1;j<=n;j++)
            if(A[X][j]==1)
                cout<<j<<" ";
        cout<<"     ";
        for(i=1;i<=n;i++)
            if(A[i][X]==1)
                cout<<i<<" ";
        cout<<endl;
        X++;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void vectorularcelor()
{
    cout<<"   Vectorul arcelor este reprezentat printr-o structura care va contine perechile de arce"<<endl;
    cout<<"   struct arc{"<<endl;
    cout<<"       unsigned x,y;"<<endl;
    cout<<"   }arc v[50];"<<endl;
    cout<<"   int main {"<<endl;
    cout<<"   unsigned n,m,x,y,i;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) "<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>a[i].x>>a[i].y;"<<endl;
    cout<<"   }while(a[i].x==a[i].y || a[i].x>n || a[i].y>n);"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    metode2();
}
void matriceadiacenta()
{
    cout<<"   Matricea de adiacenta a grafului orientat este o matrice cu n linii si n coloane si elemente 0 sau 1, astfel:0,daca i si j nu sunt adiacente,1 daca i si j sunt adiacente"<<endl;
    cout<<"   OBS:i si j sunt adiacente daca exista arcul (i,j)"<<endl;
    cout<<"   Caracteristici:"<<endl;
    cout<<"   -este patratica(nr de linii=nr de coloane)"<<endl;
    cout<<"   -este binara(contine doar 0 si 1)"<<endl;
    cout<<"   -are pe diagonala principala 0"<<endl;
    cout<<"   Algoritmul de verificare daca o matrice poate fi de adiacenta pt un graf orientat:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n >> m;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          cin >> A[i][j];"<<endl;
    cout<<"   if(n!=m)"<<endl;
    cout<<"       OK=0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (i == j)"<<endl;
    cout<<"             if (A[i][j] != 0)"<<endl;
    cout<<"                OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"     cout << Matricea poate fi de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"     cout << NU poate fi de adiacenta;"<<endl;
    cout<<"   return 0; }"<<endl;
    unsigned n, i, j, OK = 1, A[101][101],m;
    cout<<"   Introduceti numarul de linii:";
    cin >> n;
    cout<<"   Introduceti numarul de coloane:";
    cin>>m;
    cout<<"   Introduceti matricea:";
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> A[i][j];
    if(n!=m)
        OK=0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (A[i][j] != 0 && A[i][j] != 1)
                OK = 0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i == j)
                if (A[i][j] != 0)
                    OK = 0;
    if (OK == 1)
        cout << "   Matricea poate fi de adiacenta"<<endl;
    else
        cout << "   Matricea nu poate fi de adiacenta"<<endl;
    system("PAUSE");
    system("cls");
    metode2();
}
void matriceaincidenta()
{
    cout<<"   Matricea de incidenta este o matrice cu n linii si m coloane si contine 1,0 si -1 astfel:"<<endl;
    cout<<"   1,daca i este incident exterior cu arcul j"<<endl;
    cout<<"   -1.daca i este incident interior cu arcul j"<<endl;
    cout<<"   0,daca i nu este incident cu arcul j"<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(1,3) si (2,4)"<<endl;
    cout<<"   Matricea de incidenta pentru acest graf este:"<<endl;
    cout<<"        (1,2)    (1,3)    (2,4)"<<endl;
    cout<<"   1     1        1       0"<<endl;
    cout<<"   2    -1        0       1"<<endl;
    cout<<"   3     0        -1      0"<<endl;
    cout<<"   4     0        0       -1"<<endl;
    cout<<"   Algoritmul de generare al matricei de incidenta este:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101],V[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n,m,x,y,i;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || V[x][y]==1);"<<endl;
    cout<<"   A[x][i]=1;"<<endl;
    cout<<"   A[y][i]=-1;"<<endl;
    cout<<"   V[x][y]=1;}"<<endl;
    cout<<"   for(i=1;i<=n;i++) {"<<endl;
    cout<<"     for(j=1;j<=m;j++)"<<endl;
    cout<<"        cout<<A[i][j]<<' ';"<<endl;
    cout<<"     cout<<endl;}"<<endl;
    cout<<"   return 0;}"<<endl;
    int n,m,x,y,i,j,A[50][50],V[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            A[i][j]=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            V[i][j]=0;
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || V[x][y]==1);
        A[x][i]=1;
        A[y][i]=-1;
        V[x][y]=1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void matriceadrumurilor()
{
    cout<<"   Matricea drumurilor este o matrice cu n linii si n coloane care contine 1 daca exista drum de la i la j sau 0 in caz contrar"<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(2,1),(1,4),(4,1),(2,3),(4,3)."<<endl;
    cout<<"   Matricea drumurilor va fi:"<<endl;
    cout<<"   1 1 1 1"<<endl;
    cout<<"   1 1 1 1"<<endl;
    cout<<"   0 0 0 0 "<<endl;
    cout<<"   1 1 1 1"<<endl;
    cout<<"   Algoritmul Roy-Warshall este algoritmul prin care se transforma matricea de adiacenta in matricea drumurilor."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,k;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(k=1;k<=n;k++)"<<endl;
    cout<<"       for(i=1;i<=n;i++)"<<endl;
    cout<<"           for(j=1;j<=n;j++)"<<endl;
    cout<<"              if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)"<<endl;
    cout<<"                  A[i][j]=1;"<<endl;
    cout<<"   for(i=1;i<=n;i++) {"<<endl;
    cout<<"     for(j=1;j<=n;j++)"<<endl;
    cout<<"        cout<<A[i][j]<<' ';"<<endl;
    cout<<"     cout<<endl;}"<<endl;
    cout<<"   return 0;"<<endl;
    int n,m,x,y,i,j,k,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;
    }
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)
                    A[i][j]=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void succesorisipredecesori()
{
    cout<<"   Se numeste succesor al varfului x orice varf la care ajunge un arc care iese din x.Multimea succesorilor se noteaza: Γ+."<<endl;
    cout<<"   Se numeste predecesor al varfului x orice vârf de la care intra un arc în varful x.Multimea predecesorilor se noteaza: Γ-."<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(2,1),(1,4),(4,1),(2,3),(4,3)."<<endl;
    cout<<"   Γ+(1)={2,4}   Γ-(1)={2,4}"<<endl;
    cout<<"   Γ+(2)={1,3}   Γ-(2)={1}"<<endl;
    cout<<"   Γ+(3)= \      Γ-(3)={2,4}"<<endl;
    cout<<"   Γ+(4)={1,3}   Γ-(4)={1}"<<endl;
    cout<<"   Algoritmul pt multimea succesorilor si predecesorilor este:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m,x,y,i,j,X=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(int i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   while(X<=n){"<<endl;
    cout<<"      cout<<'Succesorii lui '<<X<<' sunt:';"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"          if(A[X][j]==1)"<<endl;
    cout<<"              cout<<j<<' '"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      cout<<'Predecesorii lui '<<X<<' sunt:';"<<endl;
    cout<<"      for(int i=1;i<=n;i++)"<<endl;
    cout<<"           if(A[i][X]==1)"<<endl;
    cout<<"               cout<<i<<' ';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      X++;}"<<endl;
    cout<<"   return 0;}"<<endl;
    unsigned n,m,x,y,i,j,X=1,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;}
    while(X<=n){
        cout<<"   Succesorii lui "<<X<<" sunt:";
        for(j=1;j<=n;j++)
            if(A[X][j]==1)
                cout<<j<<" ";
        cout<<endl;
        cout<<"   Predecesorii lui "<<X<<" sunt:";
        for(i=1;i<=n;i++)
            if(A[i][X]==1)
                cout<<i<<" ";
        cout<<endl;
        X++;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void arcxy()
{
    cout<<"   ω+(x)={(x,y)|(x,y) este muchie}"<<endl;
    cout<<"   ω-(x)={(y,x)|(y,x) este muchie}"<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(2,1),(1,4),(4,1),(2,3),(4,3)."<<endl;
    cout<<"   ω+(1)={(1,2),(1,4)}       ω-(1)={(2,1),(4,1)}"<<endl;
    cout<<"   ω+(2)={(2,1),(2,3)}       ω-(2)={(1,2)}"<<endl;
    cout<<"   ω+(3)= \                  ω-(3)={(2,3),(4,3)}"<<endl;
    cout<<"   ω+(4)={(4,1),(4,3)}       ω-(4)={(1,4)}"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m,x,y,i,j,X=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   while(X<=n){"<<endl;
    cout<<"      cout<<'Arcele care il contin pe '<<X<<' ca extremitate initiala sunt:';"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"          if(A[X][j]==1)"<<endl;
    cout<<"              cout<<'('<<X<<','<<j<<')'<<' ';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      cout<<'Arcele care il contin pe '<<X<<' ca extremitate finala sunt:';"<<endl;
    cout<<"      for(int i=1;i<=n;i++)"<<endl;
    cout<<"           if(A[i][X]==1)"<<endl;
    cout<<"              cout<<'('<<i<<','<<X<<')';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      X++;}"<<endl;
    cout<<"   return 0;}"<<endl;
    unsigned n,m,x,y,i,j,X=1,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;
    }
    while(X<=n){
        cout<<"   Arcele care il contine pe "<<X<<" ca extremitate initiala sunt:";
        for(j=1;j<=n;j++)
            if(A[X][j]==1)
                cout<<"("<<X<<","<<j<<")";
        cout<<endl;
        cout<<"   Arcele care il contine pe "<<X<<" ca extremitate finala sunt:";
        for(i=1;i<=n;i++)
            if(A[i][X]==1)
                cout<<"("<<i<<","<<X<<")";
        cout<<endl;
        X++;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void conexitate2()
{
    cout<<"   Se numeste graf orientat conex un graf in care oricare 2 varfuri x si y pot fi unite printr-un lant"<<endl;
    cout<<"   Componenta conexa este un subgraf conex maximal cu aceasta proprietate"<<endl;
    system("PAUSE");
    system("cls");
    grafori();
}
void tareconexitate()
{
    cout<<"   Graful tare conex este un graf in care intre oricare 2 varfuri exista drum.Matricea drumurilor contine doar 1."<<endl;
    cout<<"   Se numeste componenta tare conexa un subgraf tare conex maximal cu aceasta proprietate"<<endl;
    cout<<"   Algoritmul care verifica daca un graf este tare conex este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,k,OK=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(k=1;k<=n;k++)"<<endl;
    cout<<"       for(i=1;i<=n;i++)"<<endl;
    cout<<"           for(j=1;j<=n;j++)"<<endl;
    cout<<"              if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)"<<endl;
    cout<<"                  A[i][j]=1;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"     for(j=1;j<=n;j++)"<<endl;
    cout<<"        if(A[i][j]!=1)"<<endl;
    cout<<"            OK=0;"<<endl;
    cout<<"   if(OK==1) cout<<Graful este tare conex"<<endl;
    cout<<"   else cout<<Graful nu este tare conex"<<endl;
    cout<<"   return 0;}"<<endl;
    int n,m,x,y,i,j,k,A[50][50],OK=1;
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;
    }
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)
                    A[i][j]=1;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(A[i][j]!=1)
                OK=0;
    if(OK==1)
        cout<<"   Graful este tare conex";
    else
        cout<<"   Graful nu este tare conex";
    system("PAUSE");
    system("cls");
    grafori();
}
void aplicatii2()
{
    cout<<"                 1.Aplicatia 1"<<endl;
    cout<<"                 2.Aplicatia 2"<<endl;
    cout<<"                 3.Aplicatia 3"<<endl;
    cout<<"                 4.Revenire"<<endl;
    int a;
    cin>>a;
    system("cls");
    if(a==1)
        aplicatia4();
    else if(a==2)
        aplicatia5();
    else if(a==3)
        aplicatia6();
    else if(a==4)
        grafori();
    else
        aplicatii2();
}
void aplicatia4()
{
    cout<<"   1.Se citeste de la tastatura numarul de varfuri ale unui graf orientat si numarul de arce,iar apoi m arce.Sa se determine cate varfuri au gradul interior nul."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned v[101],A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,contor=0;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   v[y]++;"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(i=1; i<=n; i++) "<<endl;
    cout<<"       if(v[i]==0)"<<endl;
    cout<<"          contor++;"<<endl;
    cout<<"   cout<<contor;"<<endl;
    cout<<"   return 0; }"<<endl;
    unsigned x,y,i,contor=0,n,m,v[100],A[101][101],j;
    for(i=1; i<=100; i++)
        v[i]=0;
    for(i=1;i<=100;i++)
        for(j=1;j<=100;j++)
            A[i][j]=0;
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n ||A[x][y]==1);
        v[y]++;
        A[x][y]=1;
    }
    for(i=1; i<=n; i++)
        if(v[i]==0)
            contor++;
    cout<<contor;
    system("PAUSE");
    system("cls");
    aplicatii2();
}
void aplicatia5()
{
    cout<<"   2.Se citeste de la tastatura n-numarul de varfuri ale unui graf orientat si m-numarul de arce,iar apoi m arce.Sa se determine cate varfuri au gradul exterior egal cu cel interior."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned vplus[101],vminus[101],A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,contor=0;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   vplus[x]++;"<<endl;
    cout<<"   vminus[y]++;"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(i=1; i<=n; i++) "<<endl;
    cout<<"       if(vplus[i]==vminus[i])"<<endl;
    cout<<"          contor++;"<<endl;
    cout<<"   cout<<contor;"<<endl;
    cout<<"   return 0; }"<<endl;
    unsigned x,y,i,contor=0,n,m,vplus[100],vminus[100],A[101][101],j;
    for(i=1; i<=100; i++)
        vplus[i]=0;
    for(i=1; i<=100; i++)
        vminus[i]=0;
    for(i=1;i<=100;i++)
        for(j=1;j<=100;j++)
            A[i][j]=0;
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
        vplus[x]++;
        vminus[y]++;
        A[x][y]=1;
    }
    for(i=1; i<=n; i++)
        if(vplus[i]==vminus[i])
            contor++;
    cout<<contor;
    system("PAUSE");
    system("cls");
    aplicatii2();
}
void aplicatia6()
{
    cout<<"   3.Se citeste de la tastatura o matrice cu n linii si m coloane.Sa se verifice daca poate fi de adiacenta pt un graf orientat"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n >> m;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          cin >> A[i][j];"<<endl;
    cout<<"   if(n!=m)"<<endl;
    cout<<"       OK=0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (i == j)"<<endl;
    cout<<"             if (A[i][j] != 0)"<<endl;
    cout<<"                OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"     cout << Matricea poate fi de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"     cout << NU poate fi de adiacenta;"<<endl;
    cout<<"   return 0; }"<<endl;
    unsigned n, i, j, OK = 1, A[101][101],m;
    cout<<"   Introduceti numarul de linii:";
    cin >> n;
    cout<<"   Introduceti numarul de coloane:";
    cin>>m;
    cout<<"   Introduceti matricea:";
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> A[i][j];
    if(n!=m)
        OK=0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (A[i][j] != 0 && A[i][j] != 1)
                OK = 0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i == j)
                if (A[i][j] != 0)
                    OK = 0;
    if (OK == 1)
        cout << "   Matricea poate fi de adiacenta"<<endl;
    else
        cout << "   Matricea nu poate fi de adiacenta"<<endl;
    system("PAUSE");
    system("cls");
    aplicatii2();
}
void test2(){
    int scor=0;
    cout<<"   1.Matricea de adiacenta:"<<endl;
    cout<<"   a)este patratica b)contine 1 si 3 c)este simetrica d)are pe diagonala secundara numai 0"<<endl;
    char a;
    cin>>a;
    if(a=='a' || a=='A'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;}
    else
        cout<<"   Raspuns gresit!Raspunsul corect era a"<<endl;
    cout<<"   2.Varful izolat are gradul exterior egal cu 0"<<endl;
    cout<<"   a)adevarat b)fals c)depinde de graf d)nu are grad exterior"<<endl;
    char b;
    cin>>b;
    if(b=='a'|| b=='A'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era a"<<endl;
    cout<<"   3.Un graf orientat are 8 varfuri, numerotate de la 1 la 8, si arcele (1,7), (1,8), (3,5), (3,7), (4,3), (4,7), (6,3), (6,5), (6,7), (6,8), (8,5), (8,7). Numarul varfurilor care au gradul exterior nul este:"<<endl;
    cout<<"   a)1 b)2 c)3 d)4"<<endl;
    char c;
    cin>>c;
    if(c=='c' || c=='C'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era c"<<endl;
    cout<<"   4.Intr-un graf orientat cu 7 noduri suma gradelor interioare ale tuturor nodurilor este egala cu 10. Care este valoarea sumei gradelor exterioare ale tuturor nodurilor?"<<endl;
    cout<<"   a)5 b)3 c)20 d)10"<<endl;
    char x;
    cin>>x;
    if(x=='d'|| x=='D'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era d"<<endl;
    cout<<"   5.Care dintre variantele de mai jos este o metoda de reprezentare?"<<endl;
    cout<<"   a)vectorul arcelor b)lant c)drum d)subgraf"<<endl;
    char y;
    cin>>y;
    if(y=='a' || y=='A'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era a"<<endl;
    cout<<"   6.Un graf orientat contine muchii?"<<endl;
    cout<<"   a}fals b)adevarat c)depinde de graf d)nu exista muchii"<<endl;
    char z;
    cin>>z;
    if(z=='a' || z=='A'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era a"<<endl;
    cout<<"   7.Cate noduri ale grafului orientat cu sase noduri numerotate de la 1 la 6 si urmatoarele arce: (1,5), (1,6), (2,1), (2,3), (3,1), (3,4), (4,3), (4,5), (5,4), (6,5) au gradul interior egal cu gradul exterior?"<<endl;
    cout<<"   a)5 b)7 c)4 d)0"<<endl;
    char t;
    cin>>t;
    if(t=='c' || t=='C'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era c"<<endl;
    cout<<"   8.Se considera graful orientat cu varfurile numerotate de la 1 la 7 si arcele (1,2), (1,7), (2,3), (3,2), (3,4), (4,3), (5,4), (5,6), (6,4), (7,6). Cate varfuri din graful dat au gradul exterior impar?"<<endl;
    cout<<"   a)0 b)2 c)1 d)4"<<endl;
    char s;
    cin>>s;
    if(s=='d' || s=='D'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era d"<<endl;
    cout<<"   9.Matricea de incidenta:"<<endl;
    cout<<"   a)nu este patratica b)contine doar 1 si -1 c)este patratica d)este simetrica"<<endl;
    char r;
    cin>>r;
    if(r=='a'|| r=='A'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era a"<<endl;
    cout<<"   10.Gradul exterior al unui varf este egal cu:"<<endl;
    cout<<"   a)gradul interior al acestuia b)numarul de varfuri c)numarul de arce d)numarul de arce in care acesta este extremitate initiala"<<endl;
    char o;
    cin>>o;
    if(o=='d' || o=='D'){
        scor++;
        cout<<"   Raspuns corect!"<<endl;
    }
    else
        cout<<"   Raspuns gresit!Raspunsul corect era d"<<endl;
    cout<<"   Ai ajuns la final!Ai obtinut ";
    cout<<scor;
    cout<<" puncte"<<endl;
    system("PAUSE");
    system("cls");
    grafori();
}

void backtracking(){
    cout<<"...";
}

void greedy(){
    cout<<"...";
}

void progdin(){
    cout<<"...";
}

int main()
{
    titlu();
    bunvenit();
    prezentare();
    return 0;
}
