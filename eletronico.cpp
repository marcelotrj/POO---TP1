#include "eletronico.h"
Eletronico::Eletronico(const string& m_url, const string& m_formatoArquivo): url(m_url), formatoArquivo(m_formatoArquivo) {} // Construtor
Eletronico::~Eletronico() {}
string Eletronico::getUrl()
{
	return url;
}
string Eletronico::getFormatoArquivo()
{
	return formatoArquivo;
}
void Eletronico::setUrl(const string& m_url)
{
	url = m_url;
}
void Eletronico::setFormatoArquivo(const string& m_formatoArquivo)
{
	formatoArquivo = m_formatoArquivo;
}
// Sobrecarga do operator cout
ostream& operator << (ostream& out, const Eletronico& eletronico)
{
	out << "----------------------------------------------------------------------------" << '\n';
	out << "URL: " << eletronico.url << '\n'
		  << "Formato do Arquivo: " << eletronico.formatoArquivo << '\n';
} // Fim da Sobrecarga do operator <<
// Sobrecarga do operator cin
istream& operator >> (istream& in, Eletronico& eletronico)
{
	in.clear();
	in.ignore(45 , '\n');
	// Insercao do dado url da classe
	getline(in, eletronico.url);
	// Insercao do dado formatoArquivo da classe
	getline(in, eletronico.formatoArquivo);
} // Fim da Sobrecarga do operator >>
