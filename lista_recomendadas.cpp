/* La idea es maso menos un modelo de como ir comparando las dos listas e ir agregando
Esta hecho con metodos que no definimos pero es para que se entiende sin que sea pseudocodigo.
No es un codigo tan complejo, los metodos a implementar yo los tengo hechos sin templates pero si asi queda bien los implementamos
Faltaria comparar los actores pero con genero, director y puntaje funciona.
Creo que lo ideal seria tener una clase que maneje las listas y las tenga como atributos.
Por lo menos las de vistas y no vistas que si o si vamos a leer desde el comienzo del programa.
*/
/*
Lista <Pelicula*> cargar_lista_recomendadas(Lista<Pelicula*> &lista_peliculas_vistas, Lista<Pelicula*> &lista_peliculas_no_vistas);
  Lista <Pelicula*> lista_peliculas_recomendadas;
  for( unsigned i = 1; i<=lista_peliculas_no_vistas.obtener_tam(); i++){
     for( unsigned j = 1; j<=lista_peliculas_vistas.obtener_tam(); j++){
       if( lista_peliculas_no_vistas.consultar(i).obtener_valoracion() >= 7){
           lista_peliculas_recomendadas.append(lista_peliculas_no_vistas.consultar(i));
           break;
       }
       if(lista_peliculas_vistas.consultar(j).obtener_director() == lista_peliculas_no_vistas.consultar(i).obtener_director()){
         cout << "El director coincide y es: " << lista_peliculas_no_vistas.consultar(i).obtener_director() << ".\n";
         lista_peliculas_recomendadas.append(lista_peliculas_no_vistas.consultar(i));
         break;
       }
       else if(lista_peliculas_vistas.consultar(j).obtener_genero() == lista_peliculas_no_vistas.consultar(i).obtener_genero()){
         lista_peliculas_recomendadas.append(lista_peliculas_no_vistas.consultar(i));
         break;
       }
     }
  }
  return lista_peliculas_recomendadas;
*/