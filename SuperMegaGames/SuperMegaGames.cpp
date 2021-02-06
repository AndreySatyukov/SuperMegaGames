#include <iostream>
#include <locale>
#include <string>

#include "intro.h"
#include "menu.h"


std::string main_menu_items[] = {
    "������ ����� (��� ����������)",
    "������ ����� (��� ����������)",
    "������-�������-������",
    "99 Bottles of Beer (english)",
    "99 ������� ���� (�������)",
    "��������� ������"
};

int main()
{
    setlocale(LC_CTYPE, "Russian");

    show_intro();

    int choice = menu_choice(main_menu_items);
    std::cout << "������ �����: " << main_menu_items[choice] << std::endl;
}