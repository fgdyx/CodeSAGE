#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 break;
 }
 {
 char VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
