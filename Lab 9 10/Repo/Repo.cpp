//
// Created by Darius on 21/04/2022.
//

#include "Repo.h"

Repo::Repo() {
    tickets = vector<Entity>();
}

void Repo::addTicket(Entity t) {
    tickets.push_back(t);
}

vector<Entity> Repo::getAll() {
    return tickets;
}
