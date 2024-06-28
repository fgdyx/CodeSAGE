#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR4;
 VAR2[0] = '';
 {
 char * VAR5 = VAR2;
 char * VAR2 = VAR5;
 {
 size_t VAR6;
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR7[VAR6];
 }
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
