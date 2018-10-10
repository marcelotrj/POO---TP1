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
  vector <string> escritores; // colecao
  string titulo;
  vector <string> capitulos; // colecao
  int anoPublicaao;
  string idiomaOriginal;
  vector <string> keywords; // colecao
public:
  Livro (); //construtor
  virtual ~Livro (); // destrutor
  // Getters e setters da classe Livro
  virtual vector<string> getEscritores();
  virtual string getTitulo();
  virtual vector<string> getCapitulos();
  virtual int getAnoPublicacao();
  virtual string getIdiomaOriginal();
  virtual vector <string> getKeywords();
  virtual void setEscritores(vector<string>);
  virtual void setTitulo(const string&);
  virtual void setCapitulos(std::vector<string>);
  virtual void setAnoPublicacao(const int&);
  virtual void setIdiomaOriginal(const string&);
  virtual void setKeywords(std::vector<string>);
  // Sobrecarga dos operaradores << e >>
  friend ostream& operator << (ostream&, const Livro&);
  friend istream& operator >>(istream&, Livro&);
};

#endif
