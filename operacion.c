#include <stdio.h>
#include <string.h>
#include "operacion.h"
#include "lectura.h"

void ingresarProductos(int numeroProducto, char nomb[][N], int cantidad[], float precio[], int stock[]) {
    for (int i = 0; i < numeroProducto; i++) {
        printf(" Producto %d :\n", i + 1);
        printf("Nombre: ");
        getchar(); 
        fgets(nomb[i], N, stdin);
        nomb[i][strcspn(nomb[i], "\n")] = '\0';  
        cantidad[i]= leerEnteroPositivo("Cantidad: ");
        precio[i]=leerFlotantePositivo("Precio unitario: ");
        stock[i]=leerEnteroPositivo("Stock: ");
        
    }
}

void AgregarProductos(int numeroProducto, int numeroProducto1, char nomb[][N], int cantidad[], float precio[], int stock[]) {

    for (int i = 0; i < numeroProducto1; i++) {
    printf("Producto %d:\n", numeroProducto + i + 1);

        printf("Nombre: ");
        getchar();  // Limpiar el buffer del teclado
        fgets(nomb[i+1+numeroProducto], N, stdin);
        nomb[i+1+numeroProducto][strcspn(nomb[i], "\n")] = '\0';  
        cantidad[i]= leerEnteroPositivo("Cantidad: ");
        precio[i]=leerFlotantePositivo("Precio unitario: ");
        stock[i]=leerEnteroPositivo("Stock: ");
        
    }
    
}

void mostrarProductos(int numeroProducto,char nomb[][N], int cantidades[], float precios[], int stock[]) {
    printf("%-15s %8s %10s %11s \n", "Nombre", "Cantidad", "Precio", "Stock");
    printf("------------------------------------------------------------------------\n");
    for (int i = 0; i < numeroProducto; i++) {
        printf("%-15s %8d %10.2f %10d \n", nomb[i], cantidades[i], precios[i], stock[i]);
    }
    printf("------------------------------------------------------------------------\n");
    // Write data to a file
    FILE *fptr = fopen("products.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return; // Exit the function if there's an error
    }
    for (int i = 0; i < numeroProducto; i++) {
        fprintf(fptr, "%-15s %8d %10.2f %10d\n", nomb[i], cantidades[i], precios[i], stock[i]);
    }
    fclose(fptr);
}

void BuscarEdiarProducto(char nomb[][N], int numeroProducto, char Buscar[], int nombre, int stock[],int cantidad[],float precio[]) {
    printf("Ingrese el nombre a buscar: ");
    getchar();  
    fgets(Buscar, nombre, stdin);
    Buscar[strcspn(Buscar, "\n")] = '\0';  
    int encontrado = 0; 
    for (int i = 0; i < numeroProducto; i++) {
        if (strcmp(nomb[i], Buscar) == 0) {
            printf("Encontrado ingrese el nuevo producto\n");
        cantidad[i]= leerEnteroPositivo("Cantidad: ");
    precio[i]=leerFlotantePositivo("Precio unitario: ");
            stock[i]=leerEnteroPositivo("Stock: ");
            
            encontrado = 1;
            break; 
        }
    }

    if (!encontrado) {
        printf("No Encontrado\n");
    }
}

void BuscarProducto(char nomb[][N], int numeroProducto, char Buscar[], int nombre) {
    printf("Ingrese el nombre a buscar: ");
    getchar();  
    fgets(Buscar, nombre, stdin);
    Buscar[strcspn(Buscar, "\n")] = '\0';  
    int encontrado = 0; 
    for (int i = 0; i < numeroProducto; i++) {
        if (strcmp(nomb[i], Buscar) == 0) {
            printf("Encontrado \n");
        
            encontrado = 1;
            break; 
        }
    }

    if (!encontrado) {
        printf("No Encontrado\n");
    }
}

void BuscarEliminarProducto(char nomb[][N], int numeroProducto, char Buscar[], int nombre, int cantidad[], float precio[], int stock[]) {
    printf("Ingrese el nombre a buscar: ");
    getchar();  
    fgets(Buscar, nombre, stdin);
    Buscar[strcspn(Buscar, "\n")] = '\0';  
    int encontrado = 0; 
    for (int i = 0; i < numeroProducto; i++) {
        if (strcmp(nomb[i], Buscar) == 0) {
            printf("Encontrado desea eliminar el prodcuto\n");
            
            for (int j = i; j < numeroProducto - 1; j++) {
                        strcpy(nomb[j], nomb[j + 1]);
                        cantidad[j] = cantidad[j + 1];
                        precio[j] = precio[j + 1];
                        stock[j] = stock[j + 1];
                    }
                    // Null out the last element
                    strcpy(nomb[numeroProducto - 1], "");
                    cantidad[numeroProducto - 1] = 0;
                    precio[numeroProducto - 1] = 0;
                    stock[numeroProducto - 1] = 0;

                    encontrado = 1;
                    break; 
                }
            }
    if (!encontrado) {
        printf("No Encontrado\n");
    }
}
    
//clientes
void ingresarClientes(int numeroCliente, char nombcli[][N], int cedula[]) {
    for (int i = 0; i < numeroCliente; i++) {
        printf(" Cliente %d :\n", i + 1);
        printf("Nombre: ");
        getchar(); 
        fgets(nombcli[i], N, stdin);
        nombcli[i][strcspn(nombcli[i], "\n")] = '\0';  
        cedula[i]= leerEnteroPositivo("Cedula: ");
        //while (cedula_existe(cedula[i], cedula, i));
      //if (cedula_existe(cedula[i], cedula, i)) {
        //printf("Error: La cédula ya existe.\n");
         // Exit if the cedula already exists
      //}
    }
}

void mostrarClientes(int numeroCli,char nombcli[][N], int cedula[]) {
    printf("%-15s %8s  \n", "Nombre", "Cedula");
    printf("------------------------------------------------------------------------\n");
    for (int i = 0; i < numeroCli; i++) {
        printf("%-15s %8d  \n", nombcli[i], cedula[i]);
    }
    printf("------------------------------------------------------------------------\n");
    // Write data to a file
    FILE *fptr = fopen("clientes.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return; // Exit the function if there's an error
    }
    for (int i = 0; i < numeroCli; i++) {
        fprintf(fptr, "%-15s %8d \n", nombcli[i], cedula[i]);
    }
    fclose(fptr);
}

//factura
    
