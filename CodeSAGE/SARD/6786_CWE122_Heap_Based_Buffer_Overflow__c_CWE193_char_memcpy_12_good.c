#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 }
 else
 {
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 }
 {
 char VAR3[10+1] = VAR4;
 memcpy(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
