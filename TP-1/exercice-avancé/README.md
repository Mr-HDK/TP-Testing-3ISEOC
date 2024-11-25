# Exercice Avancé - TP-1  Unit Test

Bienvenue dans l'exercice avancé de testing avec Ceedling, Unity et CMock. Cet exercice a pour objectif d'approfondir vos compétences en tests unitaires, génération de mocks, et assertion de comportements.

---

## 🎯 Objectifs

- Découvrir les commandes courantes pour Ceedling, Unity, et CMock.
- Appliquer des techniques avancées de test avec des mocks et des assertions spécifiques.
- Résoudre un cas pratique pour simuler et valider des interactions complexes.

---

## ⚙️ Commandes utiles

Voici une liste de commandes que vous pouvez utiliser dans ce projet :

| **Outil**         | **Commande**                      | **Description**                                                                              |
|--------------------|-----------------------------------|----------------------------------------------------------------------------------------------|
| **Ceedling**       | `ceedling new PROJECT_NAME`       | Crée un nouveau projet Ceedling dans le dossier `PROJECT_NAME`.                              |
|                    | `ceedling test:all`              | Exécute tous les tests présents dans le projet.                                              |
|                    | `ceedling version`               | Affiche la version actuelle de Ceedling installée.                                           |
|                    | `ceedling help`               | Afficher l'aide pour Ceedling.                                           |
|                    | `ceedling clobber`               | Effacer touts els fichiers générés.                                           |
|                    | `ceedling summary`               | Affiche un résumé des résultats des tests exécutés.                                        |
| **Unity**          | `TEST_ASSERT(condition)`         | Vérifie qu'une condition est vraie.                                                         |
|                    | `TEST_ASSERT_FALSE(condition)` | Vérifie qu'une condition est fausse.                                |
|                    | `TEST_ASSERT_EQUAL(expected, actual)` | Vérifie que les valeurs `expected` et `actual` sont égales.                                |
|                    | `TEST_ASSERT_NULL(pointer)`       | Vérifie que le pointeur est nul.                                                            |
|                    | `TEST_ASSERT_EQUAL_INT(expected, actual)` |Compare deux entiers en affichant les erreurs en tant qu'entiers signés.                                |
|                    | `TEST_ASSERT_FLOAT_WITHIN(delta, expected, actual)` | Vérifie qu'une valeur flottante est dans une plage spécifiée autour de la valeur attendue.                                |
|                    | `TEST_ASSERT_NOT_NULL(pointer)`   | Vérifie que le pointeur n'est pas nul.                                                      |
|                    | `TEST_FAIL()`                    | Force l'échec d'un test avec un message optionnel.                                          |
| **CMock**          | `mock_function()`                | Génère un mock pour une fonction externe.                                                   |
|                    | `mock_reset()`                   | Réinitialise tous les appels mockés pour éviter les interférences entre tests.              |
|                    | `mock_verify()`                  | Vérifie si les appels attendus ont été effectués.                                           |
|                    | `func_Expect(expected_params)	`                  | Attend un appel à la fonction avec des arguments spécifiques.                                           |
|                    | `func_ExpectAnyArgs()	`                  | Attend un appel à la fonction sans vérifier les arguments.                                           |
|                    | `func_AddCallback(callback)	`                  | Appelle un callback personnalisé pour remplacer le comportement du mock.                                           |
|                    | `func_ExpectAndThrow(params, error)`                  | Simule une exception lors de l'appel d'une fonction.                                          |

---

## 🚀 Astuce : Utiliser CMock efficacement

CMock est utilisé pour simuler des dépendances externes dans vos tests. Voici un aperçu rapide :

1. **Génération des mocks** :
   - Les mocks sont générés automatiquement pour les dépendances spécifiées dans le fichier `project.yml`.

2. **Réinitialisation et vérification** :
   - Avant chaque test, utilisez `mock_reset()` pour vous assurer qu'il n'y a pas d'interférences.
   - Après le test, utilisez `mock_verify()` pour confirmer que tous les appels attendus ont été faits.

---




## 🧠 Cas pratique

Dans cet exercice, vous devez :

1. Simuler le comportement d’une dépendance externe avec **CMock**.
2. Créer une série d’assertions pour valider les résultats obtenus.
3. Tester votre code avec la commande `ceedling test:all`.

