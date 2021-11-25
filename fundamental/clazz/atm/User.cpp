#include <iostream>
#include <string>
#include "User.h"

using namespace std;

User::User(string name, string account, long balance)
{
  this->name = name;
  this->account = account;
  this->balance = balance;
}