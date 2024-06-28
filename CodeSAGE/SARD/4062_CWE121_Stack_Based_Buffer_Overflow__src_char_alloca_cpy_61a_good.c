#ifndef VAR1
char * FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR2);
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN2();
}
#endif
