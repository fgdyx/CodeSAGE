#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 VAR2 = (char *)FUN3(100*sizeof(char));
 strcpy(VAR2, "");
 FUN4(VAR2);
 FUN5(VAR2);
}
void FUN6(char * VAR2);
static void FUN7()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR5;
 VAR2 = NULL;
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN4(VAR2);
 FUN5(VAR2);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
