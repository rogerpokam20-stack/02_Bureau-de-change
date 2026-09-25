#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Données fixes de la machine
    double solde = 1000.00;
    double taux = 1.024;
    double frais = 5.00;

    // Informations de l'utilisateur
    string nom;
    string numeroCompte;

    // Montants
    double sommeEuro;
    double sommeCHF;
    double nouveauSolde;

    // Saisie des informations de l'utilisateur
    cout << "Quel est votre numero de compte ? ";
    cin >> numeroCompte;

    cout << "Quel est votre nom de famille ? ";
    cin >> nom;

    // Affichage des informations du compte
    cout << fixed << setprecision(2);

    cout << "\nSolde de votre compte CHF : " << solde << endl;
    cout << "Taux de change : 1 CHF = " << taux << " Euro" << endl;
    cout << "Frais d'operation : " << frais << " CHF" << endl;

    // Saisie du montant souhaite en Euro
    cout << "\nEntrez la somme souhaitee en Euro : ";
    cin >> sommeEuro;

    // Conversion Euro vers CHF
    sommeCHF = sommeEuro / taux;

    // Arrondissement a 2 chiffres apres la virgule
    sommeCHF = round(sommeCHF * 100) / 100;

    // Calcul du nouveau solde
    nouveauSolde = solde - sommeCHF - frais;

    // Affichage de la somme en CHF et du solde
    cout << "\nSomme CHF : " << sommeCHF
         << ", Solde compte : " << nouveauSolde << endl;

    // Affichage du ticket
    cout << "\n";
    cout << "+-------------------------------------------+" << endl;
    cout << "|                  TICKET                   |" << endl;
    cout << "+-------------------------------------------+" << endl;
    cout << "| Nom : " << nom << endl;
    cout << "| Compte : " << numeroCompte << endl;
    cout << "+-------------------------------------------+" << endl;
    cout << "| Somme demandee : " << sommeEuro << " Euro" << endl;
    cout << "| Taux de change : 1 CHF = " << taux << " Euro" << endl;
    cout << "| Montant en CHF : " << sommeCHF << " CHF" << endl;
    cout << "| Frais d'operation : " << frais << " CHF" << endl;
    cout << "| Solde restant : " << nouveauSolde << " CHF" << endl;
    cout << "+-------------------------------------------+" << endl;

    return 0;
}