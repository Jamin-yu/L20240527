#pragma once
class FPlayer
{
public: //접근 지정자
	FPlayer();
	~FPlayer();

	//Interface (GUI) - 노출된 함수
	void Move();
	void Attack();
	void Pickup(int pickedupItem); //아이템 픽업

	//private 변수에 접근하기
	//-accesser 접근자
	int GetGold();
	//-mutator 설정자
	void SetGold(int NewGold);


private: //main에서 접근 못하도록 - 플레이어 만든사람만 계산할 수 있도록
	int HP;
	int Gold; //멤버변수(property) 대부분 private

	void Die();
};
