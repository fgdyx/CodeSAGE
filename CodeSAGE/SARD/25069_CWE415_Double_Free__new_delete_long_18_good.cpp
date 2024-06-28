#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new long;
 delete VAR2;
 goto VAR4;
VAR4:
 ;
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new long;
 goto VAR4;
VAR4:
 delete VAR2;
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
