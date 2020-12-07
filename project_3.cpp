
#include <iostream>
#include<string>

int main()
{
	setlocale(LC_ALL, "ru");
	int charge;
 charge = 50 ;
	if (charge > 90) std::cout << "полон энергии" << std::endl;
	else if (20 < charge < 90) std::cout << "сообщить уровень заряда" << std::endl;
	else std::cout << "запрос о подзарядке" << std::endl;
	return 0;


}
