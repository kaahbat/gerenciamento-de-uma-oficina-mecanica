#pragma once

//Inclui as bibliotecas padrão do C++ necessárias para o funcionamento do código
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <sstream>   // Necessário para std::ostringstream
#include <iomanip>  
 // Necessário para std::setw
using namespace std;

//Inclui os headers dos outros componentes do sistema
#include "Funcionario.hpp"
#include "Admin.hpp"
#include "Mecanicos.hpp"
#include "Vendedores.hpp"
#include "SistemaLogin.hpp"
#include "OrdemServico.hpp"

//Declaração da classe Telas, responsável pela interface do usuário
class Telas {
private:
    //Ponteiro para um objeto do tipo SistemaLogin, que controla o sistema de login
    SistemaLogin *sistema = new SistemaLogin();

public:
    //Construtor padrão da classe Telas
    Telas();

    //Destrutor da classe Telas para liberar a memória alocada dinamicamente
    ~Telas();

    //Método para exibir o menu principal da aplicação
    void menuPrincipal();

    //Método para exibir o menu específico para mecânicos
    void menuMecanicos(Mecanicos* mecanico, SistemaLogin* sistema);

    //Método para exibir o menu específico para vendedores
    void menuVendedores(Vendedores* vendedor, SistemaLogin* sistema);   

    //Método para exibir o menu específico para administradores
    void menuAdmin(SistemaLogin* sistema);

    //Método para exibir a tela de login
    void menuLogin();

    //Método para ler uma string do usuário de forma segura
    string lerString();
};
