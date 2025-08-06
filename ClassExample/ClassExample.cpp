

#include <iostream>

// class 사용자 정의 자료형
class Animal
{
public:

	Animal() {

	}

	Animal(int newAge, int newGold) : age(newAge), gold(newGold)
	{
	}
	int gold;

	// 순수 가상함수
	virtual void Walk() = 0;

	int age;

	virtual void Print()
	{
		std::cout << age << std::endl;
	}

	// 가상함수
	virtual void Attack()
	{
		std::cout << "Animal Attack" << std::endl;
	}
};

// 상속
class Cat /*final*/ : public Animal {

public:

	//void Print() final
	//{
	//}
	Cat()
	{
		std::cout << "Cat 생성자" << std::endl;
	}

	Cat(int newAge, int newGold) : Animal(newAge, newGold)
	{
	}
	// 복사 생성자
	Cat(const Cat& other)
	{
		std::cout << "Cat 복사 생성자" << std::endl;
		age = other.age;
	}

	virtual void Attack() override
	{
		std::cout << "냥냥펀치" << std::endl;
	}
	virtual void Walk() override
	{

	}

};

class Tiger : public Cat
{
public:
	virtual void Print() override
	{

	}
};


void main()
{
	Cat cat;
	cat.age = 1;

	Cat cat2(cat);
	//Cat cat2 = cat;
	cat2.age = cat.age;



	

	//cat.Attack();

	// 업 캐스팅은 된다.
	Animal* pAni = &cat;
	pAni->Attack();

	// 다운캐스팅은 안됨.
	//Animal ani;
	//Cat* pCat2 = &ani;

}











// 공용체
union aaa {
	int a;
	char b[4];
};

// 구조체 struct
struct MyStruct {
public:
private:
};


// Call by pointer
int Add(int* a, int* b)
{
	*a = 300;
	return *a + *b;
}
// Call by value
int Add(int a, int b)
{
	a = 300;
	return a + b;
}
// Call by reference
int AddRef(int& a, int& b)
{
	a = 300;
	return a + b;
}
struct HitResult {
	int name;
};


void main2()
{
	int i = 10;
	int j = 230;
	int ret = AddRef(i, j);


	// 참조 Reference

	/*int KK = 0;
	int& RR = KK;

	std::cout << &KK << std::endl;
	std::cout << &RR << std::endl;*/
	//int k;	// 변수 선언
	//k = 10;	// 변수에 값을 대입
	//int r = 10;// 변수r을 10으로 초기화






	//int a(10);

	//Animal cat(10);
	//Animal* pCat = &cat;

	//std::cout << cat.age << std::endl;

	//Animal* dog = new Animal;

	//dog->age = 10;

	//if (dog)
	//{
	//	delete dog;
	//}



	//Test();

	//aaa aa;
	//aa.a  = 1;
	//for (int i=0 ; i<4 ; i++)
	//{
	//	std::cout << (int)aa.b[i] << ' ';
	//}
}

void Test()
{
	int* a = new int();
	int* b = a;

	delete a;
	// b는 댕글링 포인터
}