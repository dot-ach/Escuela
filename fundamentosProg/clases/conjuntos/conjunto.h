#define MAX_SIZE 100

typedef struct conjunto
{
  int C[MAX_SIZE];
  int size;
}conjunto;

void InicializarConjunto(conjunto *A);
void AgregarElemento(conjunto *A, int e);
void EliminarElemento(conjunto *A, int e);
int PerteneceElemento(conjunto *A, int e);
void ImprimeConjunto(conjunto *A);