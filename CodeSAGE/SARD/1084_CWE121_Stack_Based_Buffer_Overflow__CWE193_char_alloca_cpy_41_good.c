#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR5 = (char *)FUN4((10)*sizeof(char));
 char * VAR6 = (char *)FUN4((10+1)*sizeof(char));
 VAR2 = VAR6;
 VAR2[0] = '';
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
