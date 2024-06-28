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
 if (VAR3 < 100)
 {
 char * VAR4 = (char *)malloc(VAR3);
 memset(VAR4, '', VAR3-1);
 VAR4[VAR3-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
