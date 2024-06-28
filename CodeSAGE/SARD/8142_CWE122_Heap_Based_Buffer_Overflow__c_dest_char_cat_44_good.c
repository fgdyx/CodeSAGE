#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strcat(VAR2, VAR3);
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
