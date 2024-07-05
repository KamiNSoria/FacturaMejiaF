#include <stdio.h>
#include <stdlib.h>
#include "lectura.h"
#include "operacion.h"

  #define MAX_PRODUCTS 100

  int main (int args, char *argv[]) 
{

  int opcionSeleccionada = 0;
  int x;
  char nomb[Max][N];
   char nombcli[Max][N];
  int cedula[10];
  int cantidades[Max];
  float precio[Max];  
  int stock[Max];
   int numeroProducto=0;
      char *productoTemporal;
  char Buscar[N];
  int salir, buscar;

      char *productos[MAX_PRODUCTS]; 

      while (opcionSeleccionada != 4)
      {
          printf("1. Inventario de producto.\n");
          printf("2. Inventario de clientes.\n");
          printf("3. Inventario de factura.\n");
          printf("4. Salir.\n");

          printf("----------------------------------------------------");
            printf("Ingrese una opción:");
          
          char opcionSeleccionadaTemporal[4];  // Declare a character array
          fgets(opcionSeleccionadaTemporal, 4, stdin); // Pass the array's address

          // Now you can convert the input to an integer
          opcionSeleccionada = atoi(opcionSeleccionadaTemporal);


        switch (opcionSeleccionada) {
          case 1: // Inventario de producto
            {
              int submenuOption = 0;
              while (submenuOption != 6) {
                printf("1. Ingresar producto.\n");
                printf("2. Modificar producto.\n");
                printf("3. Eliminar producto.\n");
                printf("4. Consultar producto.\n");
                printf("5. Adicionar producto.\n");
                printf("6. Salir.\n");
                printf("----------------------------------------------------");
                printf("Ingrese una opción:");
                
                char submenuOptionTemporal[6]; 
                fgets(submenuOptionTemporal, 6, stdin); 
                submenuOption = atoi(submenuOptionTemporal);
                switch (submenuOption) {
                  case 1:
                    printf("Ingresar producto:\n"); 
                    // Implement product addition logic here
                     numeroProducto = leerEnteroPositivo("Numero de productos que desea ingresar: ");
ingresarProductos(numeroProducto,nomb, cantidades, precio, stock);
                    printf("\n----------------------Informacion de Productos ----------------------\n");

mostrarProductos(numeroProducto,nomb, cantidades,  precio, stock);

                    break;
                  case 2:
                    printf("Editar producto:\n"); // Implement product editing logic here
                    buscar= leerEntero("Desea editar productos (Si = 1, No = 0)");
                    if(buscar ==1){
                      do{
                        BuscarEdiarProducto(nomb, numeroProducto, Buscar, N,stock, cantidades, precio);
                        mostrarProductos(numeroProducto,nomb, cantidades,  precio, stock);

                        salir = leerEntero("Deseas seguir buscando (Si = 1, No = 0)");
                      }while(salir!=0);
                    }

                    
                    break;
                  case 3:
                    printf("Eliminar producto:\n"); // Implement product deletion logic here
                    
                    buscar= leerEntero("Desea eliminar productos (Si = 1, No = 0)");
                    if(buscar ==1){
                      do{
                        BuscarEliminarProducto(nomb, numeroProducto, Buscar, N,cantidades, precio, stock);
                        mostrarProductos(numeroProducto,nomb, cantidades,  precio, stock);

                        salir = leerEntero("Deseas seguir buscando (Si = 1, No = 0)");
                      }while(salir!=0);
                    }


                    break;
                  case 4:
                    printf("Consutar Producto:\n");
                    buscar= leerEntero("Desea buscar productos (Si = 1, No = 0)");
                    if(buscar ==1){
                      do{
                        BuscarProducto(nomb, numeroProducto, Buscar, N);
                        mostrarProductos(numeroProducto,nomb, cantidades,  precio, stock);

                        salir = leerEntero("Deseas seguir buscando (Si = 1, No = 0)");
                      }while(salir!=0);
                    }

                    break;
                  case 5:
                    printf("Agregar Producto:\n"); 
                int    numeroProducto1 = leerEnteroPositivo("Numero de productos que desea ingresar: ");
                    AgregarProductos(numeroProducto,numeroProducto1,nomb, cantidades, precio, stock);
                                        printf("\n----------------------Informacion de Productos ----------------------\n");

                    mostrarProductos(numeroProducto,nomb, cantidades,  precio, stock);

                    
                  break;
                  case 6:
                  printf("Saliendo del inventario de productos...\n");
                  break;
                  default:
                    printf("Opción inválida.\n");
                }
              }
            }
    
            break;
          case 2:
            {//clientes
        int submenuOption1 = 0;
        while (submenuOption1 != 5) {
      printf("1. Ingresar cliente.\n");
      printf("2. Modificar cliente.\n");
      printf("3. Eliminar cliente.\n");
      printf("4. Consultar ciente.\n");
      printf("5. Salir.\n");
  printf("----------------------------------------------------");
  printf("Ingrese una opción:");
char submenuOptionTemporal[5]; 
fgets(submenuOptionTemporal, 5, stdin); 
  submenuOption1 = atoi(submenuOptionTemporal);
switch (submenuOption1) {
    case 1:
      printf("Ingresar cliente:\n"); 
    
  int numeroCliente = leerEnteroPositivo("Numero de clientes que desea ingresar: ");
  ingresarClientes(numeroCliente,nombcli, cedula);
  printf("\n----------------------Informacion de Cliente ----------------------\n");

    mostrarClientes(numeroCliente,nombcli, cedula);
      
      break;
          case 2:
          break;
          case 3:
          break;
          case 4:
          break;
          case 5:
          printf("Saliendo del inventario de clientes...\n");
              
           
          break;
  }
case 3:
            printf("Inventario de factura:\n"); // Implement invoice inventory logic here
            break;
          case 4:
            printf("Saliendo del programa...\n");
            break;
          default:
            printf("Opción inválida.\n");
        
        
        return 0;
}
              }
          }
        
      }
  }
