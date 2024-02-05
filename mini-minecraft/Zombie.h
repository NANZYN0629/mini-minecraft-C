#pragma once
#include "Creature.h"
#include "IUndead.h"
#include "IOnAttack.h"

class Zombie : public Creature, public IOnAttack, public IUndead {
public:
    Zombie(const std::string& name, float hp, float damage);

    void OnAttack(float attackPoint) override;

    void Attack(IOnAttack& other) override;
};