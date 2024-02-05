1. 来世还做方块人！
Minecraft（我的世界）是一个使用java语言制作的，广受好评的3d开放世界冒险游戏，你可以在游戏中自由地探索世界、采集资源、合成物品及生存冒险等。该游戏充分体现了面向对象的思想，每一个生物，每一个方块，每一个效果，都是一个个“对象”与主人公Steve（史蒂夫）交互着，现在，让我们用c++来实现一个mini-minecraft，成为自由的创世神吧！
生物：
1. 新建一个抽象类Creature
  1. 它有私有属性：std::string name（名称）, float hp（血量），float damage（攻击力），并在构造函数中进行初始化
  2. 创建一些get方法来暴露接口给外界访问，例如GetHp(), GetDamage()
  3. 继承抽象类（接口）IOnAttack （见下文）
  4. 有纯虚方法：攻击Attack(IOnAttack& other)
    1. 调用other的OnAttack()
2. 新建一个抽象类（接口）IOnAttack：
  1. 包含一个纯虚方法OnAttack(float attackPoint)
3. 新建一个类Steve 继承自Human
  1. 调用父类构造函数进行初始化
  2. 实现接口IOnAttack
  3. 实现纯虚方法Attack()，other.OnAttack()中传入当前对象的伤害值
4. 新建一个抽象类IUndead，内容为空
5. 类Zombie 继承自Creature类
  1. 构造函数只有std::string name作为参数，其他属性为固定值
  2. 实现接口IOnAttack
  3. 实现纯虚方法Attack()
  4. 实现接口IUndead
武器
6. 新建一个抽象类Weapon
  1. 包含一个被保护(protected)属性float damage，并在构造函数中初始化
  2. 有纯虚函数GetDamage()
7. 新建一个类IronWeapon 继承自Weapon
  1. 调用父类构造函数进行初始化
  2. 实现GetDamage()，返回damage
8. 新建一个类RainbowWeapon 继承自Weapon
  1. 调用父类构造函数进行初始化
  2. 实现GetDamage()，返回值为damage加上一个自定义的随机数（例如-1到1），并且保证最终返回damage>=0
9. 对Steve类进行一些修改
  1. 增加私有属性：Weapon*，指向携带的武器
  2. 增加公开方法SetWeapon()设置武器
  3. 增加公开方法ResetWeapon()设置武器指针为nullptr
  4. Attack方法的实现：如果Steve装备了Weapon，那么other.OnAttack()传入的伤害值变为weapon返回的伤害值
对战
新建Application.cpp
编写main()函数
1. 实例化Steve对象和Zombie对象，并在开场时进行一些设置，例如装备什么武器
2. 设计Steve和Zombie的战斗方式，当任何一方的hp为0时该角色死亡。
3. 战斗为回合制战斗，根据键盘的输入来判断出什么技能，比如按a进行攻击，按d嘲讽，按q不动...
4. 当角色进行了任何行为（攻击，不动...）后，怪物会进行攻击，默认的伤害为怪物的damage属性值
5. 请打印一些语句来记录战斗，如攻击，回血，剩余血量等信息。
