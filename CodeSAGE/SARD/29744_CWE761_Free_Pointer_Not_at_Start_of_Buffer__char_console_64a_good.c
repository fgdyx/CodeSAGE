#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR3[0] = '';
 {
 size_t VAR4 = strlen(VAR3);
 if (100-VAR4 > 1)
 {
 if (fgets(VAR3+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = strlen(VAR3);
 if (VAR4 > 0 && VAR3[VAR4-1] == '')
 {
 VAR3[VAR4-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR3[VAR4] = '';
 }
 }
 }
 FUN1(&VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
