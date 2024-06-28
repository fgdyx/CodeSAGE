#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
