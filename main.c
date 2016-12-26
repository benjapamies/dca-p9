# include <stdio.h>

void
leerFichero( char* nombre ) {
	FILE *fichero = fopen( nombre, "r" );
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
	if( argc != 2 ) {
		fprintf( stderr, "Tienes que pasar el nombre del fichero por parámetro.\n" );
		return( -1 );
	}
	leerFichero( argv[1] );
	return( 0 );
}
