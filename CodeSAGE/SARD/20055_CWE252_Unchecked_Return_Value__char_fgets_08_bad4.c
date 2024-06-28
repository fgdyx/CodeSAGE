#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 FUN3("");
 /* FLAW: Do not check the return value */
 fgets(VAR3, 100, stdin);
 FUN3(VAR3);
 }
 }
}
#endif
