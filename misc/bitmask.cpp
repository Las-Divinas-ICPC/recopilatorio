// Checar i-esimo bit
if(x & (1 << i));
// Girar i-esimo bit
x ^ (1 << i);
// Valor del LSB
x & (-x);

// Iterar sobre todos los subsets no vacios de la mascara
for(int s=0;s=s-x&x;); // Creciente
for(int s=x; s; s=(s-1)&x); // Decreciente

// Cantidad de bits encendidos
__builtin_popcount(x);
// 1 si la cantidad de bits es impar, 0 si par
__builtin_parity(x);
// Cantidad de 0's a la izquierda del MSB
__builtin_clz(x);
// Cantidad de 0's a la derecha del LSB
__builtin_ctz(x);
// Para usar las funciones con long long's solo agregar ll al final
__builtin_popcountll(xll);
