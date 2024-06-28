#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)FUN2(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 const VAR3& VAR4 = FUN4();
 VAR4.FUN5(VAR2);
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 const VAR3& VAR4 = FUN7();
 VAR4.FUN5(VAR2);
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
