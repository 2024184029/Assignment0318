#pragma once
#include "Actor.h"

// AActor의 기능을 Player가 상속받음
class APlayer : public AActor
{
public:
	APlayer();
	~APlayer();

	void Move();
};

class 클래스명
{
public:
	클래스명();		// 기본 생성자
	~클래스명();		// 소멸자

	int Gold;
	void Buy();
};

void 클래스명::Buy();
// 클래스:: 하면 클래스 안에 있는 인자들 불러옴

// 클래스 여러 개 만들다보면 같은 종류의 클래스가 생김

//UE5 - UObject U, AActor A, F는 내 맘대로
//이 이름규칙 안 지키면 나중에 언리얼에서 컴파일 안 됨