#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 strncpy(VAR2, VAR3, strlen(VAR3) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
