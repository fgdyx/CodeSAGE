#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN2(&VAR5[0]);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 free(VAR5);
 }
}
static void FUN3()
{
 int VAR8,VAR9;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 VAR5 = (VAR4 *)FUN4(100*sizeof(VAR4));
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN2(&VAR5[0]);
 }
 for(VAR9 = 0; VAR9 < 1; VAR9++)
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
