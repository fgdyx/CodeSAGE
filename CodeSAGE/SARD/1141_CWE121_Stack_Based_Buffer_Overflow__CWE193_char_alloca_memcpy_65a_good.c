#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char * VAR5 = (char *)FUN3((10)*sizeof(char));
 char * VAR6 = (char *)FUN3((10+1)*sizeof(char));
 VAR2 = VAR6;
 VAR2[0] = '';
 FUN4(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
