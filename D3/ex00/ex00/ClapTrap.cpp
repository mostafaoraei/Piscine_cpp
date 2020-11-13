//
// Created by Mostafa Oraei on 11/13/20.
//

#include "ClapTrap.h"
#include <iostream>

ClapTrap::ClapTrap() {
    std::cout << "Init ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
    std::cout << "Init ClapTrap with Name: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &frag) {
    *this = frag;
    std::cout << "Copy Constructor ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destroyed ClapTrap" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &frag) {
    this->setName(frag.getName());
    this->setHitPoint(frag.getHitPoint());
    this->setMaxHitPoint(frag.getMaxHitPoint());
    this->setEnergyPoint(frag.getEnergyPoint());
    this->setMaxEnergyPoint(frag.getMaxEnergyPoint());
    this->setLevel(frag.getLevel());

    std::cout << "Assignment operator ClapTrap" << std::endl;
    return *this;
}

void ClapTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getRangedAttackDamage() << " ranged" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getMeleeAttackDamage() << " melee" << std::endl;
}

void ClapTrap::knifeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getKnifedAttackDamage() << " knife" << std::endl;
}

void ClapTrap::bulletAttack(const std::string & target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getBulletAttackDamage() << " bullet" << std::endl;
}

void ClapTrap::fartAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->getFartAttackDamage() << " fart" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    amount = (this->getArmorDamageReduction() - amount > 0) ? 0 : this->getArmorDamageReduction() - amount;
    int hp = (this->getHitPoint() - amount < 0) ? 0 : this->getHitPoint() - amount;
    this->setHitPoint(hp);
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->setHitPoint(this->getHitPoint() + amount);
    if (this->getHitPoint() > this->getMaxHitPoint())
        this->setMaxHitPoint(this->getHitPoint());
}

std::string ClapTrap::getName() const {
    return name;
}

int ClapTrap::getHitPoint() const {
    return ClapTrap::hitPoint;
}

int ClapTrap::getMaxHitPoint() const {
    return ClapTrap::maxHitPoint;
}

int ClapTrap::getEnergyPoint() const {
    return ClapTrap::energyPoint;
}

int ClapTrap::getMaxEnergyPoint() const {
    return ClapTrap::maxEnergyPoint;
}

int ClapTrap::getLevel() const {
    return ClapTrap::level;
}

int ClapTrap::getArmorDamageReduction() const {
    return ClapTrap::getArmorDamageReduction();
}

int ClapTrap::getMeleeAttackDamage() const {
    return ClapTrap::getMeleeAttackDamage();
}

int ClapTrap::getRangedAttackDamage() const {
    return ClapTrap::getRangedAttackDamage();
}

int ClapTrap::getKnifedAttackDamage() const {
    return ClapTrap::knifeAttackDamage;
}

int ClapTrap::getBulletAttackDamage() const {
    return ClapTrap::bulletAttackDamage;
}

int ClapTrap::getFartAttackDamage() const {
    return ClapTrap::fartAttackDamage;
}

void ClapTrap::setHitPoint(int hitPoint) {
    ClapTrap::hitPoint = hitPoint;
}

void ClapTrap::setMaxHitPoint(int hitPoint) {
    ClapTrap::maxHitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(int energyPoint) {
    ClapTrap::energyPoint = energyPoint;
}

void ClapTrap::setMaxEnergyPoint(int energyPoint) {
    ClapTrap::maxEnergyPoint = energyPoint;
}

void ClapTrap::setLevel(int level) {
    ClapTrap::level = level;
}

void ClapTrap::setName(std::string name) {
    ClapTrap::name = name;
}

void ClapTrap::setMeleeAttackDamage(int damage) {
    ClapTrap::meleeAttackDamage = damage;
}

void ClapTrap::setRangedAttackDamage(int damage) {
    ClapTrap::rangedAttackDamage = damage;
}

void ClapTrap::setArmorDamageReduction(int damage) {
    ClapTrap::armorDamageReduction = damage;
}