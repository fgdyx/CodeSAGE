#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 double * VAR3;
 VAR3 = NULL;
 VAR3 = (double *)malloc(sizeof(*VAR3));
 *VAR3 = 1.7E300;
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
