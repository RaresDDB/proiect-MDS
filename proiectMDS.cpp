#include <iostream>
#include <windows.h>
using namespace std;

void titlu();
void bunvenit();
void prezentare();
void meniuprincipal();

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
    system("PAUSE");
    system("cls");
}

int main()
{
    titlu();
    bunvenit();
    prezentare();
    //meniuprincipal();
    return 0;
}
