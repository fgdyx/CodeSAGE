#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN2(*VAR2);
}
static void FUN3()
{
 double * VAR2;
 ;
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN2(*VAR2);
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
