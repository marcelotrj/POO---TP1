#include "livro.h"
// Definicoes dos metodos da classe Livro
Livro::~Livro() {}
Livro::Livro() {}
// Definicao dos getters e setters
std::vector<string> Livro::getEscritores()
{
	return escritores;
}
string Livro::getTitulo()
{
	return titulo;
}
std::vector<string> Livro::getCapitulos()
{
	return capitulos;
}
int Livro::getAnoPublicacao()
{
	return anoPublicaao;
}
string Livro::getIdiomaOriginal()
{
	return idiomaOriginal;
}
std::vector<string>Livro::getKeywords()
{
	return keywords;
}
void Livro::setEscritores(std::vector<string> m_escritor)
{
	escritores = m_escritor;
}
void Livro::setTitulo(const string& m_titulo)
{
	titulo = m_titulo;
}
void Livro::setCapitulos(std::vector<string> m_capitulos)
{

}
void Livro::setAnoPublicacao(const int& m_ano)
{

}
void Livro::setIdiomaOriginal(const string&)
{

}
void Livro::setKeyswords(std::vector<string> m_keysWords)
{

}
// Sobrecarga do operator cout
ostream& operator <<(ostream& out, const Livro& livro)
{
	out << "----------------------------------------------------------------------------" << '\n';
	out << " Escritor(res): ";
for (string it : livro.escritores)
	{
		out << it << " " << endl;
	}
	out << " Titulo:  " << livro.titulo << '\n';
	out << " Capitulos: ";
for (string it : livro.capitulos)
	{
		out << it << " " << endl;
	}
	out << "Ano de publicacao: " << livro.anoPublicaao << '\n';
	out << "Idioma Original: " << livro.idiomaOriginal << " \n";
	out << " Chaves: ";
for (string it : livro.keywords)
	{
		out << it << " " << endl;
	}
} // Fim da Sobrecarga do operator <<
// Sobrecarga do operator cin
istream& operator >> (istream& in, Livro& livro)
{
	in.clear();
	in.ignore(45 , '\n');
	// Preenchendo os escritores, caso seja mais de um
	for(int it = 0; it <= livro.capitulos.size();  it++)
		getline(in, livro.escritores[it]);
	// Preenchendo o campo titulo do livro
	in >> livro.titulo;
	// Preenchendo o campo capitulos do livro
	for(int it = 0 ; it < livro.capitulos.size();  it++)
		getline(in, livro.capitulos[it]);
	// Preenchendo o campo ano de publicacao
	in >> livro.anoPublicaao;
	// Idioma Original
	in >> livro.idiomaOriginal;
	// Preenchendo os dados do campo keywords
	for(int it = 0 ; it < livro.keywords.size();  it++)
		getline(in, livro.keywords[it]);
} // Fim da Sobrecarga do operator >>
