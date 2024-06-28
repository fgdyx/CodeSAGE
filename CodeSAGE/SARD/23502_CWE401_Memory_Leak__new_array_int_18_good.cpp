#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 goto VAR4;
VAR4:
 delete[] VAR2;
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 int VAR5[100];
 VAR2 = VAR5;
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 goto VAR4;
VAR4:
 ;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
