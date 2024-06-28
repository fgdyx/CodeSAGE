#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 FUN2(VAR2);
 }
 }
 if(0)
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
 if(1)
 {
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 FUN2(VAR2);
 }
 }
 if(1)
 {
 free(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (char *)FUN5(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(1)
 {
 ;
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (char *)FUN5(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(1)
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
