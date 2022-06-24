// DZ do 26.06.2022 Патерны Строитель.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"Builder.cpp"

int main()
{
    BuilderProgrammer* builderProgrammer1 = new BuilderProgrammer();
    BuilderEngineer* builderEngineer1 = new BuilderEngineer();
    BuilderEngineerInfo* builderEngineerInfo1 = new BuilderEngineerInfo();
    BuilderProgrammerInfo* builderProgrammerInfo1 = new BuilderProgrammerInfo();
    BuilderDirector* dir1 = new BuilderDirector();
    dir1->createEngineer(builderEngineer1, "Ivan", "7777777", "35");
    dir1->createProgrammer(builderProgrammer1, "Viktor", "1111111", "30");
    dir1->createEngineer(builderEngineerInfo1, "Sergei", "888888", "45");
    dir1->createEngineer(builderProgrammerInfo1, "Vladimir", "5555555", "55");
    Programmer* programmer1 = builderProgrammer1->getResult();
    Engineer* engineer1 = builderEngineer1->getResult();
    EngineerInfo* engineerInfo = builderEngineerInfo1->getResult();
    ProgrammerInfo* programmerInfo = builderProgrammerInfo1->getResult();
    programmer1->show();
    engineer1->show();
    engineerInfo->show();
    programmerInfo->show();
}

