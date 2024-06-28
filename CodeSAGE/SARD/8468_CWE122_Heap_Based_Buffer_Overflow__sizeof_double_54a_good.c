#ifndef VAR1
void FUN1(double * VAR2);
static void FUN2()
{
 double * VAR2;
 VAR2 = NULL;
 VAR2 = (double *)malloc(sizeof(*VAR2));
 *VAR2 = 1.7E300;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
