#include <stdio.h>
#include <src/hello.h>
#include <json/json.h>
int main()
{
	Json::Value index;
	index["key"] = "value";

	HelloFunc();
	return 0;
}
