#include "Matriz.h"

namespace TP2 {

Matriz::Matriz(int qLinhas, int qColunas):
    QuantidadeDeLinhas(0),
    QuantidadeDeColunas(0),
    matriz(0)

{
    if(qLinhas<=0)
        throw QString("Quantidade de linhas invalida");
    if (qColunas<=0)
        throw QString("Quantidade de colunas invalida");
    try {
        matriz = new int [qLinhas*qColunas];
        QuantidadeDeLinhas = qLinhas;
        QuantidadeDeColunas = qColunas;
    } catch (std::bad_alloc&){
        throw QString("falta de memoria");
    }
}

void Matriz::setElemento(int elemento, int linha, int coluna)const{
    if(linha<0 || linha >=QuantidadeDeLinhas)
        throw QString("linha fora do intervalo valido");
    if (coluna<0 || coluna >=QuantidadeDeColunas)
        throw QString ("coluna fora do intervalo valido");
    int posicao = linha*QuantidadeDeColunas+coluna;
    matriz[posicao] = elemento;
}
int Matriz::getElemento(int linha, int coluna)const{
    if(linha<0 || linha >=QuantidadeDeLinhas)
        throw QString("linha fora do intervalo valido");
    if (coluna<0 || coluna >=QuantidadeDeColunas)
        throw QString ("coluna fora do intervalo valido");
    int posicao = linha*QuantidadeDeColunas+coluna;
    return *(matriz+posicao);
}
QString Matriz::getMatriz() const{
    QString saida = "";
    for (int linha = 0; linha< getQuantidadeDeLinhas(); linha++){
        for (int coluna = 0; coluna<getQuantidadeDeColunas(); coluna++){
            saida += QString::number(getElemento(linha, coluna));
            saida += " ";
        }
        saida += "\n";
    }
    return saida;
}
} // namespace TP2
