#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR5[VAR4] = VAR2[VAR4];
 }
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR6 = (char *)FUN4(100*sizeof(char));
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 VAR2 = VAR6;
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
