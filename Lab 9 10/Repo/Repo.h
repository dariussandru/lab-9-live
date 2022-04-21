//
// Created by Darius on 21/04/2022.
//

#ifndef LAB_9_10_REPO_H
#define LAB_9_10_REPO_H


#include "../Domain/Entity.h"
#include <vector>

class Repo {
private:
    vector<Entity> tickets;
public:
    /**
     * Constructor
     */
    Repo();

    /**
     * Adauga o entitate in repository
     * @param e entitatea de adaugat
     */
    void addTicket(Entity t);

    vector<Entity> getAll();

};


#endif //LAB_9_10_REPO_H
