#ifndef SHAPITO_READ_H
#define SHAPITO_READ_H

/*
 * Shapito.
 *
 * Protocol-level PostgreSQL client library.
*/

int shapito_read_startup(uint32_t*, char**, uint32_t*);
int shapito_read(uint32_t*, char**, uint32_t*);

#endif /* SHAPITO_READ_H */
