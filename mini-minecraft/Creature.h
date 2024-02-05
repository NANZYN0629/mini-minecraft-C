#pragma once
#include<iostream>
#include"IOnAttack.h"
using namespace std;


#include <string>
#pragma once
#include <iostream>
#include "IOnAttack.h"

class Creature 
{
private:
    std::string name;
    float hp;
    float damage;

public:
    Creature(const std::string& name, float hp, float damage);

    std::string GetName();
    float GetHp();
    void GetDamage(float num);

    virtual void Attack(IOnAttack& other) = 0;
};