#ifndef ESFERA_H
#define ESFERA_H

namespace tp1 {

}


class Esfera
{
private:
    float raio;
public:
    Esfera();

    float getRaio() const;
    void setRaio(float value);
    float calcular_volume()const;
    float calcular_area()const;
};

#endif // ESFERA_H
