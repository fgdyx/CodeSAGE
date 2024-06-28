#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strcat(VAR2, VAR4);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR5 = (char *)FUN4(50*sizeof(char));
 char * VAR6 = (char *)FUN4(100*sizeof(char));
 VAR2 = VAR6;
 VAR2[0] = '';
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
