#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 FUN2("");
 /* FLAW: Do not check the return value */
 fgets(VAR4, 100, stdin);
 FUN2(VAR4);
 }
}
#endif
