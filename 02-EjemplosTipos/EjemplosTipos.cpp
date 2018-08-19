/*EjemplosTipos
Usar los distintos tipos de datos y realizar ejemplos
ED
16 04 2018
*/

#include <iostream>
#include <cassert>
#include <string>

using std::string;

int main(){

    // Usando tipo de dato entero
    int a{3}, b{5};
    assert(8==(a+b));
    assert(15==(a*b));
    assert(2==(b-a));

    // Usando tipo de dato double

    double c{4.5}, d{2.4};
    assert(2.1==(c-d));
    assert(80.7!=(c+d));
    assert(c!=d);

    // Usando tipo de dato unsigned

    unsigned e{5}, f{5};
    assert(e==f);
    assert(1==(e/f));
    assert(0==(e-f));

    // Usando tipo de dato char

    char g{'B'}, h{'b'};
    assert(66==g);
    assert(98==h);
    assert(164==(g+h));

    // Usando tipo de dato string

    string i="Soleado";
    string j="Nublado";
    assert(7==i.length());
    assert(i.length()>=j.length());
    assert(10!=j.length());

    // Usando tipo de dato bool

    bool k{true};
    k=k and true;
    assert(true==k);

    bool l{false};
    l=l or false;
    assert(false==l);

}

