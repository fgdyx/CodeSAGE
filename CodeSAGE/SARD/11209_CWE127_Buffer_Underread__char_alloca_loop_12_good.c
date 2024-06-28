#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(FUN3())
 {
 VAR2 = VAR3;
 }
 else
 {
 VAR2 = VAR3;
 }
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
 FUN4(VAR5);
 }
}
void FUN5()
{
 FUN1();
}
#endif
