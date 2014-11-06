ProjetPOO
=========

##### TODO :
	- Penser à mettre régulièrement l'UML (DCC) à jour
	- On annule l'implémentation du Timer pour le temps pour chaque tour :
	pas de classe de base comme Timer en Java -> il faut en créer une avec 
	les fonctions Linux...
	pas OBLIGATOIRE d'avoir un timer de tour, après tout quand on joue 
	contre l'ordi, l'ordi joue forcément, et en Joueur contre Joueur, 
	à priori les 2 joueurs sont présents
	
	> Compléter Personnage, Jeu et GladiusAiguise/GladiusEmpoisonne
	> Changer le nom de la classe "Velites" à "Velite", le précédent étant un pluriel
	> Supprimer la classe Assommement, pas utile

##### Patterns :
	Rien n'est fixe, ce ne sont que des propositions pour l'instant
	
	# STATE (et/ou OBSERVER) :
	interviendrait lorsqu'un Personnage subit un effet 
	
	# FACTORY :
	interviendrait lors de la création automatique d'un Personnage en fonction du Type sélectionné
	
	# DECORATOR :
	interviendrait pour la création d'armes à Effet (ex: Gladius empoisonné)
