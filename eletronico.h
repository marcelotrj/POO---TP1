#ifndef  eletronico_h
#define  eletronico_h
#include "livro.h"
using namespace std;
class Eletronico : public Livro{
private:
  string url;
  string formatoArquivo;
public:
  Eletronico (const string& m_url = "https://viva.la.vida.locamente.torrent.com", const string& m_formatoArquivo = "pdf"); // Construtor
  virtual ~Eletronico (); // Destrutor
  // Getters e setters da classe eletronico
  string getUrl();
  string getFormatoArquivo();
  void setUrl(const string&);
  void setFormatoArquivo(const string&);
  // Sobrecarga dos operadores << e >>
  friend ostream& operator << (ostream&, const Eletronico&);
  friend istream& operator >> (istream&, Eletronico&);
};
#endif
