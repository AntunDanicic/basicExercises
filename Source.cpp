# include <iostream>
# include <vector>
# include <string>

class Vector3
{
public:
	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	
	Vector3(int xPos, int yPos, int zPos)
	{
		x = xPos;
		y = yPos;
		z = zPos;
		floatingMember = 33.33f;
	}

	~Vector3()
	{
		std::cout << "Unistio sam se! " << std::endl;
	}
	
	Vector3 operator+(Vector3 second)
	{
		Vector3 result = Vector3(0,0,0);
		result.x = x + second.x;
		result.y = y + second.y;
		result.z = z + second.z;
		return result;
	}
	Vector3 operator- (Vector3 minus)
	{
		Vector3 result = Vector3(0, 0, 0);
		result.x = x - minus.x;
		result.y = y - minus.y;
		result.z = z - minus.z;
		return result;
	}
	Vector3 operator/ (Vector3 divide)
	{
		Vector3 result = Vector3(0, 0, 0);
		result.x = x / divide.x;
		result.y = y / divide.y;
		result.z = z / divide.z;
		return result;
	}
	Vector3 operator* (Vector3 multiply)
	{
		Vector3 result = Vector3(0, 0, 0);
		result.x = x * multiply.x;
		result.y = y * multiply.y;
		result.z = z * multiply.z;
		return result;
	}

	int x, y, z;

		int SumOfCoordinates()
		{
			return  x  +  y  +  z;
		}

		void Print()
		{
			std::cout << "[" << x << ", " << y << ", " << z << "]";
		}

		float GetFloatingMember()
		{
			return floatingMember;
		}

private:
			float floatingMember;
};

void iterate(int *arr)
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << *arr << std::endl;
		arr++;
	}
	//std::cout << i << std:.endl;     i is out of scope and no longer exists!

}


int main()
{
	int number = 10;
	int number2 = 3;
	int*ref = &number;
	int** doubleRef = &ref;

	float fNumber = 10.5f;
	float* fRef = &fNumber;
	*ref = 30;
	int& refference = number;
	refference = number2;


	int* ptr = &number;
	std::cout << *ptr << std::endl;

	ptr = &number2;
	std::cout << *ptr << std::endl;
	Vector3 person = Vector3(10, 20, 30);


	std::cout << "Sum of person coordinates; " << person.SumOfCoordinates() << std::endl;
	std::cout << "Sum of persos coordinate x; " << person.x << std::endl;
	std::cout << "Sum of person coordinate y; " << person.y << std::endl;
	std::cout << "Sum of person coordinate z; " << person.z << std::endl;

	std::cout << "Persons floatingNumber value is: " << person.GetFloatingMember() << std::endl;

	void* personPtr = &person;
	std::cout << ref << std::endl;
	std::cout << ptr << std::endl;
	std::cout << *ref << std::endl;
	

	int arr[] = { 1, 7, 3 };

	iterate(arr);

	std::cout << "Double reffrence: " << std::endl;
	std::cout << "Double reffrence address: " << doubleRef << std::endl;
	std::cout << "Double reffrence value" << *doubleRef << std::endl;
    std::cout << "Reffrence address: " << ref << std::endl;
	std::cout << "Reffrence value: " << *ref << std::endl;
	std::cout << "Double reffrence reffrence value: " << **doubleRef << std::endl;
	

	{
		Vector3 position = Vector3(1, 2, 3);

	}

	Vector3 playerPosition = Vector3(35, 28, 13);
	Vector3 playerTwoPosition = Vector3(100, 100, 100);

	Vector3 sum = playerPosition * playerTwoPosition;
	std::cout << "" << std::endl;
	std::cout << "Vrjednost multiply vectora je: ";
	sum.Print();
	std::cout << std::endl;
	
	
	system("pause");
}
	
	
	/*
	int threeDimensionalArray[3][3][3] =
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


	std::cin.get();
}
*/