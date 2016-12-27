# include <stdio.h>

const int TAM = 8000;

void
escribirFichero( char caracteres[], int num ) {
	FILE *fichero = fopen( "salida.txt", "w" );
	fwrite( caracteres, sizeof(char), num, fichero );
	fclose( fichero );
}

void
leerFichero( char* nombre ) {
	FILE *fichero = fopen( nombre, "r" );
	if( fichero != NULL ) {
		int num;
		char caracteres[TAM+1];
		while( !feof( fichero ) ) {
			num = fread( caracteres, sizeof(char), TAM, fichero );
			caracteres[num*sizeof(char)] = '\0';
		}
		escribirFichero( caracteres, num );
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
