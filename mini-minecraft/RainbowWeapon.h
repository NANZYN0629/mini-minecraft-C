#pragma once
#include "Weapon.h"

// 彩虹剑类，继承自武器类
class RainbowWeapon : public Weapon {
public:
    RainbowWeapon();
    float GetDamage();// 获取伤害值的成员函数实现
};