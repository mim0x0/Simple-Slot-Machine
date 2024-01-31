#include <iostream>
#include <stdlib.h>
#include <ctime>

int main(){
	int const MAX = 10;
	int const MIN = 1;
	int secret, guess;
	
	srand(time(0));
	secret = rand() % MAX + MIN;
	
	std::cout << "Guess the number from 1-10 :";
	std::cin >> guess;
	
	std::cout << secret << std::endl;
	
	if (guess == secret){
		std::cout << "Congrats you won!";
	}
	else{
		std::cout << "Booooo you lose!";
	}
	
//	std::cout << rand() % MAX + MIN << std::endl;
//	std::cout << rand() % MAX + MIN << std::endl;
//	std::cout << rand() % MAX + MIN << std::endl;
	
	return 0;
}
