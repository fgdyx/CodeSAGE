#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)FUN2(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 ;
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
