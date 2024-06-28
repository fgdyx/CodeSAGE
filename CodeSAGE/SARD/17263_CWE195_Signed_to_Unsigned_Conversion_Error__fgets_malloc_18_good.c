#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 VAR2 = 100-1;
 if (VAR2 < 100)
 {
 char * VAR4 = (char *)malloc(VAR2);
 memset(VAR4, '', VAR2-1);
 VAR4[VAR2-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
