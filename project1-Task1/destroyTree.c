
#include "stdio.h"
#include "stdlib.h"

#include "treeStructure.h"
#include "destroyTree.h"

// destroy the tree to

void destroyTree( Node *node )
{
	int i;

  if ( node->child[0] == NULL )
      free( node );
  else {
    for ( i=0; i<4; ++i ) {
		  destroyTree( node->child[i] );
    }
	// make other nodes be destroyed
	free( node );
  }
  return;
}