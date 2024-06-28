#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3((10)*sizeof(char));
 char * VAR4 = (char *)FUN3((10+1)*sizeof(char));
 VAR2 = VAR4;
 VAR2[0] = '';
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
