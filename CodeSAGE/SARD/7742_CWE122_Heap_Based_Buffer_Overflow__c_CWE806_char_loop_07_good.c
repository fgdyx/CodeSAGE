#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR2);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR4[VAR5] = VAR2[VAR5];
 }
 VAR4[50-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 if(VAR3==5)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR2);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR4[VAR5] = VAR2[VAR5];
 }
 VAR4[50-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
