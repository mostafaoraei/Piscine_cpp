//
// Created by Mostafa Oraei on 11/13/20.
//

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H

#include <string>

class ClapTrap {

private:
    int hitPoint{100};
    int maxHitPoint{100};
    int energyPoint{100};
    int maxEnergyPoint{100};
    int level{1};
    std::string name;
    int meleeAttackDamage{30};
    int rangedAttackDamage{20};
    int knifeAttackDamage{10};
    int bulletAttackDamage{25};
    int fartAttackDamage{60};
    int armorDamageReduction{5};

    void (*fcptr) (const std::string &);

public:
    ClapTrap();
    explicit ClapTrap(std::string name);
    ClapTrap(ClapTrap const & clap);
    ~ClapTrap();

    ClapTrap & operator=(ClapTrap const & frag);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void knifeAttack(std::string const & target);
    void bulletAttack(std::string const & target);
    void fartAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

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
    void setMeleeAttackDamage(int damage);
    void setRangedAttackDamage(int damage);
    void setArmorDamageReduction(int damage);
};


#endif //EX00_CLAPTRAP_H
