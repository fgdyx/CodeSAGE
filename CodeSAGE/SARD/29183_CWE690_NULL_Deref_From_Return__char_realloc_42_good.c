#ifndef VAR1
static char * FUN1(char * VAR2)
{
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
