#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static short FUN1(short VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR4 = 100-1;
 }
 return VAR4;
}
static void FUN3()
{
 short VAR4;
 VAR4 = 0;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 if (VAR4 < 100)
 {
 char * VAR5 = (char *)malloc(VAR4);
 memset(VAR5, '', VAR4-1);
 VAR5[VAR4-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
}
static short FUN4(short VAR4)
{
 if(VAR3)
 {
 VAR4 = 100-1;
 }
 return VAR4;
}
static void FUN5()
{
 short VAR4;
 VAR4 = 0;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 if (VAR4 < 100)
 {
 char * VAR5 = (char *)malloc(VAR4);
 memset(VAR5, '', VAR4-1);
 VAR5[VAR4-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
