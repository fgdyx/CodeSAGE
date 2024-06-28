#ifndef VAR1
static void FUN1(double * &VAR2)
{
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
}
static void FUN2()
{
 double * VAR2;
 FUN1(VAR2);
 FUN3(*VAR2);
}
static void FUN4(double * &VAR2)
{
 ;
}
static void FUN5()
{
 double * VAR2;
 FUN4(VAR2);
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN3(*VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
