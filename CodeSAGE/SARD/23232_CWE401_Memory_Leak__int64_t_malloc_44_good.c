#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 ;
}
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN4(VAR3[0]);
 FUN5(VAR3);
}
static void FUN6(VAR2 * VAR3)
{
 free(VAR3);
}
static void FUN7()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR6;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN4(VAR3[0]);
 FUN5(VAR3);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
