#include "impresso.h"
Impresso::Impresso(){}
Impresso::~Impresso(){}

vector<string> Impresso::getLivrarias()
{
  return livrarias;
}
int Impresso::getColunas()
{
  return colunas;
}
void Impresso::setLivrarias(std::vector<string> m_Livrarias)
{
  livrarias = m_Livrarias;
}
void Impresso::setColunas(const int& m_colunas)
{
  colunas = m_colunas;
}
// Sobrecarga do operator cout
ostream& operator <<(ostream& out, const Impresso& impresso)
{
  out << "----------------------------------------------------------------------------" << '\n';
  out << " Livraria(s): ";
  if (impresso.livrarias.size() > 0) { // caso nao acha a livraria cadastrada
    for (string it : impresso.livrarias){
    	out << it << " " << endl;
    }
  }else
    out << "Nenhuma" << endl;
  out << " Titulo:  " << impresso.colunas << '\n';
} // Fim da Sobrecarga do operator <<
// Sobrecarga do operator cin
istream& operator >> (istream& in, Impresso& impresso)
{
  in.clear();
  in.ignore(45 , '\n');
  // Preenchendo os livrarias, caso seja mais de um
  for(int it = 0; it <= impresso.livrarias.size();  it++)
      getline(in, impresso.livrarias[it]);
  // Preenchendo o campo titulo do impresso
  in >> impresso.colunas;
} // Fim da Sobrecarga do operator >>
