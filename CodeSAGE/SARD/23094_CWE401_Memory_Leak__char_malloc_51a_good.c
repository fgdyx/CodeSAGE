#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)FUN3(100*sizeof(char));
 strcpy(VAR2, "");
 FUN4(VAR2);
 FUN1(VAR2);
}
void FUN5(char * VAR2);
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 strcpy(VAR2, "");
 FUN4(VAR2);
 FUN5(VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
