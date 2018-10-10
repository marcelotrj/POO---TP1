#include "audioBook.h"
AudioBook::AudioBook(){}
AudioBook::~AudioBook(){}
float AudioBook::getDuracao()
{
	return duracao;
}
string AudioBook::getFormatoAudio()
{
	return formatoAudio;
}
void AudioBook::setDuracao(const float& duracao)
{
	this->duracao = duracao;
}
void AudioBook::setFormatoAudio(const string& formatoAudio)
{
	this->formatoAudio = formatoAudio;
}

// Sobrecarga do operator cout
ostream& operator <<(ostream& out, const AudioBook& audioBook)
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
