#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if(VAR5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 size_t VAR6, VAR7;
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 VAR7 = strlen(VAR8);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR2[VAR6];
 }
 VAR8[100-1] = '';
 FUN3(VAR8);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if(VAR5==5)
 {
 VAR2 = VAR4;
 }
 {
 size_t VAR6, VAR7;
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 VAR7 = strlen(VAR8);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR2[VAR6];
 }
 VAR8[100-1] = '';
 FUN3(VAR8);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
