#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int FUN1(int VAR4)
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
 int VAR4;
 VAR4 = -1;
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
static int FUN4(int VAR4)
{
 if(VAR3)
 {
 VAR4 = 100-1;
 }
 return VAR4;
}
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
