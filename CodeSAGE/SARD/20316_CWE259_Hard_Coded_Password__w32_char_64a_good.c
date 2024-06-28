#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = 0;
 if (fgets(VAR3, 100, stdin) == NULL)
 {
 FUN3("");
 VAR3[0] = '';
 }
 VAR5 = strlen(VAR3);
 if (VAR5 > 0)
 {
 VAR3[VAR5-1] = '';
 }
 }
 FUN1(&VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
