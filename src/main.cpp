#include <iostream>
#include <yap.h>
#include <cpr/cpr.h>

int main()
{
	yap::yap yap;
	yap.init();

	cpr::Response r = cpr::Get(
		cpr::Url{"https://api.github.com/repos/whoshuu/cpr/contributors"},
		cpr::Authentication{"user", "pass", cpr::AuthMode::BASIC},
		cpr::Parameters{{"anon", "true"}, {"key", "value"}}
	);

	std::cout << r.status_code << std::endl;

	return 0;
}