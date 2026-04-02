#include <string>
#include <iostream>
int main()
{
	int diaNasc = 0, mesNasc =0 , anoNasc = 0, diaHoje = 0,mesHoje = 0 ,anoHoje = 0 , idade = 0; //declarando as variaveis
	std::string nome ="";//string para armazenar o nome

	//input/entrada de dado dos usuários
	std::cout << "insira o seu nome:\n"; 
	std::cin >> nome;

	std::cout << "insira o sua data de nascimento (DD/MM/YYYY) :\n"; // ao invés de separar e inserir cada um com dialogo de entrada diferente, faz o uso de apenas um dialogo
	std::cin >> diaNasc >> mesNasc >> anoNasc; // recebendo os dados 

	
	std::cout << "insira a data do dia de hoje (DD/MM/YYYY) :\n";
	std::cin >> diaHoje >> mesHoje >> anoHoje;

	idade = anoHoje - anoNasc; // calculando a idade com base no ano

	if (mesHoje < mesNasc || (mesHoje == mesNasc && diaHoje < diaNasc )) //verificando se já fez o aniversário, ou seja, se o mes atual for menor que o de nascimento ou se o mes atual for igual o mes de nascimento, mas, o dia for menor, a pessoa ainda nao terá feito aniversário
	{
		idade--;
	}

	std::cout << nome << " sua idade e: " << idade; // output do cálculo
	
	
}
