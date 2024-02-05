#pragma once
#include<iostream>
using namespace std;

// 武器类
class Weapon
{
protected:
    float damage;// 伤害值
public:
    Weapon(float damage);
    virtual float GetDamage() = 0;// 获取伤害值的纯虚函数
};

