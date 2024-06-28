#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
