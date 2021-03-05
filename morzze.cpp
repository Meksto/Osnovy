#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <Windows.h>

using namespace std;

string translate(string line)
{
	string res;
	string c;
	int cnt = 0;
	if (line[0] == '-' || line[0] == '.')
	{
		for (int i = 0; i < line.length(); i++)
		{
			while (line[i] != ' ')
			{
				c += line[i];
				i++;
				if (line[i] == '\0' || line[i] == '\n')
					break;
			}

			if (c == ".-")
			{
				res += 'а';
				c.clear();
			}
			else if (c == "-...")
			{
				res += 'б';
				c.clear();
			}
			else if (c == ".--")
			{
				res += 'в';
				c.clear();
			}
			else if (c == "--.")
			{
				res += 'г';
				c.clear();
			}
			else if (c == "-..")
			{
				res += 'д';
				c.clear();
			}
			else  if (c == ".")
			{
				res += 'е';
				c.clear();
			}
			else if (c == "...-")
			{
				res += 'ж';
				c.clear();
			}
			else if (c == "--..")
			{
				res += 'з';
				c.clear();
			}
			else  if (c == "..")
			{
				res += 'и';
				c.clear();
			}
			else  if (c == ".---")
			{
				res += 'й';
				c.clear();
			}
			else  if (c == "-.-")
			{
				res += 'к';
				c.clear();
			}
			else  if (c == ".-..")
			{
				res += 'л';
				c.clear();
			}
			else  if (c == "--")
			{
				res += 'м';
				c.clear();
			}
			else if (c == "-.")
			{
				res += 'н';
				c.clear();
			}
			else  if (c == "---")
			{
				res += 'о';
				c.clear();
			}
			else  if (c == ".--.")
			{
				res += 'п';
				c.clear();
			}
			else  if (c == ".-.")
			{
				res += 'р';
				c.clear();
			}
			else  if (c == "...")
			{
				res += 'с';
				c.clear();
			}
			else  if (c == "-")
			{
				res += 'т';
				c.clear();
			}
			else  if (c == "..-")
			{
				res += 'у';
				c.clear();
			}
			else  if (c == "..-.")
			{
				res += 'ф';
				c.clear();
			}
			else  if (c == "....")
			{
				res += 'х';
				c.clear();
			}
			else  if (c == "-.-.")
			{
				res += 'ц';
				c.clear();
			}
			else  if (c == "---.")
			{
				res += 'ч';
				c.clear();
			}
			else  if (c == "----")
			{
				res += 'ш';
				c.clear();
			}
			else  if (c == "--.-")
			{
				res += 'щ';
				c.clear();
			}
			else  if (c == ".--.-.")
			{
				res += 'ъ';
				c.clear();
			}
			else  if (c == "-.--")
			{
				res += 'ы';
				c.clear();
			}
			else  if (c == "-..-")
			{
				res += 'ь';
				c.clear();
			}
			else  if (c == "..-..")
			{
				res += 'э';
				c.clear();
			}
			else  if (c == "..--")
			{
				res += 'ю';
				c.clear();
			}
			else  if (c == ".-.-")
			{
				res += 'я';
				c.clear();
			}
			else if (c == "......")
			{
				res += ".";
				c.clear();
			}
			else if (c == ".-.-.-")
			{
				res += ",";
				c.clear();
			}
			else if (c == "--..--")
			{
				res += "!";
				c.clear();
			}
			else if (c == "..--..")
			{
				res += "?";
				c.clear();
			}
			else if (c == "-.-.-.")
			{
				res += ";";
				c.clear();
			}
			else if (c == "-....-")
			{
				res += "-";
				c.clear();
			}
			else if (c == "...---")
			{
				res += ":";
				c.clear();
			}
			else if (c == "-----")
			{
				res += '0';
				c.clear();
			}
			else if (c == ".----")
			{
				res += "1";
				c.clear();
			}
			else if (c == "..---")
			{
				res += "2";
				c.clear();
			}
			else if (c == "...--")
			{
				res += "3";
				c.clear();
			}
			else if (c == "....-")
			{
				res += "4";
				c.clear();
			}
			else if (c == ".....")
			{
				res += "5";
				c.clear();
			}
			else if (c == "-....")
			{
				res += "6";
				c.clear();
			}
			else if (c == "--...")
			{
				res += "7";
				c.clear();
			}
			else if (c == "---..")
			{
				res += "8";
				c.clear();
			}
			else if (c == "----.")
			{
				res += "9";
				c.clear();
			}
			else if (line[i] == ' ' && line[i + 1] == ' ' && line[i + 2] == ' ')
			{
				res += ' ';
			}

		}
	}

	else {
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == 'а' || line[i] == 'А')
				res += ".-";
			if (line[i] == 'б' || line[i] == 'Б')
				res += "-...";
			if (line[i] == 'в' || line[i] == 'В')
				res += ".--";
			if (line[i] == 'г' || line[i] == 'Г')
				res += "--.";
			if (line[i] == 'д' || line[i] == 'Д')
				res += "-..";
			if (line[i] == 'е' || line[i] == 'Е')
				res += ".";
			if (line[i] == 'ё' || line[i] == 'Ё')
				res += ".";
			if (line[i] == 'ж' || line[i] == 'Ж')
				res += "...-";
			if (line[i] == 'з' || line[i] == 'З')
				res += "--..";
			if (line[i] == 'и' || line[i] == 'И')
				res += "..";
			if (line[i] == 'й' || line[i] == 'Й')
				res += ".---";
			if (line[i] == 'к' || line[i] == 'К')
				res += "-.-";
			if (line[i] == 'л' || line[i] == 'Л')
				res += ".-..";
			if (line[i] == 'м' || line[i] == 'М')
				res += "--";
			if (line[i] == 'н' || line[i] == 'Н')
				res += "-.";
			if (line[i] == 'о' || line[i] == 'О')
				res += "---";
			if (line[i] == 'п' || line[i] == 'П')
				res += ".--.";
			if (line[i] == 'р' || line[i] == 'Р')
				res += ".-.";
			if (line[i] == 'с' || line[i] == 'С')
				res += "...";
			if (line[i] == 'т' || line[i] == 'Т')
				res += "-";
			if (line[i] == 'у' || line[i] == 'У')
				res += "..-";
			if (line[i] == 'ф' || line[i] == 'Ф')
				res += "..-.";
			if (line[i] == 'х' || line[i] == 'Х')
				res += "....";
			if (line[i] == 'ц' || line[i] == 'Ц')
				res += "-.-.";
			if (line[i] == 'ч' || line[i] == 'Ч')
				res += "---.";
			if (line[i] == 'ш' || line[i] == 'Ш')
				res += "----";
			if (line[i] == 'щ' || line[i] == 'Щ')
				res += "--.-";
			if (line[i] == 'ь' || line[i] == 'Ь')
				res += "-..-";
			if (line[i] == 'ы' || line[i] == 'Ы')
				res += "-.--";
			if (line[i] == 'ъ' || line[i] == 'Ъ')
				res += ".--.-.";
			if (line[i] == 'э' || line[i] == 'Э')
				res += "..-..";
			if (line[i] == 'ю' || line[i] == 'Ю')
				res += "..--";
			if (line[i] == 'я' || line[i] == 'Я')
				res += ".-.-";


			if (line[i] == '.')
				res += "......";
			if (line[i] == ',')
				res += ".-.-.-";
			if (line[i] == '!')
				res += "--..--";
			if (line[i] == '?')
				res += "..--..";
			if (line[i] == ';')
				res += "-.-.-.";
			if (line[i] == '-')
				res += "-....-";
			if (line[i] == ':')
				res += "...---";

			if (line[i] == '0')
				res += "-----";
			if (line[i] == '1')
				res += ".----";
			if (line[i] == '2')
				res += "..---";
			if (line[i] == '3')
				res += "...--";
			if (line[i] == '4')
				res += "....-";
			if (line[i] == '5')
				res += ".....";
			if (line[i] == '6')
				res += "-....";
			if (line[i] == '7')
				res += "--...";
			if (line[i] == '8')
				res += "---..";
			if (line[i] == '9')
				res += "----.";

			if (line[i] == ' ')
				res += "  ";

			res += " ";
		}
	}
	return res;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	string tekst;
	char filename[100] = { 0 };
	ifstream in;
	ofstream out("res.txt");

	do
	{
		cout << "\nВведите адрес исходного файла файла: ";
		cin.get();
		gets_s(filename);
		in.open("text.txt");

		if (!in)
		{
			cout << "Error file.\n";
		}
	} while (!in);
	{
		getline(in, tekst);
		out << translate(tekst) << endl;
	}
}

