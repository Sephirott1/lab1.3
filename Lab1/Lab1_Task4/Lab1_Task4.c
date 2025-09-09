#include <stdio.h>
#include <locale.h>

void name()
{
	puts("*******************************************");
	puts("* тема: Разработка консольного приложения *");
	puts("*    Выполнил Иванов М. А.                *");
	puts("*******************************************");
}

void date()
{
	puts("      _  _   _  _");
	puts(" | |.| |  |.| |  |");
	puts(" | |.| |  |.| |  |");
	puts("      -      -    ");
}

void main()
{
	setlocale(LC_ALL, "RUS ");

	name();
	date();
}