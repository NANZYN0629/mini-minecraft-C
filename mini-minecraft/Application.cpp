#include <iostream>
#include "Steve.h"
#include "Zombie.h"
#include "IronWeapon.h"
#include "RainbowWeapon.h"
using namespace std;






/*
* 1. ��1��ʵ�ִ���ĸ��ã�����̳и���
     ��2���������Ķ���ֱ�ӶԶ������
  2. ��1������
     ��2����һ����ͬʱ�̳������������࣬�����������ֹ�ͬ�̳���һ����ͬ�Ļ���ʱ�����ܻ��������μ̳�����
     ��3��ʹ����̳п��Խ�����μ̳����⡣�ڼ̳еĻ���ǰ���� virtual �ؼ���
*/




int main() 
{
    Steve steve("Steve", 100.0, 10.0);
    Zombie zombie("Zombie", 200.0, 10.0);

    IronWeapon ironweapon;
    RainbowWeapon rainbowweapon;

 A:
    cout << "ѡ��������" << endl;
    cout << "[1]IronWeapon   [2]RainbowWeapon" << endl;

    char weapon;
    cin >> weapon;

    int buff;
     
    if (weapon == '1')
    {
        steve.SetWeapon(&ironweapon);
        cout <<  "Steveװ����IronWeapon" << endl;
    }
    else if (weapon == '2')
    {
        steve.SetWeapon(&rainbowweapon);
        cout <<  "Steveװ����RainbowWeapon" << endl;
    }
    else
    {
        cout << "����" << endl;
        goto A;
    }


    cout << "[a] ����  [d]����  [q]һ������" << endl;
    while (1)
    {
        if (steve.GetHp() <= 0)
        {
            cout << "Steve����" << endl;
            break;
        }

        if (zombie.GetHp() <= 0)
        {
            cout << "Zombie����" << endl;
            break;
        }

        cout << "-------------------------" << endl;
        cout << "Steve �����ԣ�Hp:" << steve.GetHp() << endl;
        cout << "zombie�����ԣ�Hp:" << zombie.GetHp() << endl;

        char choice;
        cin >> choice;

        switch (choice) 
        {
        case 'a':
            steve.Attack(zombie);
            cout << "Steve��������" << endl;
            break;

        case 'd':
            cout << "����" <<  endl;
            break;

        case 'q':
            cout << "һ������" << endl;
            return 0;

        default:
            cout << "����" << endl;
            break;
        }

 

        if (steve.GetHp() >= 0 && zombie.GetHp() >= 0)
        {
            zombie.Attack(steve);
            cout << "Zombie��������" << endl;
        }


    }

   

 

    return 0;
}