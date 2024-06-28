#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 size_t VAR4, VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 VAR5 = strlen(VAR6);
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR6[VAR4] = VAR2[VAR4];
 }
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR7 = (char *)FUN4(50*sizeof(char));
 char * VAR8 = (char *)FUN4(100*sizeof(char));
 memset(VAR7, '', 50-1);
 VAR7[50-1] = '';
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 VAR2 = VAR8;
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
