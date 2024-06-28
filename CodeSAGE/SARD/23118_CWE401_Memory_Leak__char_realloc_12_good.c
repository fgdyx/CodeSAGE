#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 else
 {
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 free(VAR2);
 }
 else
 {
 free(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (char *)FUN5(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 else
 {
 VAR2 = (char *)FUN5(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
