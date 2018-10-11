#include "audioBook.h"
// Implementacao dos metodos da classe audioBook
AudioBook::AudioBook(const float& m_duracao, const string& m_formatoAudio) : duracao(m_duracao) , formatoAudio(m_formatoAudio) {}

AudioBook::~AudioBook() {}

float AudioBook::getDuracao()
{
  return duracao;
}
string AudioBook::getFormatoAudio()
{
	return formatoAudio;
}
void AudioBook::setDuracao(const float& m_duracao)
{
	duracao = m_duracao;
}
void AudioBook::setFormatoArquivo(const string& m_formatoAudio)
{
	formatoAudio = m_formatoAudio;
}
// Sobrecarga do operator cout
ostream& operator << (ostream& out, const AudioBook& audioBook)
{
	out << "----------------------------------------------------------------------------" << '\n';
	out << "Formato do arquivo: " << audioBook.formatoAudio << '\n';
	out << " Duracao:  " << audioBook.duracao << '\n';
} // Fim da Sobrecarga do operator <<

// Sobrecarga do operator cin
istream& operator >> (istream& in, AudioBook& audioBook)
{
	in.clear();
	in.ignore(45 , '\n');
	in >> audioBook.duracao;
	getline(in, audioBook.formatoAudio);
} // Fim da Sobrecarga do operator >>
