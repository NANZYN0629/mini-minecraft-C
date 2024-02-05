#include "RainbowWeapon.h"
#include <cstdlib>
#include <ctime>

RainbowWeapon::RainbowWeapon() : Weapon(30.0f) {}

float RainbowWeapon::GetDamage() 
{
    float random = static_cast<float>(rand()) / RAND_MAX;// 生成一个随机数
    return damage + (random - 0.5f);// 返回伤害值加上随机数
}