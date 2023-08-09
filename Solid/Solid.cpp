// Solid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CarEngine.h"
#include "TwinTurbo.h"
#include "DirectInjection.h"
#include "SimpleSquare.h"
#include "MashineBot.h"
#include "Factory.h"

using namespace std;

int main()
{
    //SRP
   /* BadCarEngine* badEngine = new BadCarEngine();
    badEngine->Start();
    IFuelSystem* fuel = new DirectInjection();
    IAirSystem* air = new TwinTurbo();
    FineCarEngine* fineEngine = new FineCarEngine(fuel, air);
    fineEngine->Start();
    delete badEngine;
    delete fuel;
    delete air;
    delete fineEngine;*/

    //OCP
   /* FinaleSquare* square = new FinaleSquare();
    cout << "Square side lenth = " << square->GetSideLenth() << endl;
    cout << "Square lenth = " << square->GetSquareLenth() << endl;
    cout << "Square Area = " << square->GetSquareArea() << endl;
    cout << "Hypotenuse lenth = " << square->GetHypotenuseLenth() << endl;
    delete square;*/

    //LSP-ISP
    //TurretBot* badTurret = new TurretBot();
    //badTurret->Fire();
    //badTurret->Reload();
    //badTurret->Move(5,15,3); //Got error

    //FineTurretBot* fineTurret = new FineTurretBot();
    //fineTurret->Fire();
    //fineTurret->Reload();
    ////fineTurret->Move(5, 15, 3); There is no such method, all works well

    //FineMeleeBot* fineMeleeBot = new FineMeleeBot();
    //fineMeleeBot->Move(5,9,12);
    //fineMeleeBot->Fire();
    ////fineMeleeBot->Reload(); No need to reload melee weapon

    //delete fineMeleeBot;
    //delete badTurret;
    //delete fineTurret;


    //DIP
   /* Factory* factory = new Factory();
    factory->RunFactory();
    delete factory;*/

    system("pause");
    return 0;
}


