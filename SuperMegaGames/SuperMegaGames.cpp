#include <iostream>
#include <locale>
#include <string>

#include "intro.h"
#include "menu.h"


std::string main_menu_items[] = {
    "Угадай число (бот загадывает)",
    "Угадай число (бот отгадывает)",
    "Камень-ножницы-бумага",
    "99 Bottles of Beer (english)",
    "99 бутылок пива (русский)",
    "Поросячья латынь"
};

int main()
{
    setlocale(LC_CTYPE, "Russian");

    show_intro();

    int choice = menu_choice(main_menu_items);
    std::cout << "Выбран пункт: " << main_menu_items[choice] << std::endl;
}