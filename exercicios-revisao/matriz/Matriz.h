#ifndef TP2_MATRIZ_H
#define TP2_MATRIZ_H
#include <QString>


namespace TP2 {

class Matriz
{
private:
    int QuantidadeDeLinhas;
    int QuantidadeDeColunas;
    int *matriz;
public:
    Matriz(int qLinhas, int qColunas);
    ~Matriz(){if(matriz)delete[]matriz;}
    int getQuantidadeDeLinhas()const{return QuantidadeDeLinhas;}
    int getQuantidadeDeColunas()const{return QuantidadeDeColunas;}

    void setElemento(int elemento, int linha, int coluna)const;
    int getElemento(int linha, int coluna)const;
    QString getMatriz()const;
};

} // namespace TP2

#endif // TP2_MATRIZ_H
