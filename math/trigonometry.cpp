
#include <cmath>

// Radianes a grados
double rad2deg(double rad) {
    return rad * 180.0 / M_PI;
}

// Grados a radianes
double deg2rad(double deg) {
    return deg * M_PI / 180.0;
}

// Ejemplo de uso de funciones trigonométricas
double sin(double deg) {
    return std::sin(deg2rad(deg));
}