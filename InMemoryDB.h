//
// Created by Rohan Chander on 12/8/23.
//

#ifndef INMEMORYDB_H
#define INMEMORYDB_H

#include <unordered_map>
#include <stack>
#include <stdexcept>
#include <string>
using namespace std;


class InMemoryDB {
private:
    unordered_map<string, int> data;  // Main data store
    stack<unordered_map<string, int>> transactions;  // Stack to handle transactions

public:
    int get(const string &key);

    void put(const string &key, int val);

    void begin_transaction();

    void commit();

    void rollback();
};

#endif
