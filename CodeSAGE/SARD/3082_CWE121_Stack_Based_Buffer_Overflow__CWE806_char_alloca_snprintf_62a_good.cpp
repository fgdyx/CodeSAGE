#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 char VAR4[50] = "";
 FUN4(VAR4, strlen(VAR2), "", VAR2);
 FUN5(VAR2);
 }
}
void FUN6()
{
 FUN2();
}
#endif
