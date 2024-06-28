#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static char * FUN1(char * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR5
 strcat(VAR4, "");
#else
 strcat(VAR4, "");
#endif
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 char VAR6[VAR7] = "";
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 ofstream VAR8;
 VAR8.open((char *)VAR4);
 VAR8.close();
 }
 ;
}
static char * FUN4(char * VAR4)
{
 if(VAR3)
 {
#ifdef VAR5
 strcat(VAR4, "");
#else
 strcat(VAR4, "");
#endif
 }
 return VAR4;
}
static void FUN5()
{
 char * VAR4;
 char VAR6[VAR7] = "";
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 ofstream VAR8;
 VAR8.open((char *)VAR4);
 VAR8.close();
 }
 ;
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
