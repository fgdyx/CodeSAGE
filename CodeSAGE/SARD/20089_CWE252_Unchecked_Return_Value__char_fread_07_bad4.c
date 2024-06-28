#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: Do not check the return value */
 fread((char *)VAR4, sizeof(char), (VAR5)(100-1), stdin);
 }
 }
}
#endif
