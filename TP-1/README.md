TP-1 : Tests Unitaires en C avec Ceedling
=========================================

Objectifs
---------

-   Créer une structure de projet Ceedling pour les tests unitaires en C.
-   Écrire des tests unitaires pour des fonctions simples.
-   Exécuter et analyser les résultats des tests unitaires.
-   Réviser les bases de Git dans un contexte pratique.

* * * * *

Structure du projet
-------------------

-   **`src/`** : Contient les fichiers sources de l'application à tester.
-   **`tests/`** : Contient les fichiers de tests unitaires.
-   **`TP-1/README.md`** : Ce fichier contient les instructions pour cette séance.

* * * * *

Rappel sur Git
--------------

### Étapes pour gérer votre projet avec Git

Pour travailler efficacement sur ce TP, suivez les étapes ci-dessous.

* * * * *

### 1\. Cloner le dépôt du TP

Commencez par cloner le dépôt GitHub contenant le TP :

`git clone https://github.com/Mr-HDK/TP-Testing-3ISEOC.git`

Une fois le dépôt cloné, accédez au dossier du projet :

`cd TP-Testing-3ISEOC`

* * * * *

### 2\. Créer une branche avec votre prénom et nom

Créez une branche pour travailler sur votre copie en utilisant votre prénom et nom (par exemple, `ahmed-jaleli`) :

`git branch prenom-nom`

`git checkout prenom-nom`

> **Remarque :** Remplacez `prenom-nom` par vos vrais prénom et nom, en utilisant des lettres minuscules et un tiret pour séparer les mots (par exemple, ahmed-jaleli).

* * * * *

### 3\. Travailler sur votre branche

1.  Modifiez les fichiers nécessaires au TP.
2.  Ajoutez vos modifications au suivi de Git :
   
    `git add .`
3.  Sauvegardez vos changements avec un message clair :
   
    `git commit -m "Début du TP - Ajout de [description]"`

* * * * *

### 4\. Mettre à jour votre branche (optionnel)

Si le formateur apporte des modifications au dépôt principal pendant le TP, vous pouvez récupérer ces changements tout en conservant votre travail :

1.  Basculez sur la branche principale (`main`) pour la mettre à jour :
   
    `git checkout main
    git pull origin main`

2.  Revenez sur votre branche et fusionnez les changements récents :
   
    `git checkout prenom-nom
    git merge main`

* * * * *

### Commandes principales à retenir :

| Commande | Description |
| --- | --- |
| `git clone [URL]` | Cloner un dépôt Git distant. |
| `git branch prenom-nom` | Créer une nouvelle branche. |
| `git checkout prenom-nom` | Passer sur une branche spécifique. |
| `git add .` | Ajouter toutes les modifications au suivi de Git. |
| `git commit -m "message"` | Sauvegarder les modifications avec un message. |
| `git pull origin main` | Récupérer les changements du dépôt principal. |
| `git merge main` | Fusionner une branche dans la branche actuelle. |

🛠️ Préparation des outils
--------------------------

### Prérequis

Les étudiants doivent disposer des outils suivants pour suivre ces travaux pratiques :

-   Un éditeur de code comme VS Code ou tout autre éditeur de texte adapté.
-   Un compilateur C (par exemple, GCC ou MinGW sur Windows).
-   Git pour la gestion de version.
-   Ruby et Ceedling pour les tests unitaires.

* * * * *

### Installation des outils

#### Pour Linux :

-   **Installer Git** :

    `sudo apt update
    sudo apt install git`

-   **Installer le compilateur C** :

    `sudo apt install build-essential`

-   **Installer Ruby** :

    `sudo apt install ruby-full`

-   **Installer Ceedling** :

    `gem install ceedling`

#### Pour Windows :

-   **Installer Git** depuis [Git pour Windows](https://git-scm.com/).
-   **Installer le compilateur C avec MinGW** :
    -   Téléchargez et installez MinGW.
    -   Ajoutez le chemin du dossier `bin` à vos variables d'environnement.
-   **Installer Ruby** depuis [RubyInstaller](https://rubyinstaller.org/).
    -   Assurez-vous d'inclure DevKit et d'ajouter Ruby au PATH.
-   **Installer Ceedling** :

    `gem install ceedling`

* * * * *

### Vérification des installations

-   **Vérifiez Git** :

    `git --version`

-   **Vérifiez le compilateur C** :

    `gcc --version`

-   **Vérifiez Ruby** :

    `ruby --version`

-   **Vérifiez Ceedling** :

    `ceedling version`

* * * * *

Étapes principales pour le TP
-----------------------------

1.  **Créer un projet Ceedling** :

    `ceedling new TP-Unit-Tests`

2.  **Ajouter les fichiers source et de test** dans les répertoires `src/` et `tests/`.

3.  **Exécuter vos tests unitaires** :

    `ceedling test:all`

4.  **Pousser vos changements sur GitHub** :

    `git add .
    git commit -m "Ajout des fichiers du TP-1"
    git push origin main`

* * * * *

🚩 À la fin du TP-1
-------------------

À la fin de cette première séance, vous aurez :

-   Une meilleure maîtrise de Git en contexte réel.
-   Un projet Ceedling fonctionnel.
-   Des tests unitaires exécutés avec succès.

* * * * *
