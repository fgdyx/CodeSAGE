#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 strcpy(VAR2, VAR4);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR6 = (char *)FUN4((10)*sizeof(char));
 char * VAR7 = (char *)FUN4((10+1)*sizeof(char));
 VAR2 = VAR7;
 VAR2[0] = '';
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
