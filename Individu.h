/**
 * @file Individu.h
 * @author Nicolas Dussin
 * @brief sir yessir
 * @version 0.1
 * @date 2022-10-19
 * @details i'm a crepper minecraft grim reaper blowing up like al khaida.
 * 3 big balls seems like we're playing tennis he got a big d I think his name's Denis
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

 /**
  * @brief aaaaahahaaaaahaaaa hooked on a feeling. 
  * @warning bin laden is in your walls :fearful:
  * @deprecated ligma is better
  */
class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief A quirked up white boy bust down sexual style. His he goated with the sauce ?
     * 
     */
    string nom;
    /**
     * @brief hi quandale dingle here *goofy*
     * @todo me défenestrer
     */
    string prenom;      // Le prénom de l'individu
    /**
     * @brief it's been 20 years daddy mommy told me everything
     * 
     */
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    // Constructeur
    /**
     * @brief Construct a new Individu object
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief I didn't care anymore ! For a moment I didn't care to be stronger than kakarot
     * 
     * @return string 
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Set the Ma Voiture object
     * 
     * @param [in] voiture
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H