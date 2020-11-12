//
// Created by Mostafa Oraei on 11/11/20.
//

#include "FragTrap.h"
#include <iostream>
#include <random>

FragTrap::FragTrap() {
    std::cout << "Init FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : name(name) {
    std::cout << "Init FragTrap with Name: " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) {
    this->setName(frag.getName());
    this->setHitPoint(frag.getHitPoint());
    this->setMaxHitPoint(frag.getMaxHitPoint());
    this->setEnergyPoint(frag.getEnergyPoint());
    this->setMaxEnergyPoint(frag.getMaxEnergyPoint());
    this->setLevel(frag.getLevel());

    std::cout << "Copy Constructor FragTrap" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destroyed FragTrap" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag) {
    this->setName(frag.getName());
    this->setHitPoint(frag.getHitPoint());
    this->setMaxHitPoint(frag.getMaxHitPoint());
    this->setEnergyPoint(frag.getEnergyPoint());
    this->setMaxEnergyPoint(frag.getMaxEnergyPoint());
    this->setLevel(frag.getLevel());

    std::cout << "Assignment operator FragTrap" << std::endl;
    return *this;
}

void FragTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getRangedAttackDamage() << " ranged" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getMeleeAttackDamage() << " melee" << std::endl;
}

void FragTrap::knifeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getKnifedAttackDamage() << " knife" << std::endl;
}

void FragTrap::bulletAttack(const std::string & target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getBulletAttackDamage() << " bullet" << std::endl;
}

void FragTrap::fartAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getFartAttackDamage() << " fart" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    amount = (this->getArmorDamageReduction() - amount > 0) ? 0 : this->getArmorDamageReduction() - amount;
    int hp = (this->getHitPoint() - amount < 0) ? 0 : this->getHitPoint() - amount;
    this->setHitPoint(hp);
}

void FragTrap::beRepaired(unsigned int amount) {
    this->setHitPoint(this->getHitPoint() + amount);
    if (this->getHitPoint() > this->getMaxHitPoint())
        this->setMaxHitPoint(this->getHitPoint());
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    if (this->getEnergyPoint() - 25 > 0) {
        this->setEnergyPoint(this->getEnergyPoint() - 25);
    }  else {
        std::cout << "You need more energy!" << std::endl;
    }

    typedef void (FragTrap::*fcptr)(const std::string &);
    fcptr attacks[] = {&FragTrap::meleeAttack,
                       &FragTrap::rangedAttack,
                       &FragTrap::bulletAttack,
                       &FragTrap::knifeAttack,
                       &FragTrap::fartAttack};

    std::random_device dev;
    std::mt19937 rn(dev());
    std::uniform_int_distribution<int> dist5(0, 4);

    (this->*attacks[dist5(rn)])(target);
}

std::string FragTrap::getName() const {
    return std::string();
}

int FragTrap::getHitPoint() const {
    return FragTrap::hitPoint;
}

int FragTrap::getMaxHitPoint() const {
    return FragTrap::maxHitPoint;
}

int FragTrap::getEnergyPoint() const {
    return FragTrap::energyPoint;
}

int FragTrap::getMaxEnergyPoint() const {
    return FragTrap::maxEnergyPoint;
}

int FragTrap::getLevel() const {
    return FragTrap::level;
}

int FragTrap::getArmorDamageReduction() const {
    return FragTrap::getArmorDamageReduction();
}

int FragTrap::getMeleeAttackDamage() const {
    return FragTrap::getMeleeAttackDamage();
}

int FragTrap::getRangedAttackDamage() const {
    return FragTrap::getRangedAttackDamage();
}

int FragTrap::getKnifedAttackDamage() const {
    return FragTrap::knifeAttackDamage;
}

int FragTrap::getBulletAttackDamage() const {
    return FragTrap::bulletAttackDamage;
}

int FragTrap::getFartAttackDamage() const {
    return FragTrap::fartAttackDamage;
}

void FragTrap::setHitPoint(int hitPoint) {
    FragTrap::hitPoint = hitPoint;
}

void FragTrap::setMaxHitPoint(int hitPoint) {
    FragTrap::maxHitPoint = hitPoint;
}

void FragTrap::setEnergyPoint(int energyPoint) {
    FragTrap::energyPoint = energyPoint;
}

void FragTrap::setMaxEnergyPoint(int energyPoint) {
    FragTrap::maxEnergyPoint = energyPoint;
}

void FragTrap::setLevel(int level) {
    FragTrap::level = level;
}

void FragTrap::setName(std::string name) {
    FragTrap::name = name;
}