#ifndef  audioBook_h
#define audioBook_h
#include "livro.h"
// Definicoes da classe audioBook
class AudioBook : public Livro {
private:
  // Atributos da classe
  float duracao;
  string formatoAudio;
public:
  // Metodos da classe
  AudioBook (const float& m_duracao = 0.0, const string& m_formatoAudio = "MP3"); // Construtor
  virtual ~AudioBook (); // Destrutor
  // Getters e setters da classe AudioBook
  float getDuracao();
  string getFormatoAudio();
  void setDuracao(const float&);
  void setFormatoArquivo(const string&);
  // Sobrecarga dos operadores << e >>
  friend ostream& operator << (ostream&, const AudioBook&);
  friend istream& operator >> (istream&, AudioBook&);
};
#endif
