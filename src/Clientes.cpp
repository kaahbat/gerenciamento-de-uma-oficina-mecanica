#include "Clientes.hpp"

//Construtor que inicializa os atributos do cliente
Clientes::Clientes(int id, const string & nome, const string & cpf, const string & telefone, const string & email, const string & rua, const string & bairro, const string & cidade, const string & estado, const string & cep, const string & numero)
{
    this->id = id;
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->email = email;
    this->rua = rua;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
    this->numero = numero;
}

//Destrutor da classe Clientes, não realiza nenhuma operação específica
Clientes::~Clientes() {
    for(auto veiculo : veiculos) {
        delete veiculo;
    }
}

//Implementação dos setters
void Clientes::setId(int id) {
    this->id = id;
}

void Clientes::setNome(const string& nome) {
    this->nome = nome;
}

void Clientes::setCpf(const string& cpf) {
    this->cpf = cpf;
}

void Clientes::setTelefone(const string& telefone) {
    this->telefone = telefone;
}

void Clientes::setEmail(const string& email) {
    this->email = email;
}

void Clientes::setRua(const string& rua) {
    this->rua = rua;
}

void Clientes::setBairro(const string& bairro) {
    this->bairro = bairro;
}

void Clientes::setCidade(const string& cidade) {
    this->cidade = cidade;
}

void Clientes::setEstado(const string& estado) {
    this->estado = estado;
}

void Clientes::setCep(const string& cep) {
    this->cep = cep;
}

void Clientes::setNumero(const string& numero) {
    this->numero = numero;
}

//Adiciona um veículo ao vetor de veículos do cliente
void Clientes::addVeiculo(Veiculos *veiculo) {
    veiculos.push_back(veiculo);
}

//Implementação dos getters
int Clientes::getId() const {
    return id;
}

string Clientes::getNome() const {
    return nome;
}

string Clientes::getCpf() const {
    return cpf;
}

string Clientes::getTelefone() const {
    return telefone;
}

string Clientes::getEmail() const {
    return email;
}

string Clientes::getRua() const {
    return rua;
}

string Clientes::getBairro() const {
    return bairro;
}

string Clientes::getCidade() const {
    return cidade;
}

string Clientes::getEstado() const {
    return estado;
}

string Clientes::getCep() const {
    return cep;
}

string Clientes::getNumero() const {
    return numero;
}

//Retorna o vetor de veículos associados ao cliente
vector<Veiculos *> Clientes::getVeiculos() const {
    return veiculos;
}

//Retorna a quantidade de veículos que o cliente possui
int Clientes::getQuantosVeiculos() {
    return veiculos.size();
}

