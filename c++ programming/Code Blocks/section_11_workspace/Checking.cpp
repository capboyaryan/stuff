#include "Checking.h"
bool Checking::withdraw(double amount)
{
	if (amount > withdrawal_fee)
		return Account::withdraw(amount - withdrawal_fee);
	else
		return false;
}
std::ostream& operator<<(std::ostream& os, const Checking& account)
{
	os << "[Checking Account: "<<account.name<<": "<<account.balance<<" ]";
	return os;
}