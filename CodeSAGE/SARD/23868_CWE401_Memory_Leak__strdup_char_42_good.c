#ifndef VAR1
static char * FUN1(char * VAR2)
{
 VAR2 = (char *)FUN2(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 return VAR2;
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 ;
}
static char * FUN5(char * VAR2)
{
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 FUN3(VAR2);
 }
 return VAR2;
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN5(VAR2);
 free(VAR2);
}
void FUN7()
{
 FUN6();
 FUN4();
}
#endif
