#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 FUN3(VAR2);
 }
 }
 if(FUN4())
 {
 FUN3("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 FUN3(VAR2);
 }
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN4())
 {
 FUN3("");
 }
 else
 {
 VAR2 = (char *)FUN7(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN8()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (char *)FUN7(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 ;
 }
}
void FUN9()
{
 FUN1();
 FUN5();
 FUN6();
 FUN8();
}
#endif
