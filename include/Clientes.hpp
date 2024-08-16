#pragma once
#include "Veiculos.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Clientes {
private:
    int id;
    string nome;
    string cpf;
    string telefone;
    string email;
    string rua;
    string bairro;
    string cidade;
    string estado;
    string cep;
    string numero;
    vector<Veiculos*> veiculos; // Relacionamento com veiculos pois um cliente pode ter vários veículos


public:
    Clientes(
        int id,
        const string& nome,
        const string& cpf,
        const string& telefone,
        const string& email,
        const string& rua,
        const string& bairro,
        const string& cidade,
        const string& estado,
        const string& cep,
        const string& numero
    );
    
    ~Clientes();
    void setId(int id);
    void setNome(const string& nome);
    void setCpf(const string& cpf);
    void setTelefone(const string& telefone);
    void setEmail(const string& email);
    void setRua(const string& rua);
    void setBairro(const string& bairro);
    void setCidade(const string& cidade);
    void setEstado(const string& estado);
    void setCep(const string& cep);
    void setNumero(const string& numero);
    void addVeiculo(Veiculos* veiculo);

    int getId() const;
    string getNome() const;
    string getCpf() const;
    string getTelefone() const;
    string getEmail() const;
    string getRua() const;
    string getBairro() const;
    string getCidade() const;
    string getEstado() const;
    string getCep() const;
    string getNumero() const;

    vector<Veiculos*> getVeiculos() const;
    int getQuantosVeiculos();



    void print();

};