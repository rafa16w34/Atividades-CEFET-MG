#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>

class Produto {

private:
    std::string descricao; 
    float peso;
    int unidade;
    float preco;
    std::string id;
    int quantidade;

public:

    Produto(std::string descricao, float peso, int unidade,
            float preco, std::string id, int quantidade)
        : descricao(descricao),
          peso(peso),
          unidade(unidade),
          preco(preco),
          id(id),
          quantidade(quantidade) {}

    std::string getDescricao() const { return descricao; }
    float getPeso() const { return peso; }
    int getUnidade() const { return unidade; }
    float getPreco() const { return preco; }
    std::string getId() const { return id; }
    int getQuantidade() const { return quantidade; }

    void setDescricao(const std::string& d) { descricao = d; }
    void setPeso(float p) { peso = p; }
    void setUnidade(int u) { unidade = u; }
    void setPreco(float p) { preco = p; }
    void setId(const std::string& novoId) { id = novoId; }
    void setQuantidade(int q) { quantidade = q; }
};

#endif
