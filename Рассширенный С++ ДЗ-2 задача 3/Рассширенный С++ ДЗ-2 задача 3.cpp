
#include <iostream>
#include <windows.h>
#include <string>


struct adress_book
{
	std::string town;
	std::string street;
	int num_house;
	int num_flat;
	int num_index;

};


void print_book(adress_book adres1)
{
	std::cout << std::endl;
	std::cout << "Город: " << adres1.town << std::endl;
	std::cout << "Улица: " << adres1.street << std::endl;
	std::cout << "Номер дома: " << adres1.num_house << std::endl;
	std::cout << "Номер квартиры: " << adres1.num_flat << std::endl;
	std::cout << "Почтовый индекс: " << adres1.num_index << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	adress_book adress1 = { "Волгоград", "Набережная", 8, 64, 400005 }, adress2 = {"Кировск","Советская", 32, 29, 187341};
	print_book(adress1);
	print_book(adress2);


	return 0;
}




