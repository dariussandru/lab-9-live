//
// Created by Darius on 21/04/2022.
//

#include <cassert>
#include "tests.h"
#include "../Domain/Entity.h"
#include "../Repo/Repo.h"

void testAll() {
    testTicketGet();
    testTicketSet();
    testRepoInMemoryAdd();
}


void testTicketGet() {
    Entity ticket("54", "marti", "wadw", 111);
    assert(ticket.getCod() == "wadw");
    assert(ticket.getId() == "54");
    assert(ticket.getPret() == 111);
    assert(ticket.getZiua() == "marti");
}

void testTicketSet() {
    Entity ticket("523");
    ticket.setCod("4gE5");
    ticket.setPret(12);
    ticket.setZiua("Luni");

    assert(ticket.getCod() == "4gE5");
    assert(ticket.getId() == "523");
    assert(ticket.getPret() == 12);
    assert(ticket.getZiua() == "Luni");
}

void testRepoInMemoryAdd() {
    Repo repo;
    Entity ticket("1", "joi", "CeF", 531);
    Entity ticket1("123");
    repo.addTicket(ticket);
    repo.addTicket(ticket1);
    assert(repo.getAll().size() == 2);
    assert(repo.getAll()[0] == ticket);
}


