#include "RainbowWeapon.h"
#include <cstdlib>
#include <ctime>

RainbowWeapon::RainbowWeapon() : Weapon(30.0f) {}

float RainbowWeapon::GetDamage() 
{
    float random = static_cast<float>(rand()) / RAND_MAX;// ����һ�������
    return damage + (random - 0.5f);// �����˺�ֵ���������
}