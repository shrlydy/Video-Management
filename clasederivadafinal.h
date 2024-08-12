
#ifndef CLASEDERIVADA_H
#define CLASEDERIVADA_H
//Los archivos de encabezado (clasevideo.h y clasederivada.h) usan la directiva #ifndef.
#include "clasevideofinal.h"
#include <vector>
//clase derivada videoSerie
class videoSerie : public video {
private:
    string nombreSerie;
    vector<video*> episodios; // Vector de punteros a video
    string temporada;

public:
// Constructor
    videoSerie(string ID = "", string nombreSerie = "", int tiempo = 0, string genero = "", float calificacion = 0.0, string descripcion = "", string temporada = "");
    ~videoSerie(); // Destructor para liberar memoria
    // Métodos redefinidos
    void agregarEpisodio(video* episodio); // Cambiar a puntero
    void mostrarinfovideo() override; // Sobrescritura del método virtual, El método mostrarinfovideo de la clase base video se redefine en la clase derivada videoSerie.
    void mostrarEpisodios(); // Mostrar todos los episodios
};

#endif // CLASEDERIVADA_H
