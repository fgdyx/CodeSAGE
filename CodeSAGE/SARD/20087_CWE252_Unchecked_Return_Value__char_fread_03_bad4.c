#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: Do not check the return value */
 fread((char *)VAR3, sizeof(char), (VAR4)(100-1), stdin);
 }
 }
}
#endif
