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
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR2 < 100)
 {
 memcpy(VAR6, VAR5, VAR2);
 VAR6[VAR2] = '';
 }
 FUN2(VAR6);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
