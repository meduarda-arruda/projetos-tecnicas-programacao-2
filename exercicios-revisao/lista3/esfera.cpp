#include "esfera.h"

float Esfera::getRaio() const
{
    return raio;
}

void Esfera::setRaio(float value)
{
    raio = value;
}

Esfera::Esfera():
    raio(0)
{

}

float Esfera::calcular_area() const{
    return (4*3.1415*raio*raio);
}
float Esfera::calcular_volume() const{
    return ((4.0/3.0f)*3.1415*raio*raio*raio);
}
