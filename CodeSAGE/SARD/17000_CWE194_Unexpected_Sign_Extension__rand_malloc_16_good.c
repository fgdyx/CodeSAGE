#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = 100-1;
 break;
 }
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
