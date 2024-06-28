#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 goto VAR3;
VAR3:
 ;
 goto VAR4;
VAR4:
 VAR2 = "";
 FUN2(VAR2);
}
static void FUN3()
{
 char * VAR2;
 goto VAR3;
VAR3:
 VAR2 = "";
 goto VAR4;
VAR4:
 FUN2(VAR2);
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
