#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (char *)malloc((10+1)*sizeof(char));
 }
 {
 char VAR4[10+1] = VAR5;
 memcpy(VAR3, VAR4, (strlen(VAR4) + 1) * sizeof(char));
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
