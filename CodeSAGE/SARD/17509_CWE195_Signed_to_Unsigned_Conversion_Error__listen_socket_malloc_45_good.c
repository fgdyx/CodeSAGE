#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 if (VAR2 < 100)
 {
 char * VAR4 = (char *)malloc(VAR2);
 memset(VAR4, '', VAR2-1);
 VAR4[VAR2-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 100-1;
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
