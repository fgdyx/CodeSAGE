#ifndef VAR1
static void FUN1(short VAR2)
{
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
static void FUN3()
{
 short VAR2;
 void (*VAR4) (short) = VAR5;
 VAR2 = 0;
 VAR2 = 100-1;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
