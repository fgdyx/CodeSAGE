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
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
