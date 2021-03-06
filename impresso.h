#ifndef impresso_h
#define impresso_h
#include "livro.h"
class Impresso : public Livro
{
private:
	vector<string> livrarias; // colecao
	int colunas;
public:
	Impresso ();
	virtual ~Impresso ();
	// Getters e setters da classe impresso
	vector<string> getLivrarias();
	int getColunas();
	void setLivrarias(std::vector<string>);
	void setColunas(const int&);
	// Sobrecarga dos operadores << e >>
	friend ostream& operator << (ostream&, const Impresso&);
	friend istream& operator >> (istream&, Impresso&);
};
#endif
