#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
 VAR5[0] = 5LL;
 FUN2(VAR5[0]);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 free(VAR5);
 }
}
static void FUN3()
{
 int VAR6,VAR7;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 VAR5 = (VAR4 *)FUN4(100*sizeof(VAR4));
 VAR5[0] = 5LL;
 FUN2(VAR5[0]);
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 ;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
