//
// Created by Rohan Chander on 12/8/23.
//

#include "InMemoryDB.h"

int InMemoryDB::get(const string &key) {
    if(data.find(key) == data.end()){
        return NULL;
    }
    else{
        return data[key];
    }
}

void InMemoryDB::put(const string &key, int val) {
    if (transactions.empty()) {
        throw runtime_error("Transaction not in progress");
    } else {
        transactions.top()[key] = val;
    }
}

void InMemoryDB::begin_transaction() {
    if(transactions.empty()){
        transactions.push(unordered_map<string, int>());
    }
    else{
        throw runtime_error("Only one transaction may be open at a time");
    }
}

void InMemoryDB::commit() {
    if (transactions.empty()) {
        throw runtime_error("No open transaction");
    } else {
        data.insert(transactions.top().begin(), transactions.top().end());
        transactions.pop();
    }
}

void InMemoryDB::rollback() {
    if (transactions.empty()) {
        throw runtime_error("No ongoing transaction");
    } else {
        transactions.pop();
    }
}
