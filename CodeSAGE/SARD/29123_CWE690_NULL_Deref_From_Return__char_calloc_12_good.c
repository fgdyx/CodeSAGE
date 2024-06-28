#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(20, sizeof(char));
 if(FUN2())
 {
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN3(VAR2);
 free(VAR2);
 }
 }
 else
 {
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN3(VAR2);
 free(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
