#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int FUN1(int VAR4);
static void FUN2()
{
 int VAR4;
 VAR4 = -1;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 if (VAR4 < 100)
 {
 char * VAR5 = (char *)malloc(VAR4);
 memset(VAR5, '', VAR4-1);
 VAR5[VAR4-1] = '';
 FUN3(VAR5);
 free(VAR5);
 }
}
int FUN4(int VAR4);
static void FUN5()
{
 int VAR4;
 VAR4 = -1;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 if (VAR4 < 100)
 {
 char * VAR5 = (char *)malloc(VAR4);
 memset(VAR5, '', VAR4-1);
 VAR5[VAR4-1] = '';
 FUN3(VAR5);
 free(VAR5);
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
