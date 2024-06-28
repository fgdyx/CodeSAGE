#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (sscanf(VAR5, "", VAR4) == VAR6)
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
