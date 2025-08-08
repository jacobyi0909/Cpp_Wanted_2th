#include <iostream>

class Unit {
public:
	virtual void Test1() {};
};

class Knight : public Unit
{
public:
	virtual void Test1() override {};
};



// 캐스팅 연산자.
// 
// 연산자 오버로딩

class Character
{
private:
	int age = 10;
public:
	int gold;

	inline Character operator=(int _gold)
	{
		this->gold = _gold;
		return *this;
	}
	friend void PrintAge(const Character& c);
	friend class Friend;
};

class Friend {
public:
	void Print(const Character& c) {
		std::cout << c.age << std::endl;
	}
};

void PrintAge(const Character& c)
{
	std::cout << c.age << std::endl;
}

// 열거형 -> scoped enum
//namespace Player
//{
//	enum PlayerState
//	{
//		Idle = 0,
//		B,
//		C
//	};
//}
//namespace Enemy
//{
//	enum EnemyState
//	{
//		B,
//		C,
//		Idle = 2,
//	};
//}

typedef unsigned char uint8;

enum class PlayerState : uint8
{
	Idle = 0,
	B,
	C
};

enum class EnemyState
{
	B,
	Idle = 0,
	C,
};


// 템플릿(Template)

// 함수 템플릿
template<typename T>
T Add(T a, T b)
{
	return a + b;
}

// 함수 템플릿 특수화
template<>
char* Add(char* s1, char* s2) {
	int len = strlen(s1) + strlen(s2) + 1;
	char* str = new char[len];
	strcpy_s(str, len, s1);
	strcat_s(str, len, s2);
	return str;
}

// 클래스 템플릿
template<class T>
class Calc {
public:
	T Add(T a, T b) {
		return a + b;
	}
};

template<>
class Calc<int> {
public:
	int Add(int a, int b) {
		return a + b;
	}
};

//#pragma region MyMacro
// 매크로 -> 치환
#define MAX 100
// 매크로 함수
#define ADD(a,b) a + b

#define STRING(str) #str

#define STRING2(str1, str2) #str1 ## #str2

//#pragma endregion

#define CHEAT 1
#define DEV 1
int gold;

int main()
{
#ifdef CHEAT
	gold = 100000000;
#elif DEV
	gold = 10;
#endif // DEBUG

#if CHEAT == 1
	gold = 100000000;
#else
	gold = 10;
#endif 

	int a = 10;

	const char* strrrr = "abcd"; // literal

	const char* str1 = STRING(가나다라);
	const char* str = STRING2(가나, 다라);
	std::cout << str << std::endl;

	//int a = ADD(1, 2);

	//std::cout << __FUNCTION__ << std::endl;






	// 스마트 포인터
	//std::shared_ptr<Unit> pUnit(new Unit());
	//std::shared_ptr<Unit> pUnit = std::make_shared<Unit>();


	//std::shared_ptr<Unit> pUnit2(pUnit);
	//if (pUnit.unique())
	//{
	//	// pUnit이 유니크 하다면 어쩌고 저쩌고
	//}

	//pUnit2.reset();
	//pUnit.reset();

	//std::cout << pUnit.use_count() << std::endl;



	//std::unique_ptr<Unit> pu = std::make_unique<Unit>();
	
	
	/*std::shared_ptr<Unit> ps = std::make_shared<Unit>();
	std::cout << ps.use_count() << std::endl;

	std::weak_ptr<Unit> pw(ps);
	std::cout << ps.use_count() << std::endl;
	
	pw.lock();

	std::cout << ps.use_count() << std::endl;*/




	/*Calc<float> calc;
	float rettt = calc.Add(10.f, 20.f);

	int ret = Add<int>(10, 20);*/


	
	/*PlayerState number = PlayerState::Idle;
	switch (number)
	{
	case PlayerState::Idle:
		break;
	case PlayerState::B:
		break;
	case PlayerState::C:
		break;
	}*/


	//Character c;
	//PrintAge(c);

	//Friend f;
	//f.Print(c);


//	Unit unit;
//
//	Unit* pUnit = &unit;
//	Knight* pKnight = dynamic_cast<Knight*>(pUnit);
//	//Knight* pKnight = (Knight*)pUnit;
//	if (pKnight) {
//		int a = 0;
//		pKnight->Test1();
//	}


	/*Character ccc;
	ccc = 10;

	std::cout << ccc.gold << std::endl;


	Character ccc2 = ccc;*/






	//int number = 10;
	//float fnumber = 30.5f;

	//int value = static_cast<int>(fnumber);

	//Knight knight;
	//Unit* pUnit = dynamic_cast<Unit*>(&knight);
	//if (nullptr != pUnit)
	//{

	//}

	////reinterpret_cast
	//int a = 0x01020304;
	//char* ptr1 = reinterpret_cast<char*>(&a);
	//
	//for (int i = 0; i < 4; i++)
	//{
	//	std::cout << static_cast<int>(ptr1[i]) << std::endl;
	//}
	//
	////const_cast

	//int cc = 10;
	//const int* const pCC = &cc;
	//int* pCC2 = const_cast<int*>(pCC);
	//*pCC2 = 100;
}
