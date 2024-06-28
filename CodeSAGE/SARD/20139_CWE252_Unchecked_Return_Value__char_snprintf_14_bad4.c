#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: Do not check the return value */
 FUN2(VAR4,100-strlen(VAR5)-1, "", VAR5);
 }
 }
}
#endif
