#include <iostream>
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
        elembaza();
    }
    else if(a==2){
        tabuni();
    }
    else if(a==3){
        tabbi();
    }
    else if(a==4){
        sircarac();
    }
    else if(a==5){
        subprograme();
    }
     else if(a==6){
        grafneori();
    }
     else if(a==7){
        grafori();
    }
     else if(a==8){
        backtracking();
    }
     else if(a==9){
        greedy();
    }
     else if(a==10){
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
    cout<<"...";
}

void grafneori(){
    cout<<"...";
}

void grafori(){
    cout<<"...";
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
