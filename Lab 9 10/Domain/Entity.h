//
// Created by Darius on 21/04/2022.
//

#ifndef LAB_9_10_CURSA_H
#define LAB_9_10_CURSA_H

#include <string>
#include <ostream>

using namespace std;

class Entity {
private:
    string id, ziua, cod;
    int pret;
public:
    Entity(const string &id);

    Entity(const string &id, const string &ziua, const string &cod, int pret);

    const string &getId() const;

    const string &getZiua() const;

    const string &getCod() const;

    int getPret() const;

    void setZiua(const string &ziua);

    void setCod(const string &cod);

    void setPret(int pret);

    bool operator==(const Entity &rhs) const;

    bool operator!=(const Entity &rhs) const;

    friend ostream &operator<<(ostream &os, const Entity &ticket);

};


#endif //LAB_9_10_CURSA_H
