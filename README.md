# TP-Testing-3ISEOC

## Description
Ce dépôt contient une série de travaux pratiques destinés aux étudiants en ingénierie des systèmes embarqués (3ème année). L'objectif de ces TP est d'explorer différentes phases du testing logiciel, du niveau unitaire à l'intégration, puis d’analyser un projet réel pour appliquer les principes de test.

Les étudiants apprendront à utiliser des outils de test adaptés au développement en C pour des systèmes embarqués, avec un accent particulier sur les tests unitaires, d’intégration et fonctionnels.

---

## Objectifs pédagogiques
Les travaux pratiques ont pour objectif de :
- Faire un rappel sur les commandes gits.
- Familiariser les étudiants avec les tests unitaires, d’intégration et fonctionnels.
- Introduire les outils de test couramment utilisés dans le développement embarqué.
- Appliquer les concepts appris à un projet concret dans un environnement embarqué.

---

## Préparation des outils
### Prérequis
Les étudiants doivent disposer des outils suivants pour suivre ces travaux pratiques :
- Un éditeur de code comme [VS Code](https://code.visualstudio.com/) ou tout autre éditeur de texte adapté.
- Un compilateur C (par exemple, `gcc` ou MinGW sur Windows).
- Git pour la gestion de version.
- Ruby et Ceedling pour les tests unitaires.

### Installation des outils
#### Pour Linux :
1. **Installer Git :**
   ```bash
   sudo apt update
   sudo apt install git
2. **Installer le compilateur C :**
   ```bash
   sudo apt install build-essential
3. **Installer Ruby :**
   ```bash
   sudo apt install ruby-full
4. **Installer Ceedling :**
   ```bash
   gem install ceedling
#### Pour Windows :
1.  **Installer Git** depuis [Git pour Windows](https://git-scm.com/).
2.  **Installer le compilateur C** avec MinGW.
    -   Ajoutez le chemin du dossier `bin` à vos variables d'environnement.
3.  **Installer Ruby** depuis [RubyInstaller](https://rubyinstaller.org/).
    -   Assurez-vous d'inclure DevKit et d'ajouter Ruby au `PATH`.
4.  **Installer Ceedling :**
    `gem install ceedling`
    
### Vérification des installations
-   Vérifiez que Git est installé :
    `git --version`
-   Vérifiez le compilateur C :
    `gcc --version`
-   Vérifiez Ruby :
    `ruby --version`
-   Vérifiez Ceedling :
    `ceedling version`
