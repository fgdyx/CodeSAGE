#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR4 = (char *)FUN4(50*sizeof(char));
 char * VAR5 = (char *)FUN4(100*sizeof(char));
 VAR2 = VAR5;
 VAR2[0] = '';
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
