#include "../Header/Titular.h"
#include <iostream>

Titular::Titular(Cpf cpf, std::string nome, std::string senha): 
    Pessoa(cpf,nome),
    Autenticavel(senha)
    {}