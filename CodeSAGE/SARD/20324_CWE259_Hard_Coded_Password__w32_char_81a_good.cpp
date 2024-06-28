#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR4 = 0;
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN2("");
 VAR2[0] = '';
 }
 VAR4 = strlen(VAR2);
 if (VAR4 > 0)
 {
 VAR2[VAR4-1] = '';
 }
 }
 const VAR5& VAR6 = FUN3();
 VAR6.FUN4(VAR2);
}
void FUN5()
{
 FUN1();
}
#endif
