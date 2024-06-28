#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 goto VAR5;
VAR5:
 free(VAR3);
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = new VAR2[100];
 goto VAR5;
VAR5:
 delete [] VAR3;
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
