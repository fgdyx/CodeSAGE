#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 FUN2(VAR4, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR5 = (char *)FUN5(100*sizeof(char));
 VAR2 = VAR5;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3 = VAR2;
 FUN1();
}
void FUN6()
{
 FUN4();
}
#endif
