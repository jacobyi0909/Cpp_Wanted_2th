

#include <iostream>
// class 사용자 정의 자료형
class Animal
{
public:
	int age;

	void Print()
	{
		std::cout << age << std::endl;
	}

};



int main()
{
	Animal cat;

	cat.age = 10;

	//Animal* dog = new Animal;

	//dog->age = 10;

	//if (dog)
	//{
	//	delete dog;
	//}
}
