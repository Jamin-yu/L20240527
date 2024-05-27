#pragma once
class FPlayer
{
public: //���� ������
	FPlayer();
	~FPlayer();

	//Interface (GUI) - ����� �Լ�
	void Move();
	void Attack();
	void Pickup(int pickedupItem); //������ �Ⱦ�

	//private ������ �����ϱ�
	//-accesser ������
	int GetGold();
	//-mutator ������
	void SetGold(int NewGold);


private: //main���� ���� ���ϵ��� - �÷��̾� �������� ����� �� �ֵ���
	int HP;
	int Gold; //�������(property) ��κ� private

	void Die();
};
