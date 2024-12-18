
# swap
	Swap el primer y ultino elemento 
<mark style="background: #FF5582A6;">sa</mark> swap a: Intercambia los dos primeros elementos del stack a. No hace nada si
hay uno o menos elementos.

<mark style="background: #FF5582A6;">sb</mark> swap b: Intercambia los dos primeros elementos del stack b. No hace nada si
hay uno o menos elementos.

<mark style="background: #FF5582A6;">ss</mark> swap a y swap b a la vez.

# push
	Mueve un elemento al otro stack
<mark style="background: #FF5582A6;">pa</mark> push a: Toma el primer elemento del stack b y lo pone el primero en el stack
a. No hace nada si b está vacío.

<mark style="background: #FF5582A6;">pb</mark> push b: Toma el primer elemento del stack a y lo pone el primero en el stack
b. No hace nada si a está vacío.

# rotate
	el primer elemento se convierte en el último
	
<mark style="background: #FF5582A6;">ra</mark> rotate a: Desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.

<mark style="background: #FF5582A6;">rb</mark> rotate b: Desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.

<mark style="background: #FF5582A6;">rr</mark> ra y rb al mismo tiempo.


# reverse rotate
	último elemento se convierte en el primero.
	
<mark style="background: #FF5582A6;">rra</mark> reverse rotate a: El último elemento del stack a se convierte en el primero.

<mark style="background: #FF5582A6;">rrb</mark> reverse rotate b: stack b último elemento se convierte en el primero.

<mark style="background: #FF5582A6;">rrr</mark> rra y rrb al l




# task list
- [ ] algorithm <mark style="background: #FF5582A6;">k-sort</mark>
	- [x] understand quick sort
	- [ ] understand k-sort from repo or equal source 
		- [x] generate call graph / minimap
			- too confusing 
		- debug and follow step by step what happens and what teh variables are 
	- [ ] 

## arguments 

what we have 
$./push_swap 2 1 3 6 5 8
	argc: 6
	argv:\["2", "1", "3", "6", "5", "8"\]

what we want:
<mark style="background: #24db67;">t_node</mark> {
	value: 2
	\*next: <mark style="background: #24db67;">t_node</mark> {
		value: 1
		\*next:  <mark style="background: #24db67;">t_node</mark> {
			value: 3
			\*next: ...
		}
	}
}

- [ ] FIX SSH KEYS FOR:
	- [ ] VPS 
	- [x] INTRA




Añadir al task list l o primero la estructura básica y pseudocodigo 



---
 primero crear una carpeta de parseo antes de nada para llegar a los valores 
 **

HACER LA ESTRUCTURA INICIAL ANTES DE NADA 