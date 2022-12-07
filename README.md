[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-f4981d0f882b2a3f0472912d15f9806d57e124e0fc890972558857b51b24a6f9.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=9572822)
## Зад 1.
Разглеждаме "големи" цели положителни числа, представели свързан списък, обърнат, т.е. стойноста на единиците е първото число в този списък.
Пример за такова число е 123456789012, като то се представя като
 * 2->1->0->9->8->7->6->5->4->3->2->1 

Да се дефинира функция sum, която намира сумата на 2 такива дълги числа.

## Зад 2.

Да се дефинира функция mirror, която добавя към свързан списък неговото огледално копие

Пример:
* 1->4->5 ==> 1->4->5->5->4->1

## Зад 3.

Да се дефинира функция mirror, която добавя към двойно свързан списък неговото огледално копие

Пример:
* 1<->4<->5 ==> 1<->4<->5<->5<->4<->1


## Зад 4.
Разглеждаме множество от цели положителни числа. 
Искаме да ги сложим в кутийки (списък от списъци), като всяка следваща кутия съдържа следващите N числа по стойност.
Всяка една кутия се представя като свързан списък.

* Пример

(1, 14, 15, 60, 90, 63, 89) N=10

| 1-10 	| 11-20 	| 21-30 	| 31-40 	| 41-50 	| 51-60 	| 61-70 	| 71-80 	| 81-90 	|
|------	|-------	|-------	|-------	|-------	|-------	|-------	|-------	|-------	|
| 1    	| 15    	|       	|       	|       	| 60    	| 63    	|       	| 89    	|
|      	| 14    	|       	|       	|       	|       	|       	|       	| 90    	|
|      	|       	|       	|       	|       	|       	|       	|       	|       	|
