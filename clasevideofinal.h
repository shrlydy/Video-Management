// A01540618 Dylan Pereyra
#ifndef CLASEVIDEO_H //Los archivos de encabezado (clasevideo.h y clasederivada.h) usan la directiva #ifndef.
#define CLASEVIDEO_H

#include <iostream>
#include <string>

using namespace std;
//clase base video
class video {
protected:
    string ID;
    string nombre;
    int duracion; // en minutos
    string genero;
    float calificacion;
    int numCalificaciones;
    string descripcion;

public:
// Constructor
    video(string ID_, string nombre_, int duracion_, string genero_, float calificacion_, string descripcion_);
    virtual ~video();// Destructor virtual
// Métodos
    void mostrardescripcion();
    virtual void mostrarinfovideo(); // Método virtual
    void mostrarcalificacion();
    void calificarvideo(float nuevaCalificacion);
    float obtenerCalificacionPromedio() const;
    string getNombre() const;
    string getGenero() const;
    //Las variables miembro de ambas clases (video y videoSerie) son private o protected, y el acceso a ellas se realiza a través de métodos públicos.

    // sobrecarga de operadores y funciones amigas
    friend bool operator > (const video &object1, const video &object2); //El operador > se sobrecarga para comparar objetos de la clase video.
};

#endif // CLASEVIDEO_H