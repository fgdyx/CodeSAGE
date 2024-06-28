#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 {
 char VAR3[10+1] = VAR4;
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
