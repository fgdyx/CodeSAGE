#ifndef VAR1
void FUN1(VAR2<double *> VAR3);
static void FUN2()
{
 double * VAR4;
 VAR2<double *> VAR3;
 VAR4 = NULL;
 VAR4 = (double *)malloc(sizeof(*VAR4));
 *VAR4 = 1.7E300;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
