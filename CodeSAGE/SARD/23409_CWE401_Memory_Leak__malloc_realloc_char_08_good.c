#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 char * VAR2 = (char *)malloc(100*sizeof(char));
 char * VAR3;
 strcpy(VAR2, "");
 FUN3(VAR2);
 VAR3 = (char *)realloc(VAR2, (130000)*sizeof(char));
 if (VAR3 != NULL)
 {
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 free(VAR2);
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 {
 char * VAR2 = (char *)malloc(100*sizeof(char));
 char * VAR3;
 strcpy(VAR2, "");
 FUN3(VAR2);
 VAR3 = (char *)realloc(VAR2, (130000)*sizeof(char));
 if (VAR3 != NULL)
 {
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 free(VAR2);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
