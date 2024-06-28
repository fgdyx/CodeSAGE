#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 }
 {
 char VAR4[50] = "";
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR3);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
 VAR4[50-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
