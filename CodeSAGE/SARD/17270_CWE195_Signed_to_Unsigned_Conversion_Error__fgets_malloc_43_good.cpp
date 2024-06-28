#ifndef VAR1
static void FUN1(int &VAR2)
{
 VAR2 = 100-1;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN3(VAR3);
 free(VAR3);
 }
}
void FUN4()
{
 FUN2();
}
#endif
