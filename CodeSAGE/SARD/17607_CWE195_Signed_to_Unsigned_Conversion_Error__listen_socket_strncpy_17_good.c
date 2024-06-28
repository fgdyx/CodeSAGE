#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = 100-1;
 }
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR3 < 100)
 {
 strncpy(VAR5, VAR4, VAR3);
 VAR5[VAR3] = '';
 }
 FUN2(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
