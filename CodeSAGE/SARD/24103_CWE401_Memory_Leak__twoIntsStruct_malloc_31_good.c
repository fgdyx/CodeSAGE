#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
 ;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
