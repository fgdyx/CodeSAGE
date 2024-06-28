#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(20, sizeof(char));
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(20, sizeof(char));
 if(VAR3==5)
 {
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
