/*

#include <iostream>
#include <vector>

class AActor {
public:
	void BeginPlay()
	{
	}

	void Tick()
	{
	}
};

class APawn : public AActor {

};
int main()
{
	std::vector<AActor*> list;
	float currentTime = 현재시간;
	while (true)
	{
		// 화면 처리
		// 마우스 오른쪽 버튼을 누르면 AActor를 생성하게되면 
		if ()
		{
			auto* newActor = new AActor();
			list.push_back(newActor);
			newActor->BeginPlay();
		}
		float deltaSecond = 현재시간 - currentTime;
		currentTime = 현재시간;

		for (auto* actor : list)
		{
			actor->Tick(deltaSecond);
		}
	}
}*/
