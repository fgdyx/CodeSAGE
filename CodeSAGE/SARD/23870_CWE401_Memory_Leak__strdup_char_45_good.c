#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 ;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)FUN3(100*sizeof(char));
 strcpy(VAR2, "");
 FUN4(VAR2);
 VAR3 = VAR2;
 FUN1();
}
static void FUN5()
{
 char * VAR2 = VAR4;
 free(VAR2);
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR5[] = "";
 VAR2 = strdup(VAR5);
 FUN4(VAR2);
 }
 VAR4 = VAR2;
 FUN5();
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
