#define N 50
#define Max 50
#define COLUM 7
//tabla productos
void ingresarProductos(int 

numeroProducto, char nomb[][N], int cantidad[], float precio[], int stock[]);
void mostrarProductos(int numeroProducto,char nomb[][N], int cantidades[], float precios[], int stock[]);
void BuscarEdiarProducto(char nomb[][N], int numeroProducto, char Buscar[], int nombre, int stock[],int cantidad[],float precio[]);
void BuscarEliminarProducto(char nomb[][N], int numeroProducto, char Buscar[], int nombre, int cantidad[], float precio[], int stock[]);
void AgregarProductos(int numeroProducto, int numeroProducto1, char nomb[][N], int cantidad[], float precio[], int stock[]);
void BuscarProducto(char nomb[][N], int numeroProducto, char Buscar[], int nombre);

//tabla clientes

void ingresarClientes(int numeroCliente, char nomb[][N], int cedula[]);
void mostrarClientes(int numeroCli,char nombcli[][N],int cedula[]);


//tabla factura
