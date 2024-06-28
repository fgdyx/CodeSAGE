#ifndef VAR1
static char * FUN1(char * VAR2)
{
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 char VAR3[10+1] = VAR4;
 strcpy(VAR2, VAR3);
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
