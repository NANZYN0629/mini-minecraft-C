#pragma once
#include<iostream>
using namespace std;

// ������
class Weapon
{
protected:
    float damage;// �˺�ֵ
public:
    Weapon(float damage);
    virtual float GetDamage() = 0;// ��ȡ�˺�ֵ�Ĵ��麯��
};

