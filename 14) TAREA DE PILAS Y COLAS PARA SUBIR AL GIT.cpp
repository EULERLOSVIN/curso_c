

//                               FECHA:   26/03/2023

//DECLARAR UNA PILA Y UNA COLA DE TIPO INT  LUEGO ALMACENAR DATOS EN LA PILA E IMPRIMIR LOS DATOS DE LA PILA.TAMBIEN SE DEBE TRASLADAR LOS DATOS DE LA PILA A LA COLA


#include <iostream>
#include <stack>  //pilas=stack
#include <queue>  //colas=queue

using namespace std;

int main() {

   system("cls");
   stack<int> mi_pila;   // Definir la pila
   queue<int> mi_cola;   // Definir la cola
   
   mi_pila.push(10);     // Añadir elementos a la pila
   mi_pila.push(20);
   mi_pila.push(30);
   mi_pila.push(40);
   mi_pila.push(50);
   
   cout << "LOS VALORES DE LA PILA SON: ";
   while(!mi_pila.empty()) { // Iterar hasta que la pila esté vacía
      cout << mi_pila.top() << " "; // Obtener el valor en la parte superior de la pila
      mi_cola.push(mi_pila.top()); // Añadir el valor en la cola
      mi_pila.pop(); // Eliminar el valor de la pila
   }
   cout<<endl;
   cout << "\nLOS VALORES DE LA COLA SON: ";
   while(!mi_cola.empty()) { // Iterar hasta que la cola esté vacía
      cout << mi_cola.front() << " "; // Obtener el valor en el frente de la cola
      mi_cola.pop(); // Eliminar el valor de la cola
   }

   cout<<endl<<endl<<endl;
   
   return 0;
}