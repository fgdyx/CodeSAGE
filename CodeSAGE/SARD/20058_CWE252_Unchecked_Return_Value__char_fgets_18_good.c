#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 FUN2("");
 if (fgets(VAR4, 100, stdin) == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 FUN2(VAR4);
 }
}
void FUN4()
{
 FUN1();
}
#endif
