// Purpose: Implementacion de la clase derivada videoSerie
#include "clasederivadafinal.h"

// Constructor
videoSerie::videoSerie(string ID, string nombreSerie, int tiempo, string genero, float calificacion, string descripcion, string temporada)
    : video(ID, nombreSerie, tiempo, genero, calificacion, descripcion), nombreSerie(nombreSerie), temporada(temporada) {}

videoSerie::~videoSerie() {
    for (video* episodio : episodios) {
        delete episodio; // Liberar memoria
    }
}

void videoSerie::agregarEpisodio(video* episodio) {
    episodios.push_back(episodio);
}

//datos de la serie
void videoSerie::mostrarinfovideo() {
    cout << "Nombre de la Serie: " << nombreSerie
         << "\nGénero: " << genero
         << "\nCalificación: " << obtenerCalificacionPromedio()
         << "\nTemporada: " << temporada << endl;
    mostrarEpisodios();
}
//episodios de la serie
void videoSerie::mostrarEpisodios() {
    cout << "Episodios:\n";
    for (const auto& episodio : episodios) {
        episodio->mostrarinfovideo();
    }
}
