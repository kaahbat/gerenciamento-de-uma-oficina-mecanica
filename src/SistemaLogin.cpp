#include "SistemaLogin.hpp"

SistemaLogin::SistemaLogin() {

}

void SistemaLogin::addUsuario(Funcionario *usuario)
{
    usuarios.push_back(usuario);
}

Funcionario *SistemaLogin::autenticar(string& login, string& senha) const 
{
    for (const auto& u : usuarios) {
        if (u->autenticar(login, senha)) {
            return u;
        }
    }
    return nullptr;
}

Funcionario *SistemaLogin::getUsuario(int id) const
{
    for (const auto& u : usuarios) {
        if (u->getId() == id) {
            return u;
        }
    }
    return nullptr;
}

SistemaLogin::~SistemaLogin() {
    
}

vector<Funcionario *> SistemaLogin::getUsuarios() const
{
    return usuarios;
}

vector<Funcionario *> SistemaLogin::getMecanicos() const
{
    vector<Funcionario *> mecanicos;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            mecanicos.push_back(u);
        }
    }
    return mecanicos;
}

vector<Funcionario *> SistemaLogin::getVendedores() const
{
    vector<Funcionario *> vendedores;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            vendedores.push_back(u);
        }
    }
    return vendedores;
}


void SistemaLogin::setUsuario(int id, Funcionario *usuario)
{
    for (auto& u : usuarios) {
        if (u->getId() == id) {
            u = usuario;
        }
    }
}


int SistemaLogin::getQuantosVendedores()
{
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Vendedor") {
            cont++;
        }
    }
    return cont;
}

int SistemaLogin::getQuantosMecanicos()
{
    int cont = 0;
    for (const auto& u : usuarios) {
        if (u->getTipo() == "Mecanico") {
            cont++;
        }
    }
    return cont;
}