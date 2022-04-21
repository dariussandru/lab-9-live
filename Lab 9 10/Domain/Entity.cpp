//
// Created by Darius on 21/04/2022.
//

#include "Entity.h"

const string &Entity::getZiua() const {
    return ziua;
}

const string &Entity::getCod() const {
    return cod;
}

int Entity::getPret() const {
    return pret;
}

void Entity::setZiua(const string &ziua) {
    Entity::ziua = ziua;
}

void Entity::setCod(const string &cod) {
    Entity::cod = cod;
}

void Entity::setPret(int pret) {
    Entity::pret = pret;
}

bool Entity::operator==(const Entity &rhs) const {
    return (id == rhs.id);
}

bool Entity::operator!=(const Entity &rhs) const {
    return !(rhs == *this);
}

Entity::Entity(const string &id, const string &ziua, const string &cod, int pret) : id(id), ziua(ziua), cod(cod),
                                                                                    pret(pret) {}

ostream &operator<<(ostream &os, const Entity &ticket) {
    os << "id: " << ticket.id << " ziua: " << ticket.ziua << " cod: " << ticket.cod << " pret: " << ticket.pret;
    return os;
}

const string &Entity::getId() const {
    return id;
}

Entity::Entity(const string &id) : id(id) {
    this->pret = 0;
}
