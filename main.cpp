#include <stdio.h>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(65001);
	char str[] = "ウエノタイキ";
	printf("%s", str);
	return 0;
}