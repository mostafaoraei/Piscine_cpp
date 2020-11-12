//
// Created by Mostafa Oraei on 11/11/20.
//

#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H

#include <string>

class FragTrap {
private:
    int hitPoint{100};
    int maxHitPoint{100};
    int energyPoint{100};
    int maxEnergyPoint{100};
    int level{1};
    std::string name;
    const int meleeAttackDamage{30};
    const int rangedAttackDamage{20};
    const int knifeAttackDamage{10};
    const int bulletAttackDamage{25};
    const int fartAttackDamage{60};
    const int armorDamageReduction{5};

    void (*fcptr) (const std::string &);

public:
    FragTrap();
    explicit FragTrap(std::string name);
    FragTrap(FragTrap const & frag);
    ~FragTrap();

    FragTrap & operator=(FragTrap const & frag);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void knifeAttack(std::string const & target);
    void bulletAttack(std::string const & target);
    void fartAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

    std::string getName() const;
    int getHitPoint() const;
    int getMaxHitPoint() const;
    int getEnergyPoint() const;
    int getMaxEnergyPoint() const;
    int getLevel() const;
    int getArmorDamageReduction() const;
    int getMeleeAttackDamage() const;
    int getRangedAttackDamage() const;
    int getKnifedAttackDamage() const;
    int getBulletAttackDamage() const;
    int getFartAttackDamage() const;

    void setHitPoint(int hitPoint);
    void setMaxHitPoint(int hitPoint);
    void setEnergyPoint(int energyPoint);
    void setMaxEnergyPoint(int energyPoint);
    void setLevel(int level);
    void setName(std::string name);

};


#endif //EX00_FRAGTRAP_H
