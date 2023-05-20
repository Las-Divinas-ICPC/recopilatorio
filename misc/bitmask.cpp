// Checar i-ésimo bit
if(x & (1 << i));
// Girar i-ésimo bit
x ^ (1 << i);
// cantidad de bits encendidos
__builtin_popcount(x);
// 1 si la cantidad de bits es impar, 0 si par
__builtin_parity(x);
// Cantidad de 0's a la izquierda del MSB
__builtin_clz(x);
// Cantidad de 0's a la derecha del LSB
__builtin_ctz(x);
