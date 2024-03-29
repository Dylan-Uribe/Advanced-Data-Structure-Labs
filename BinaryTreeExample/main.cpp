// EDA_Arboles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>


typedef std::string Tipoelemento;
//typedef int Tipoelemento;
class Nodo
{
protected:
    Tipoelemento dato;
    Nodo* izdo;
    Nodo* dcho;
public:
    Nodo(Tipoelemento valor)
    {
        dato = valor;
        izdo = dcho = NULL;
    }
    Nodo(Nodo* ramaIzdo, Tipoelemento valor, Nodo* ramaDcho)
    {
        dato = valor;
        izdo = ramaIzdo;
        dcho = ramaDcho;
    }
    // operaciones de acceso
    Tipoelemento valorNodo() { return dato; }
    Nodo* subarbolIzdo() { return izdo; }
    Nodo* subarbolDcho() { return dcho; }
    // operaciones de modificación
    void nuevoValor(Tipoelemento d) { dato = d; }
    void ramaIzdo(Nodo* n) { izdo = n; }
    void ramaDcho(Nodo* n) { dcho = n; }
    void visitar()
    {
        std::cout << dato << " \n";
    }
};

class ArbolBinario
{
protected:
    Nodo* raiz;
public:
    ArbolBinario()
    {
        raiz = NULL;
    }
    ArbolBinario(Nodo* r)
    {
        raiz = r;
    }
    void Praiz(Nodo* r)
    {
        raiz = r;
    }
    Nodo* Oraiz()
    {
        return raiz;
    }
    Nodo raizArbol()
    {
        if (raiz)
            return *raiz;
        else
            throw " arbol vacio";
        std::cout << " arbol vacio";
    }
    bool esVacio()
    {
        return raiz == NULL;
        std::cout << " arbol vacio";
    }
    Nodo* hijoIzdo()
    {
        if (raiz)
            return raiz->subarbolIzdo();
        else
            throw " arbol vacio";
        std::cout << " arbol vacio";

    }
    Nodo* hijoDcho()
    {
        if (raiz)
            return raiz->subarbolDcho();
        else
            throw " arbol vacio";
        std::cout << " arbol vacio";
    }
    Nodo* nuevoArbol(Nodo* ramaIzqda, Tipoelemento dato, Nodo* ramaDrcha)
    {
        return new Nodo(ramaIzqda, dato, ramaDrcha);
    }
    // recorrido en preorden
    void preorden()
    {
        preorden(raiz);
    }
    // recorrido en ineorden
    void inorden()
    {
        inorden(raiz);
    }
    // recorrido en postorden
    void postorden()
    {
        postorden(raiz);
    }
private:
    // Recorrido de un árbol binario en preorden
    void preorden(Nodo* r)
    {
        if (r != NULL)
        {
            r->visitar();
            preorden(r->subarbolIzdo());
            preorden(r->subarbolDcho());
        }
    };
    // Recorrido de un árbol binario en inorden
    void inorden(Nodo* r)
    {
        if (r != NULL)
        {
            inorden(r->subarbolIzdo());
            r->visitar();
            inorden(r->subarbolDcho());
        }
    }
    // Recorrido de un árbol binario en postorden
    void postorden(Nodo* r)
    {
        if (r != NULL)
        {
            postorden(r->subarbolIzdo());
            postorden(r->subarbolDcho());
            r->visitar();
        }
    }
};

/* Menu
---------------------------------------------------------------------*/
void menu()
{
    std::cout << "\n\tTRABAJANDIO CON ARBOLES:\n\n";
    std::cout << "1.- Crear el arbol" << std::endl;
    std::cout << "2.- Insertar nodos en el arbol" << std::endl;
    std::cout << "3.- Recorrido en preorden" << std::endl;
    std::cout << "4.- Recorrido en entre orden" << std::endl;
    std::cout << "5.- Recorrido en post orden" << std::endl;
    std::cout << "6.- Esta vacio el arbol?" << std::endl;
    std::cout << "7.- Cual es la raiz del arbol?" << std::endl;
    std::cout << "0.- Salir" << std::endl;
    std::cout << "\n INGRESE OPCION: ";
}


int main()
{
    int op;
    system("color 0b");
    ArbolBinario a1, a2, a3, a4, a;
    Nodo* n1, * n2, * n3, * n4;

    do
    {
        menu();
        std::cin >> op;
        switch (op)
        {
        case 1:
            /*
                        n1 = a1.nuevoArbol(NULL, 0, NULL);
                        n2 = a2.nuevoArbol(NULL, 1, NULL);
                        n3 = a3.nuevoArbol(n1, 2, n2);
                        n1 = a1.nuevoArbol(NULL, 3, NULL);
                        n2 = a2.nuevoArbol(NULL, 4, NULL);
                        n4 = a4.nuevoArbol(n1, 5, n2);
                        n1 = a1.nuevoArbol(n3, 6, n4);
            */

            /*
                        n1 = a1.nuevoArbol(NULL, "Maria", NULL);
                        n2 = a2.nuevoArbol(NULL, "Rodrigo", NULL);
                        n3 = a3.nuevoArbol(n1, "Esperanza", n2);
                        n1 = a1.nuevoArbol(NULL, "Anyora", NULL);
                        n2 = a2.nuevoArbol(NULL, "Abel", NULL);
                        n4 = a4.nuevoArbol(n1, "M Jesus", n2);
                        n1 = a1.nuevoArbol(n3, "Esperanza", n4);
            */
            n1 = a1.nuevoArbol(NULL, "A", NULL);
            n2 = a2.nuevoArbol(NULL, "B", NULL);
            n3 = a3.nuevoArbol(n1, "C", n2);
            n1 = a1.nuevoArbol(NULL, "D", NULL);
            n2 = a2.nuevoArbol(NULL, "E", NULL);
            n4 = a4.nuevoArbol(n1, "F", n2);
            n1 = a1.nuevoArbol(n3, "G", n4);

            a.Praiz(n1);
            a.esVacio();
            std::cout << "Hemos creado el arbol\n";
            std::cout << "Cualquier tecla para continuar...\n";
            break;
        case 2:
            std::cout << "Que elementos insertaremos?\n";
            std::cout << "Cualquier tecla para continuar...\n";
            break;
        case 3:
            std::cout << "El arbol recorrido en pre orden se ve asi\n";
            a.preorden();
            std::cout << "Cualquier tecla para continuar...\n";
            break;
        case 4:
            std::cout << "El arbol recorrido en entre orden se ve asi\n";
            a.inorden();
            std::cout << "Cualquier tecla para continuar...\n";
            break;
        case 5:
            std::cout << "El arbol recorrido en post orden se ve asi\n";
            a.postorden();
            std::cout << "Cualquier tecla para continuar...\n";
            break;
        case 6:
            if (a.esVacio())
            {
                std::cout << "El arbol esta vacio\n";
            }
            else
            {
                std::cout << "El arbol no esta vacio\n";
            }
            break;
        case 7:
            if (a.esVacio())
            {
                std::cout << "El arbol esta vacio\n";
            }
            else
            {
                std::cout << "La raiz del arbol es:\n";
                a.raizArbol();
                a.raizArbol().visitar();
            }
            break;
        }
        std::cout << std::endl << std::endl;
        system("pause"); system("cls");
    } while (op != 0);
    getchar();
    return 0;
}


