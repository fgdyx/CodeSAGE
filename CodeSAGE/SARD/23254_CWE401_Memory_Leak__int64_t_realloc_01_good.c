#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 ;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
