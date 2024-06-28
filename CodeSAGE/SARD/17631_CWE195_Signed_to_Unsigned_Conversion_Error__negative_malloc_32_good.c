#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 VAR2 = 100-1;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 if (VAR2 < 100)
 {
 char * VAR5 = (char *)malloc(VAR2);
 memset(VAR5, '', VAR2-1);
 VAR5[VAR2-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
