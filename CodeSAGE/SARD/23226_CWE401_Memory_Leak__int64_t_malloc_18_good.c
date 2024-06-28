#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 goto VAR5;
VAR5:
 free(VAR3);
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = (VAR2 *)FUN4(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 goto VAR5;
VAR5:
 ;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
