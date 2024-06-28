#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)FUN4(100*sizeof(char));
 strcpy(VAR2, "");
 FUN5(VAR2);
 VAR3 = VAR2;
 FUN1();
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR4[] = "";
 VAR2 = strdup(VAR4);
 FUN5(VAR2);
 }
 VAR5 = VAR2;
 FUN2();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
