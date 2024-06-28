#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 char * VAR4;
 strcpy(VAR3, "");
 FUN2(VAR3);
 VAR4 = (char *)realloc(VAR3, (130000)*sizeof(char));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 strcpy(VAR3, "");
 FUN2(VAR3);
 }
 free(VAR3);
 }
 }
}
static void FUN3()
{
 if(VAR5)
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 char * VAR4;
 strcpy(VAR3, "");
 FUN2(VAR3);
 VAR4 = (char *)realloc(VAR3, (130000)*sizeof(char));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 strcpy(VAR3, "");
 FUN2(VAR3);
 }
 free(VAR3);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
