#pragma once

#include "Weapon.h"

// �����࣬�̳���������
class IronWeapon : public Weapon 
{
public:
    IronWeapon();
    float GetDamage()override; // ��ȡ�˺�ֵ�ĳ�Ա����ʵ��
};
