#include <tiffio.h>
#include <stdlib.h>

int main( int argc, char ** argv )

{
    TIFF *hTIFF;

    if( argc < 2 )
    {
        printf( "Usage: safix <filename>.tif\n" );
        exit( 1 );
    }

    hTIFF = TIFFOpen( argv[1], "r+" );

    TIFFSetField( hTIFF, TIFFTAG_BITSPERSAMPLE, 12 );

    TIFFClose( hTIFF );
}
