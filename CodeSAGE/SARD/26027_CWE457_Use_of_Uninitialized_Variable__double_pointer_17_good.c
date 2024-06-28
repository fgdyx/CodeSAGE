#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 double * VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 ;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 VAR4 = (double *)malloc(sizeof(double));
 *VAR4 = 5.0;
 FUN2(*VAR4);
 }
}
static void FUN3()
{
 int VAR5,VAR6;
 double * VAR4;
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 VAR4 = (double *)malloc(sizeof(double));
 *VAR4 = 5.0;
 }
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 FUN2(*VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
