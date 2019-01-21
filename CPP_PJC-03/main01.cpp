#include <iostream>
#include <cmath>

using namespace std;

struct Punkt;
struct Bryla;

double odleglosc(Punkt*, Punkt*);
double objetoscBryly(Bryla*);
double wSrodku(Bryla*, Punkt*);
double wSrodku(Bryla*, Bryla*);

struct Punkt {
    double x,y,z;
} a1 = {0,0,3}, b1 = {0,2,3}, c1 = {3,2,3}, d1 = {3,0,3}, e1 ={0,0,0}, f1 ={0,2,0}, g1 ={3,2,0}, h1 ={3,0,0};

struct Bryla{
    Punkt a,b,c,d,e,f,g,h;
} bryla1 = {a1, b1, c1, d1, e1, f1, g1, h1};


int main()
{
    Bryla *bptr = &bryla1;
    cout << "Objetosc: " << objetoscBryly(bptr) << endl;
    return 0;
}


double odleglosc(Punkt *p, Punkt *r){
    double odl = sqrt(pow(r->x - p->x, 2) + pow(r->y - p->y, 2) + pow(r->z - p->z, 2));
return odl;
}

double objetoscBryly(Bryla *br){
    double objetosc = (odleglosc(&(br->a),&(br->b))) * (odleglosc(&(br->a),&(br->d))) * (odleglosc(&(br->a),&(br->e)));
    return objetosc;
}

double wSrodku(Bryla *b1, Bryla *b2){

}
