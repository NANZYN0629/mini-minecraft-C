#pragma once

#include "Weapon.h"

// 铁剑类，继承自武器类
class IronWeapon : public Weapon 
{
public:
    IronWeapon();
    float GetDamage()override; // 获取伤害值的成员函数实现
};
