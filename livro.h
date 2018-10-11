#ifndef  livro_h
#define  livro_h
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
// classe base -- LIVRO
class Livro
{
protected:
	// Atributos da classe
	vector <string> escritores; // colecao
	string titulo;
	vector <string> capitulos; // colecao
	int anoPublicaao;
	string idiomaOriginal;
	vector <string> keywords; // colecao
public:
	// metodos da classe
	Livro (); //construtor
	virtual ~Livro (); // destrutor
	// Getters e setters da classe Livro
	vector<string> getEscritores();
	string getTitulo();
	vector<string> getCapitulos();
	int getAnoPublicacao();
	string getIdiomaOriginal();
	vector <string> getKeywords();
	void setEscritores(vector<string>);
	void setTitulo(const string&);
	void setCapitulos(vector<string>);
	void setAnoPublicacao(const int&);
	void setIdiomaOriginal(const string&);
	void setKeyswords(vector<string>);
	// Sobrecarga dos operaradores << e >>
	friend ostream& operator << (ostream&, const Livro&);
	friend istream& operator >> (istream&, Livro&);
};
#endif
