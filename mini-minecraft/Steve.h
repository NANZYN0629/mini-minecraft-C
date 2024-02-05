#pragma once
#include"Creature.h"
#include "IOnAttack.h"
#include "Weapon.h"

class Steve : public Creature, public IOnAttack 
{
private:
    Weapon* weapon;

public:
    Steve(const std::string& name, float hp, float damage);

    void OnAttack(float attackPoint) override;

    void Attack(IOnAttack& other) override;

    void SetWeapon(Weapon* weapon);

    void ResetWeapon();

    string GetWeapon();
};