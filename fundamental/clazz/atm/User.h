#include <string>

using namespace std;

class User
{
private:
  string name;
  string account;
  long balance;

public:
  User(string name, string account, long balance);

  string getName();
  string getAccount();
  long getBalance();
};