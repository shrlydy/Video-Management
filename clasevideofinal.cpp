#include "clasevideofinal.h"
// Constructor para la clase pelicula
video::video(string ID_, string nombre_, int duracion_, string genero_, float calificacion_, string descripcion_)
    : ID(ID_), nombre(nombre_), duracion(duracion_), genero(genero_), calificacion(calificacion_), numCalificaciones(1), descripcion(descripcion_) {}

video::~video() {}
// Descripción de la pelicula
void video::mostrardescripcion() {
    cout << "Descripción: " << descripcion << endl;
}
// Información de la pelicula
void video::mostrarinfovideo() {
    cout << "ID: " << ID << "\nNombre: " << nombre << "\nDuración: " << duracion << " minutos"
         << "\nGénero: " << genero << "\nCalificación: " << calificacion << "\nDescripción: " << descripcion << endl;
}
// Mostrar calificación
void video::mostrarcalificacion() {
    cout << "Calificación: " << calificacion << endl;
}
// Calificar pelicula
void video::calificarvideo(float nuevaCalificacion) {
    calificacion = (calificacion * numCalificaciones + nuevaCalificacion) / (numCalificaciones + 1);
    numCalificaciones++;
}
// Obtener calificación promedio
float video::obtenerCalificacionPromedio() const {
    return calificacion;
}

string video::getNombre() const {
    return nombre;
}

string video::getGenero() const {
    return genero;
}
//Sobrecarga de operadores 
bool operator > (const video &object1, const video &object2) {
    return object1.calificacion > object2.calificacion;
}
