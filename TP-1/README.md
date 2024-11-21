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

🚀 Mini-rappel sur Git : **"Un voyage à travers le contrôle de version"**
-------------------------------------------------------------------------

### **1\. Initier un voyage : Initialiser un dépôt Git**

Si ce n'est pas déjà fait, initialise Git dans le répertoire de votre projet :

bash

Copy code

`git init`

Tu viens de transformer ton dossier en un dépôt Git ! Toutes les étapes de ton projet seront suivies ici.

### **2\. Capturer l'instant : Ajouter et valider les changements**

À chaque étape importante, "prends une photo" de tes fichiers avec Git :

bash

Copy code

`git add .`

Puis valide cette étape dans ton journal Git :

bash

Copy code

`git commit -m "Ajout initial du projet Ceedling"`

### **3\. Prépare-toi à partager : Configurer ton dépôt distant**

Associe ton dépôt local à un dépôt distant sur GitHub :

bash

Copy code

`git remote add origin <URL-de-ton-dépôt-GitHub>`

### **4\. Publier ton travail : Pousser les changements**

Partage tes fichiers avec ton équipe (ou toi-même) sur GitHub :

bash

Copy code

`git push origin main`

### **5\. Explorer l'historique : Voir les étapes de ton projet**

Consulte ton voyage avec :

bash

Copy code

`git log --oneline`

* * * * *

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

    bash

    Copy code

    `sudo apt update
    sudo apt install git`

-   **Installer le compilateur C** :

    bash

    Copy code

    `sudo apt install build-essential`

-   **Installer Ruby** :

    bash

    Copy code

    `sudo apt install ruby-full`

-   **Installer Ceedling** :

    bash

    Copy code

    `gem install ceedling`

#### Pour Windows :

-   **Installer Git** depuis [Git pour Windows](https://git-scm.com/).
-   **Installer le compilateur C avec MinGW** :
    -   Téléchargez et installez MinGW.
    -   Ajoutez le chemin du dossier `bin` à vos variables d'environnement.
-   **Installer Ruby** depuis [RubyInstaller](https://rubyinstaller.org/).
    -   Assurez-vous d'inclure DevKit et d'ajouter Ruby au PATH.
-   **Installer Ceedling** :

    bash

    Copy code

    `gem install ceedling`

* * * * *

### Vérification des installations

-   **Vérifiez Git** :

    bash

    Copy code

    `git --version`

-   **Vérifiez le compilateur C** :

    bash

    Copy code

    `gcc --version`

-   **Vérifiez Ruby** :

    bash

    Copy code

    `ruby --version`

-   **Vérifiez Ceedling** :

    bash

    Copy code

    `ceedling version`

* * * * *

Étapes principales pour le TP
-----------------------------

1.  **Créer un projet Ceedling** :

    bash

    Copy code

    `ceedling new TP-Unit-Tests`

2.  **Ajouter les fichiers source et de test** dans les répertoires `src/` et `tests/`.

3.  **Exécuter vos tests unitaires** :

    bash

    Copy code

    `ceedling test:all`

4.  **Pousser vos changements sur GitHub** :

    bash

    Copy code

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