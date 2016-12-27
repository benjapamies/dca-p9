# include "lib.c"

int
main( int argc, char** argv ) {
	if( argc != 2 ) {
		fprintf( stderr, "Tienes que pasar el nombre del fichero por parámetro.\n" );
		return( -1 );
	}
	leerFichero( argv[1] );
	return( 0 );
}
