#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	
	std::ifstream fin;//считывание
	std::ofstream file;
	fin.open("Doc1.txt");
	file.open("copy.txt");
	std::string data="wwq", sum;
	//std::cout << data.size()<<std::endl;
	

	if (!fin.is_open())
	{
		std::cerr << "Error";
	}
	else {
		////char sym;//считывание всего документа посимвольно
		////while (fin.get(sym)) {
		////	//std::cout << sym;
		////}
		//std::string data;
		while (!fin.eof()) {//пока файл не закончится
			data = "";
			//std::getline(fin, data);//кладет данные из fin в data построчно
			fin >> data;
			if (data.size() >= 7) {
				file << data<<std::endl;
				

			}
		
			
			
		}
		




	}
	fin.close();
	file.close();

	return 0;
}