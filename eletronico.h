#ifndef  eletronico_h
#define  eletronico_h
#include <iostream>
#include <string>
#include "livro.h"
using namespace std;
class Eletronico
{
private:
	string url;
	string formatoArquivo;
public:
	Eletronico();
	virtual ~Eletronic();
	// Getters e setters da classe eletronico
	string getUrl();
	string getFormatoArquivo();
	void setUrl(const string&);
	void setFormatoArquivo(const string&);
	// Sobrecarga dos operadores << e >> 
    friend ostream& operator << (ostream&, const Eletronico&);
    friend istream& operator >>(istream&, Eletronico&);
};
#endif
