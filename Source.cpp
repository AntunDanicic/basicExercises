# include <iostream>
int main()
{
	/*int threeDimensionalArray[3][3][3] =
	{   
		{
		{1, 5, 7},  
		{8, 3, 9},
		{2, 4, 6}
		},
		{
		{10, 50, 70},  
		{80, 30, 90},    // x je blok, y je red, z je stupac
		{20, 40, 60}
		},
		{
		{100, 500, 700},  
		{800, 300, 900},
		{200, 400, 600}
		},
	};
	std::cout << threeDimensionalArray[1][2][0] << std::endl; 
	*/
	std::cout << "" << std::endl;
	
	int twoDimensionalArray [4][4] =
	{
		{9,  -2,  8,  2},
	    {-6, -2, 10, -9},
	    {4,   5,  6,  1},
	    {5,   3,  4,  9}
	};
	int size = 4;
	int prvaDiagonala = 0;
	int drugaDiagonala = 0;
	for (int i = 0; i < 4; i++)
	{
		prvaDiagonala += twoDimensionalArray[i][i];
		drugaDiagonala += twoDimensionalArray[--size][i];
	}
	/*for (int i = 3; i >= 0; i--)
	{
		drugaDiagonala += twoDimensionalArray[i][i];
	}
	*/
	std::cout << prvaDiagonala - drugaDiagonala << std::endl;
	
	std::cout << "" << std::endl;

	if (prvaDiagonala - drugaDiagonala == 0)
	{
		std::cout << "Matrica je najljepsa " << std::endl;
	}
	else
	{
		std::cout << "Matrica je losa " << std::endl;
	}
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "[" << threeDimensionalArray[i][j] << "]";
		}
				std::cout << std::endl;
	}*/

	std::cin.get();
}