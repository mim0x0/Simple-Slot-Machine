#include <iostream>
#include <stdlib.h>
#include <ctime>

int main(){
	int s1, s2, s3;
	int const MAX = 10;
	int const MIN = 1;
	
	srand(time(0));
	
	int i = 0;
	char option;
	do{
		std::cout << "Get 3 same numbers for the grand prize!" << std::endl << std::endl;
		s1 = rand() % MAX + MIN;
		s2 = rand() % MAX + MIN;
		s3 = rand() % MAX + MIN;
	
		std::cout << ">>>>>>  " << s1 << " | " << s2 << " | " << s3 << "  <<<<<<<" << std::endl << std::endl;
		
		std::cout << "Do you want to reroll?" << std::endl;
		std::cout << "(Press y to reroll or n to not reroll)" << std::endl;
		std::cout << (2-i) << " chances remaining." << std::endl;
		std::cin >> option;
		
		i++;
		system("cls");
	}while(i < 3 && option == 'y');
	
	std::cout << "------------------------" << std::endl << std::endl;
	if(s1 == s2 && s1 == s3 && s2 == s3){
		std::cout << "Congrats you win grand prize!";
	}
	else if(s1 == s2 || s1 == s3 || s2 == s3){
		std::cout << "Ok you deserve some prize.";
	}
	else{
		std::cout << "Yuck your luck succs ass";
	}
	
	return 0;
}
