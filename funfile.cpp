#include <iostream>
using namespace std;

int main()
{
    int strength;
    cout << "Please select and enter a strength value (chakra level) from the following:-\n";
    cout << "[10, 40, 95, 200, 2000, 10000, 70707]\n";
    cout << "---->  ";
    cin >> strength;
    switch (strength)
    {
    case 10:
        cout << "You're at the In-Training Stage of Evolution\n\n\n";
        break;
    case 40:
        cout << "You've Evolved into the Rookie Power Level\n\n\n";
        break;
    case 95:
        cout << "Mega Evolution Successful!!\nTraining Zone for Ultimate Morph Unlocked! SuperUser access granted!!\n\n\n";
        break;
    case 200:
        cout << "Congratulations on achieving Enlightened Apprentice Level!\n This enables you to control the elements , namely\n1. Fire\n2. Water\n3. Earth\n4. Ether\n5. Wind\n6. Energy\n\n\n";
        break;
    case 2000:
        cout << "Ultimate Morphed! Invincibility Unlocked !!\nYou are now capable of Controlling the elements \n7.Metal \n8.Light \n9.Dark\n\n\n";
        break;
    case 10000:
        cout << "Super Saiyan God Mode Transformation Complete...!\nYou Really seem to have the potential of Becoming the greatest Hero of all-time!!Elemental Control Added--\n10. Yin\n11. Yang\n12. Ability of Creation and Formation awakened!!\n\n\n";
        break;
    case 70707:
        cout << "Congratulations on reaching the HYPER-PHENOMAL stage of development!\nYou can now perform Sannin-Hokage Level Jutsu With 150 percent perfection !!!\nElemental control added --\t\t13.TIME AND SPACE\n\n\n";
        break;
        
    }
    system("pause");
    return 0;
}