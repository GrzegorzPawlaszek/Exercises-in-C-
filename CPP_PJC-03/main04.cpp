#include <iostream>
#include <cmath>

using namespace std;

struct Punkt {
    double x,y,z;
};

double odleglosc(Punkt*, Punkt*);
void najblizej(Punkt*[], int);

int main()
{
 Punkt a = {0,0,3}, b = {100,2,3}, c = {3,4,2}, d = {100,0,6}, e ={14,3,6}, f ={21,22,11}, g ={-3,-26,2}, h ={13,-14,-15};

 Punkt *punkty[] = {&a, &b, &c, &d, &e, &f, &g, &h};
 int size = sizeof(punkty)/sizeof(Punkt*);
 najblizej(punkty, size);
    return 0;

}

double odleglosc(Punkt *p, Punkt *r){
    double odl = sqrt(pow(r->x - p->x, 2) + pow(r->y - p->y, 2) + pow(r->z - p->z, 2));
return odl;
}

void najblizej(Punkt*tab[], int size){
    double najwieksza = 0;
    double odcinek = 0;
    Punkt *a = 0;
    Punkt *b = 0;
    for (int i=0; i<size-1;i++){
        Punkt *tmp1 = tab[i];
        for (int j=i;j<size;j++){
            Punkt *tmp2 = tab[i+1];
            odcinek = odleglosc(tmp1, tmp2);
                if (najwieksza<odcinek){
                    najwieksza = odcinek;
                    a = tmp1;
                    b = tmp2;
                }
        }
    }
    cout << "Punkty w najwiekszej odleglosci: (" << a->x << ", " << a->y << ", " << a->z;
    cout << ")  oraz (" << b->x << ", " << b->y << ", " << b->z << ")"<< endl;
}
