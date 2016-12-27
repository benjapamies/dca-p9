# include <stdio.h>

void
escribirFichero( char texto[] ) {
	FILE *fichero = fopen( "salida.txt", "w" );
	fprintf( fichero, texto );
	fclose( fichero );
}

void
leerFichero( char* nombre ) {
	FILE *fichero = fopen( nombre, "r" );
	if( fichero != NULL ) {
		char texto[100];
		int i = 0;
		while( feof( fichero ) == 0 ) {
			texto[i] = fgetc( fichero );
			i ++;
		}
		escribirFichero( texto );
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
