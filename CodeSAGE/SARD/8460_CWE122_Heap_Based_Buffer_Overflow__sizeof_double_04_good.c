#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (double *)malloc(sizeof(*VAR2));
 *VAR2 = 1.7E300;
 }
 FUN3(*VAR2);
 free(VAR2);
}
static void FUN4()
{
 double * VAR2;
 VAR2 = NULL;
 if(VAR4)
 {
 VAR2 = (double *)malloc(sizeof(*VAR2));
 *VAR2 = 1.7E300;
 }
 FUN3(*VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
