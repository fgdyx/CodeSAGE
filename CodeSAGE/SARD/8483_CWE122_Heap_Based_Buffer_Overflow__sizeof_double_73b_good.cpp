#ifndef VAR1
void FUN1(VAR2<double *> VAR3)
{
 double * VAR4 = VAR3.FUN2();
 FUN3(*VAR4);
 free(VAR4);
}
#endif
