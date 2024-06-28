#ifndef VAR1
static void FUN1(char * VAR2)
{
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
