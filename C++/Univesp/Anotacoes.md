# **Estruturas de Dados**

## **Arvores AVL**

### **Fator de Balanceamento**

Diferença de altura entre as subárvores direita e esquerda. Em árvores AVL, em todos os vértices, e na árvore toda, o fator deve ficar entre -1 e 1.
Se um nó violar a propriedade do fator de balanceamento, deve ser feita uma [rotação](https://youtu.be/1JKucLqAPZ8?t=364)

## **Grafos**

Em grafos direcionados, self-looping são permitidos e as duas arestas - de entrada e saída - contam na soma do grau do nó/vértice.

### **Busca em Profundidade**

Consiste em aprofundar no grafo sempre que possível. Se estamos em um nó que possui um caminho ainda não percorrido, seguimos por esse caminho; se já percorremos tudo ao redor, voltamos ao vértice anterior (backtracking).

### **Busca em Largura**

Explorar uma área sem se afastar do ponto inicial. Se não achamos o que queríamos, nos aprofundamos. Procuramos pelo caminho mais curto primeiro - o "curto" não considera o peso das arestas.
