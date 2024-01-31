#include <iostream>
#include <stdlib.h>
#include <ctime>

int main(){
	
	srand(time(0));
	
	int INDEX = 12;
	int secretNum[INDEX] = {23, 45, 12, 87, 43, 15, 98, 95, 34, 21, 65, 40};

	
	std::cout << "Choose 3 lucky numbers from the list below and get a chance to win a grand prize!" << std::endl;
	
	for (int i = 0; i < INDEX; i++){
		if (i%6 == 0 && i!=0){
			std::cout << std::endl;
		}
		std::cout << secretNum[i] << "  ";
	}
	
	int lucky[3], i = 0;
	do{
		std::cout << "input lucky number " << (i+1) << " :";
		std::cin >> lucky[i];
		i++;
	}while (i<3);
	
//	int secret[3][1];
//	int i = 0;
//	while(i < 3){
//		int randIndexRow = rand() % 4;
//		int randIndexCol = rand() % 3;
//		int num = secretNum[randIndexRow][randIndexCol];
//	}
	
//	std::cout << secret[0][0] << "  " << secret[1][0] << "  " << secret[2][0];
	
	return 0;
}
