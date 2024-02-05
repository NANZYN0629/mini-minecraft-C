#include <iostream>
#include "Steve.h"
#include "Zombie.h"
#include "IronWeapon.h"
#include "RainbowWeapon.h"
using namespace std;






/*
* 1. （1）实现代码的复用，子类继承父类
     （2）代表攻击的对象，直接对对象操作
  2. （1）可以
     （2）当一个类同时继承自两个或多个类，而这两个类又共同继承自一个相同的基类时，可能会引发菱形继承问题
     （3）使用虚继承可以解决菱形继承问题。在继承的基类前加上 virtual 关键字
*/




int main() 
{
    Steve steve("Steve", 100.0, 10.0);
    Zombie zombie("Zombie", 200.0, 10.0);

    IronWeapon ironweapon;
    RainbowWeapon rainbowweapon;

 A:
    cout << "选择武器：" << endl;
    cout << "[1]IronWeapon   [2]RainbowWeapon" << endl;

    char weapon;
    cin >> weapon;

    int buff;
     
    if (weapon == '1')
    {
        steve.SetWeapon(&ironweapon);
        cout <<  "Steve装备了IronWeapon" << endl;
    }
    else if (weapon == '2')
    {
        steve.SetWeapon(&rainbowweapon);
        cout <<  "Steve装备了RainbowWeapon" << endl;
    }
    else
    {
        cout << "错误" << endl;
        goto A;
    }


    cout << "[a] 攻击  [d]嘲讽  [q]一动不动" << endl;
    while (1)
    {
        if (steve.GetHp() <= 0)
        {
            cout << "Steve死亡" << endl;
            break;
        }

        if (zombie.GetHp() <= 0)
        {
            cout << "Zombie死亡" << endl;
            break;
        }

        cout << "-------------------------" << endl;
        cout << "Steve 的属性：Hp:" << steve.GetHp() << endl;
        cout << "zombie的属性：Hp:" << zombie.GetHp() << endl;

        char choice;
        cin >> choice;

        switch (choice) 
        {
        case 'a':
            steve.Attack(zombie);
            cout << "Steve发动攻击" << endl;
            break;

        case 'd':
            cout << "嘲讽" <<  endl;
            break;

        case 'q':
            cout << "一动不动" << endl;
            return 0;

        default:
            cout << "错误" << endl;
            break;
        }

 

        if (steve.GetHp() >= 0 && zombie.GetHp() >= 0)
        {
            zombie.Attack(steve);
            cout << "Zombie发动攻击" << endl;
        }


    }

   

 

    return 0;
}