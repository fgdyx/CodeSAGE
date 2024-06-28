#ifndef VAR1
void FUN1()
{
 int VAR2;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: Do not check the return value */
 sscanf(VAR5, "", VAR4);
 }
 }
}
#endif
