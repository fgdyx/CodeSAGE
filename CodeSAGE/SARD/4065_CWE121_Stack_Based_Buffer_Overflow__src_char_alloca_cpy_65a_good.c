#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 VAR2 = VAR5;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN4(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
