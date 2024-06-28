#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = new VAR2[100];
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 goto VAR5;
VAR5:
 delete[] VAR3;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 int64_t VAR6[100];
 VAR3 = VAR6;
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 goto VAR5;
VAR5:
 ;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
