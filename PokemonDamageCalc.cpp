#include<bits/stdc++.h>
using namespace std;



int main(){
    long long lv, power, attack, defense,modifiers=1;
    float base_damage,final_damage,lv_factor = (2*lv/5) + 2, AD_factor=attack/defense;
    string ans;
    cout << "Level: "; cin >> lv;
    cout << "Power: "; cin >> power;
    cout << "Attack: "; cin >> attack;
    cout << "Defense: "; cin >> defense;

    cout << "Are there any modifiers?? (Y/N) --> "; cin >> ans;
    if (ans == "Y"){
        cout << "Modifiers: "; cin >> modifiers;
    }
    
    base_damage = (lv_factor*AD_factor*power/50) + 2;
    final_damage = base_damage*modifiers;

    cout << "Final Damage: " << final_damage;
    return 0;
}