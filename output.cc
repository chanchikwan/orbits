#include "orbits.h"
#include <cstdlib>
#include <unistd.h>

void output(FILE *f, const data *d, const char *cmd, real dt)
{
	fprintf(f, "#!%s %g\n", cmd, dt);
	for(size_t i = 0; i < d->n; ++i)
		fprintf(f, "%g %g %g %g %g %g %g\n",
		        d->p[i].m,
		        d->p[i].r.x, d->p[i].r.y, d->p[i].r.z,
		        d->p[i].u.x, d->p[i].u.y, d->p[i].u.z);
}
