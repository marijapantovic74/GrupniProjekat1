#include <iostream>

using namespace std;
int n;//broj diskova
void Hanoj(int diskBr, char sa, char na, char pom)
{
        //ako nema ni jedan disk ne radi nista
        //ako je jedan disk samo ga prebacimo na ciljanu iglu
        if(diskBr==1)
            cout<<"Prebaci disk sa "<<sa<<" na "<<na<<endl;
        else
        {
            //ako ima vise dikova, prebacujemo prvo n-1 diskova na pomocni disk
            Hanoj(diskBr-1,sa,pom,na);
            //prebacimo disk na ciljani stap
            cout<<"Prebaci disk sa "<<sa<<" na "<<na<<endl;
            //prebacimo sada onih n-1 diskova na pomocne na ciljni stap
            Hanoj(diskBr-1,pom,na,sa);
        }
        n++;
}
int main()
{
    n=0;
    Hanoj(4,'A','C','B');
    cout<<"Broj prebacivanja je "<<n<<endl;
    return 0;
}
