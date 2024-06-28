#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: Do not check the return value */
 scanf("", VAR3);
 }
 }
}
#endif
