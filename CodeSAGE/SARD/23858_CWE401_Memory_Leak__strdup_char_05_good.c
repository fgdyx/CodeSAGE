#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 char VAR4[] = "";
 VAR2 = strdup(VAR4);
 FUN2(VAR2);
 }
 }
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 char VAR4[] = "";
 VAR2 = strdup(VAR4);
 FUN2(VAR2);
 }
 }
 if(VAR3)
 {
 free(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (char *)FUN5(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(VAR3)
 {
 ;
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (char *)FUN5(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(VAR3)
 {
 ;
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
