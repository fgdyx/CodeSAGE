#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 memcpy(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR5) (char *) = VAR6;
 VAR2 = NULL;
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
