
#include "clasevideofinal.h"
#include "clasederivadafinal.h"
#include <iostream>
#include <vector>

using namespace std;

void mostrarBiblioteca(const vector<video*>& biblioteca) {
    cout << "Biblioteca:\n";
    for (size_t i = 0; i < biblioteca.size(); ++i) {
        cout << i + 1 << ". " << biblioteca[i]->getNombre() << " (" << biblioteca[i]->getGenero() << ")\n";
    }
}

int main() {
    // Películas
    vector<video*> peliculas = {
        new video("001", "The Butterfly Effect", 120, "Acción", 4.5, "A young psychology student travels back in time to transform the past and alter the future of his friends."),
        new video("002", "Coraline", 100, "Animación", 4.6, "A girl discovers a secret door in her new house and enters an alternate reality that accurately reflects her in many ways."),
        new video("003", "Paranorman", 93, "Animación", 5.0, "When the small town where Norman lives is besieged by zombies, its inhabitants can only turn to the misunderstood Norman, who knows how to talk to the dead."),
        new video("004", "Hereditary", 127, "Horror", 4.0, "After the death of the Graham family matriarch, her daughter, Annie, moves into the house with her family. Annie hopes to forget the problems she had in her childhood there, but everything goes wrong when her daughter starts seeing ghostly figures."),
        new video("005", "Lords of Chaos", 127, "Drama", 4.0, "A teenager's quest to launch Norwegian Black Metal in Oslo in the early 1990s results in a very violent outcome.")
    };

    // Series con episodios
    videoSerie* s1 = new videoSerie("006", "Chernobyl", 59, "Drama", 4.4, "Brave men and women fight to mitigate the damage from the Chernobyl nuclear disaster that occurred on April 25, 1986.", "Temporada 1");
    s1->agregarEpisodio(new video("006-1", "1:23:45", 59, "Drama", 4.4, "Plant workers and firefighters try to control a catastrophic explosion at the Chernobyl nuclear power plant on April 26, 1986 in the USSR."));
    s1->agregarEpisodio(new video("006-2", "Please Remain Calm", 65, "Drama", 4.5, "With millions at risk after the explosion, Ulana Khomyuk tries to warn Legasov about a second threat."));
    s1->agregarEpisodio(new video("006-3", "Open Wide, O Earth", 62, "Drama", 4.6, "Lyudmilla ignores warnings about her firefighter husband's contamination."));

    videoSerie* s2 = new videoSerie("007", "Stranger Things", 51, "Ciencia Ficción", 4.8, "When a boy goes missing, his friends, family, and the police become involved in a series of mysterious events while trying to find him. His absence coincides with the sighting of a terrifying creature and the appearance of a strange girl.", "Temporada 4");
    s2->agregarEpisodio(new video("007-1", "The Hellfire Club", 78, "Ciencia Ficción", 4.8, "El is bullied at school, but cannot defend himself. Joyce opens a mysterious package. In Hawkins, someone is stirring up Dungeons and Dragons night."));
    s2->agregarEpisodio(new video("007-2", "Vecna's Curse", 78, "Ciencia Ficción", 4.7, "As Mike arrives in California, a dead body leaves Hawkins paralyzed. Nancy looks for clues. Eddie, shocked, tells the others what he saw."));
    s2->agregarEpisodio(new video("007-3", "The Monster and the Superhero", 64, "Ciencia Ficción", 4.9, "*Joyce travels to Alaska with Murray. He faces serious consequences. Robin and Nancy discover the secrets of Hawkins' demons. Dr. Owens brings strong news."));

    videoSerie* s3 = new videoSerie("008", "Regular Show", 11, "Comedia", 3.5, "surreal misadventures of two best friends - a blue jay and a raccoon - as they seek to liven up their mundane jobs as groundskeepers at the local park.", "Temporada 1");
    s3->agregarEpisodio(new video("008-1", "The Power", 11, "Comedia", 3.5, "Mordecai and Rigby find a mysterious keyboard that allows them to do anything they want, including accidentally sending Benson to the moon."));
    s3->agregarEpisodio(new video("008-2", "Just Set Up the Chairs", 11, "Comedia", 3.6, "Mordecai and Rigby get distracted while setting up chairs for a kid's birthday party and unleash a monster that terrorizes the entire park."));
    s3->agregarEpisodio(new video("008-3", "Caffeinated Concert Tickets", 12, "Comedia", 3.7, "Mordecai and Rigby make a deal with a Coffee Bean to help them stay awake to work major overtime to pay for concert tickets."));

    videoSerie* s4 = new videoSerie("009", "Dahmer", 52, "Crimen", 4.4, "The story of the Milwaukee monster, told from the perspective of the victims and the police incompetence, that allowed the Wisconsin native to launch a multi-year criminal career", "Temporada 1");
    s4->agregarEpisodio(new video("009-1", "Please Don't Go", 52, "Crimen", 4.4, "After throwing his neighbor off the stench coming from his apartment, Jeff heads to a local bar, where a stranger takes him up on a tempting offer."));
    s4->agregarEpisodio(new video("009-2", "Silenced", 50, "Crimen", 4.5, "Aspiring model Tony moves to Madison and meets Jeff at a bar, beginning a relationship through handwritten notes that takes a dark turn"));
    s4->agregarEpisodio(new video("009-3", "God of Forgiveness, God of Vengeance", 51, "Crimen", 4.6, "In prison, Jeff's newfound fame makes him a target. His parents seek closure and Glenda pushes for a memorial on familiar grounds to honor the victims."));

    videoSerie* s5 = new videoSerie("010", "The Boys", 62, "Acción", 4.4, "THE BOYS is an irreverent take on what happens when superheroes, who are as popular as celebrities, as influential as politicians and as revered as Gods, abuse their superpowers rather than use them for good.", "Temporada 1");
    s5->agregarEpisodio(new video("010-1", "The Name of the Game", 62, "Acción", 4.4, "When a Supe kills the love of his life, A/V salesman Hughie Campbell teams up with Billy Butcher, a vigilante hell-bent on punishing corrupt Supes -- and Hughie’s life will never be the same again."));
    s5->agregarEpisodio(new video("010-2", "Cherry", 61, "Acción", 4.5, "The Boys get themselves a Superhero, Starlight gets payback, Homelander gets naughty, and a Senator gets naughtier."));
    s5->agregarEpisodio(new video("010-3", "Get Some", 58, "Acción", 4.6, "It’s the race of the century. A-Train versus Shockwave, vying for the title of World’s Fastest Man. Meanwhile, the Boys are reunited and it feels so good."));

    // Biblioteca combinada
    vector<video*> biblioteca;
    biblioteca.insert(biblioteca.end(), peliculas.begin(), peliculas.end());
    biblioteca.insert(biblioteca.end(), {s1, s2, s3, s4, s5});

    //Menu principal
    int opcion;
    while (true) {
        cout << "\nMenú de opciones:\n";
        cout << "1. Ver biblioteca\n";
        cout << "2. Mostrar información de un video\n";
        cout << "3. Calificar un video\n";
        cout << "4. Mostrar mejor calificado\n";
        cout << "5. Mostrar por género\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        //biblioteca
        if (opcion == 1) {
            mostrarBiblioteca(biblioteca);
            //inofrmacion de un video
        } else if (opcion == 2) {
            int videoSeleccionado;
            mostrarBiblioteca(biblioteca);
            cout << "Seleccione un video para ver la información: ";
            cin >> videoSeleccionado;

            if (videoSeleccionado > 0 && videoSeleccionado <= biblioteca.size()) {
                biblioteca[videoSeleccionado - 1]->mostrarinfovideo();
            } else {
                cout << "Opción no válida.\n";
            }
            //calificar un video
        } else if (opcion == 3) {
            int videoSeleccionado;
            float calificacion;
            mostrarBiblioteca(biblioteca);
            cout << "Seleccione un video para calificar: ";
            cin >> videoSeleccionado;

            if (videoSeleccionado > 0 && videoSeleccionado <= biblioteca.size()) {
                cout << "Ingrese la calificación (1 a 5): ";
                cin >> calificacion;
                biblioteca[videoSeleccionado - 1]->calificarvideo(calificacion);
            } else {
                cout << "Opción no válida.\n";
            }
            //mejor calificado
        } else if (opcion == 4) {
            video* mejorCalificado = biblioteca[0];
            for (video* v : biblioteca) {
                if (*v > *mejorCalificado) {
                    mejorCalificado = v;
                }
            }
            cout << "El video mejor calificado es:\n";
            mejorCalificado->mostrarinfovideo();
        } else if (opcion == 5) {//mostrar por genero
            string genero;
            cout << "Ingrese el género que desea ver: ";
            cin.ignore();
            getline(cin, genero);
            cout << "Videos del género " << genero << ":\n";
            for (video* v : biblioteca) {
                if (v->getGenero() == genero) {
                    v->mostrarinfovideo();
                }
            }//salir
        } else if (opcion == 6) {
            break;
        } else {
            cout << "Opción no válida.\n";
        }
    }

    // Liberar memoria
    for (video* v : biblioteca) {
        delete v;
    }

    return 0;
}