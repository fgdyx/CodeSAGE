#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (scanf("", VAR4) == VAR5)
 {
 FUN2("");
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
