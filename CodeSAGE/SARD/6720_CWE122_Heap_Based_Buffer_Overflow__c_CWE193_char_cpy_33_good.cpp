#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 {
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 strcpy(VAR2, VAR4);
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
