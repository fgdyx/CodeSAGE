#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: Do not check the return value */
 FUN2(VAR3,100-strlen(VAR4)-1, "", VAR4);
 }
 break;
 }
}
#endif
