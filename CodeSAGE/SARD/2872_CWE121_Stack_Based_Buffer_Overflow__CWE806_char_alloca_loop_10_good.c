#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 if(VAR4)
 {
 FUN3("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR5[50] = "";
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR2);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR2[VAR6];
 }
 VAR5[50-1] = '';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 if(VAR8)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR5[50] = "";
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR2);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR2[VAR6];
 }
 VAR5[50-1] = '';
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
