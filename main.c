# include <stdio.h>

void
leerFichero() {
	FILE *fichero = fopen( "fichero_prueba.txt", "r" );
	if( fichero != NULL ) {
		char caracter;
		while( feof( fichero ) == 0 ) {
			caracter = fgetc( fichero );
			printf( "%c", caracter );
		}
		fclose( fichero );
	} else {
		printf( "Error al abrir el fichero.\n" );
	}
}

int
main( int argc, char** argv ) {
	leerFichero();
	return( 0 );
}
