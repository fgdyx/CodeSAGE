#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: Do not check the return value */
 fscanf(stdin, "", VAR4);
 }
}
#endif
